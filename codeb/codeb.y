%{
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#include "list.h"
	#include "assembler.h"
	#include "tree.h"
	int flag;
	void yyerror(const char *s);
	long ifCount = 0;
	int guardCount = 0;
%}
%token NUM ID ARROW EQLARG COND CONTINUE END RETURN VAR BREAK NOT HEAD TAIL ISLIST OR
%start Program

@autoinh ids
@autosyn node

@attributes { char *name; } ID
@attributes { long value; } NUM
@attributes { list_t *in; list_t *out; } Stats
@attributes { list_t *ids; tree_t *node; } Expr Term ExprStartRep PlusTermRep MulTermRep OrTermRep DotTermRep ExprRep ExprRepRep MaybeExpr MaybeID
@attributes { list_t *in; list_t *out; tree_t *node; } Stat
@attributes { list_t *pars; short parCnt;} Pars ParsRep
@attributes { list_t *in; list_t *out; tree_t *node; } GuardedRep Guarded Cond
@attributes { tree_t *node; } ExprEnd
@attributes { short isCont; } ContinueOrBreak

@traversal @postorder trav
@traversal @preorder reg name
@traversal @postorder codegen


%%

Program:
	|	Program Funcdef ';'
	;

Funcdef:	ID '(' Pars ')' Stats END
	@{	@i @Stats.in@ = @Pars.pars@;
		@codegen @revorder(1) functionStart(@ID.name@);
	@}
       	|	ID '(' ')' Stats END
	@{	@i @Stats.in@ = newList(); 
		@codegen @revorder(1) functionStart(@ID.name@);
	@}
	;

Pars:		ParsRep ID
	@{	@i @Pars.pars@ = mergeLists(@ParsRep.pars@,addToList(newList(), @ID.name@, FALSE, TRUE, @ParsRep.parCnt@, -1), TRUE);
		@i @Pars.parCnt@ = @ParsRep.parCnt@ + 1;
	@}
	;

ParsRep:
	@{	@i @ParsRep.pars@ = newList();
		@i @ParsRep.parCnt@ = 0;
	@}
       	|	ParsRep ID ','
	@{	@i @ParsRep.0.parCnt@ = @ParsRep.1.parCnt@ + 1;
		@i @ParsRep.0.pars@ = mergeLists(@ParsRep.1.pars@,addToList(newList(), @ID.name@, FALSE, TRUE, @ParsRep.1.parCnt@, -1), TRUE); @}
	;
Stats:	
     	@{ @i @Stats.out@ = newList(); @}
     	|	Stats Stat ';'
	@{
		@i @Stat.in@ = mergeLists(@Stats.0.in@,@Stats.1.out@,FALSE);
		@i @Stats.0.out@ = mergeLists(@Stats.1.out@, @Stat.out@, FALSE);
		@i @Stats.1.in@ = @Stats.0.in@;
		@codegen burm_label(@Stat.node@); burm_reduce(@Stat.node@,1);
	@}
	;

Stat:		RETURN Expr
    	@{
		@i @Expr.ids@ = @Stat.in@;
		@i @Stat.out@ = newList();
		@i @Stat.node@ = newNode(OP_Return, @Expr.node@, NULL);
		@reg @Stat.node@->reg = getRegByNr(getNrDefVar(@Stat.in@)); @Expr.node@->reg = @Stat.node@->reg;
	@}
	|	Cond
	@{	
		@i @Stat.out@ = newList();
		@i @Cond.in@ = @Stat.in@;
		@i @Stat.node@ = newNode(OP_Blank,NULL,NULL);
	@}
	|	VAR ID '=' Expr
	@{
		@i @Expr.ids@ = @Stat.in@;
		@i @Stat.out@ = addVarToList(newList(), @ID.name@, FALSE, TRUE, getNrDefVar(@Stat.in@));
		@i @Stat.node@ = newNode(OP_Assign, @Expr.node@, NULL); @Stat.node@->parameter = getParIndex(@Stat.out@,@ID.name@); @Stat.node@->regIndex = getRegIndex(@Stat.out@, @ID.name@);
		@reg @Stat.node@->reg = getRegByNr(getNrDefVar(@Stat.in@)); @Expr.node@->reg = @Stat.node@->reg;
		@trav overlaps(@Stat.in@,@ID.name@,FALSE);
	@}
	|	ID '=' Expr
	@{	
		@i @Expr.ids@ = @Stat.in@;
		@trav isVisible(@Stat.in@, @ID.name@, FALSE);
		@i @Stat.out@ = newList();
		@i @Stat.node@ = newNode(OP_Assign, @Expr.node@, NULL); @Stat.node@->parameter = getParIndex(@Stat.in@,@ID.name@); @Stat.node@->regIndex = getRegIndex(@Stat.in@, @ID.name@);
		@reg @Stat.node@->reg = getRegByNr(getNrDefVar(@Stat.in@)); @Expr.node@->reg = @Stat.node@->reg; 
	@}
	;
Cond:		ID ':' COND GuardedRep END
	@{	@i @GuardedRep.in@ = mergeLists(@Cond.in@,addToList(newList(),@ID.name@,TRUE,TRUE,-1,-1),TRUE);
		@i @Cond.out@ = @GuardedRep.out@;
		@name @GuardedRep.node@->name = @ID.name@;
		@trav overlaps(@Cond.in@,@ID.name@,TRUE);
		@codegen @revorder(1) printf("cond_%s_start:\n", @ID.name@);
		@codegen printf("cond_%s_end:\n", @ID.name@);
	@}
    	|	COND GuardedRep END
	@{	@i @GuardedRep.in@ = @Cond.in@;
		@i @Cond.out@ = @GuardedRep.out@;
		@name ifCount++; @GuardedRep.node@->name = longToStr(ifCount);
		@codegen @revorder(1) printf("cond_%s_start:\n", @GuardedRep.node@->name);
		@codegen printf("cond_%s_end:\n", @GuardedRep.node@->name);
	@}
	;

GuardedRep:
	@{	@i @GuardedRep.out@ = newList(); 
		@i @GuardedRep.node@ = newNode(OP_Guarded, NULL, NULL);
	@}
	|	Guarded ';' GuardedRep
	@{	@i @GuardedRep.1.in@ = @GuardedRep.0.in@;
		@i @Guarded.in@ = @GuardedRep.0.in@;
		@i @GuardedRep.0.out@ = mergeLists(@GuardedRep.1.out@,@Guarded.out@,FALSE);
		@i @GuardedRep.0.node@ = newNode(OP_Guarded, NULL, NULL);
		@name @GuardedRep.1.node@->name = @GuardedRep.0.node@->name; @Guarded.node@->name = @GuardedRep.0.node@->name;
		@codegen @revorder(1) burm_label(@Guarded.node@); burm_reduce(@Guarded.node@,1);
	@}
	;

Guarded:	MaybeExpr ARROW Stats ContinueOrBreak MaybeID
	@{	@i @MaybeExpr.ids@ = @Guarded.in@;
		@i @Stats.in@ = @Guarded.in@;
		@i @Guarded.out@ = @Stats.out@;
		@i @MaybeID.ids@ = @Guarded.in@;
		@i @Guarded.node@ = newNode(OP_Guarded, @MaybeExpr.node@, NULL);
		@name @Guarded.node@->parameter = ++guardCount;
		@reg if(@MaybeExpr.node@->operator != OP_Blank) @MaybeExpr.node@->reg = getRegByNr(getNrDefVar(@Guarded.in@));
		@codegen guardJmpPrint(@ContinueOrBreak.isCont@, @MaybeID.node@->name, @Guarded.node@->name);
		@codegen printf("guard_%d:\n", @Guarded.node@->parameter);
	@}
       	;

MaybeExpr:
 	@{	@i @MaybeExpr.node@ = newNode(OP_Blank,NULL,NULL); @}	 
	|	Expr
	;

MaybeID:
       	@{	@i @MaybeID.node@ = newIDLeaf(OP_Id, NULL, 0, 0); @}
	|	ID
	@{	@i @MaybeID.node@ = newIDLeaf(OP_Id, @ID.name@, 0, 0);
		@trav isVisible(@MaybeID.ids@, @ID.name@, TRUE); 
	@}
	;

ContinueOrBreak:CONTINUE
	@{	@i @ContinueOrBreak.isCont@ = 1; @}
	|	BREAK
	@{	@i @ContinueOrBreak.isCont@ = 0; @}
	;

Expr:		ExprStartRep
    	@{	@reg @ExprStartRep.node@->reg = @Expr.node@->reg; @}
    	|	PlusTermRep
	@{	@reg @PlusTermRep.node@->reg = @Expr.node@->reg; @}
	|	MulTermRep
	@{	@reg @MulTermRep.node@->reg = @Expr.node@->reg; @}
	|	OrTermRep
	@{	@reg @OrTermRep.node@->reg = @Expr.node@->reg; @}
	|	DotTermRep
	@{	@reg @DotTermRep.node@->reg = @Expr.node@->reg; @}
	|	Term ExprEnd Term
	@{	@i @Expr.node@ = newNode(@ExprEnd.node@->operator,@Term.0.node@,@Term.1.node@);
		@reg @Term.0.node@->reg = @Expr.node@->reg; @Term.1.node@->reg = nextRegister(@Expr.node@->reg);
	@}
	;

ExprStartRep:	Term
	@{	@reg @Term.node@->reg = @ExprStartRep.node@->reg; @}
	|	NOT ExprStartRep
	@{	@i @ExprStartRep.0.node@ = newNode(OP_Not,@ExprStartRep.1.node@,NULL);
		@reg @ExprStartRep.1.node@->reg = @ExprStartRep.0.node@->reg; 
	@}
	|	HEAD ExprStartRep
	@{	@i @ExprStartRep.0.node@ = newNode(OP_Head,@ExprStartRep.1.node@,NULL);
		@reg @ExprStartRep.1.node@->reg = @ExprStartRep.0.node@->reg; 
	@}
	|	TAIL ExprStartRep
	@{	@i @ExprStartRep.0.node@ = newNode(OP_Tail,@ExprStartRep.1.node@,NULL); 
		@reg @ExprStartRep.1.node@->reg = @ExprStartRep.0.node@->reg; 
	@}
	|	ISLIST ExprStartRep
	@{	@i @ExprStartRep.0.node@ = newNode(OP_IsList,@ExprStartRep.1.node@,NULL); 
		@reg @ExprStartRep.1.node@->reg = @ExprStartRep.0.node@->reg; 
	@}
	;

PlusTermRep:	Term '+' Term
	@{	@i @PlusTermRep.node@ = newNode(OP_Add, @Term.0.node@,@Term.1.node@);
		@reg @Term.0.node@->reg = @PlusTermRep.node@->reg; @Term.1.node@->reg = nextRegister(@PlusTermRep.node@->reg);
	@}
	|	PlusTermRep '+' Term
	@{	@i @PlusTermRep.0.node@ = newNode(OP_Add, @PlusTermRep.1.node@, @Term.node@);
		@reg @PlusTermRep.1.node@->reg = @PlusTermRep.0.node@->reg; @Term.node@->reg = nextRegister(@PlusTermRep.0.node@->reg);
	@}
	;

MulTermRep:	Term '*' Term
	@{	@i @MulTermRep.node@ = newNode(OP_Mult, @Term.0.node@,@Term.1.node@);
		@reg @Term.0.node@->reg = @MulTermRep.node@->reg; @Term.1.node@->reg = nextRegister(@MulTermRep.node@->reg);
	@}
	|	MulTermRep '*' Term
	@{	@i @MulTermRep.0.node@ = newNode(OP_Mult,@MulTermRep.1.node@,@Term.node@);
		@reg @MulTermRep.1.node@->reg = @MulTermRep.0.node@->reg; @Term.node@->reg = nextRegister(@MulTermRep.0.node@->reg);
	@}
	;

OrTermRep:	Term OR Term
	@{	@i @OrTermRep.node@ = newNode(OP_Or,@Term.0.node@,@Term.1.node@);
		@reg @Term.0.node@->reg = @OrTermRep.node@->reg; @Term.1.node@->reg = nextRegister(@OrTermRep.node@->reg);
	@}
	|	OrTermRep OR Term
	@{	@i @OrTermRep.0.node@ = newNode(OP_Or,@OrTermRep.1.node@,@Term.node@);
		@reg @OrTermRep.1.node@->reg = @OrTermRep.0.node@->reg; @Term.node@->reg = nextRegister(@OrTermRep.0.node@->reg);
	@}
	;

DotTermRep:	Term '.' Term
	@{	@i @DotTermRep.node@ = newNode(OP_Dot,@Term.0.node@,@Term.1.node@); 
		@reg @Term.0.node@->reg = @DotTermRep.node@->reg; @Term.1.node@->reg = nextRegister(@DotTermRep.node@->reg);
	@}
	|	Term '.' DotTermRep
	@{	@i @DotTermRep.0.node@ = newNode(OP_Dot,@Term.node@,@DotTermRep.1.node@);
		@reg @Term.node@->reg = @DotTermRep.0.node@->reg; @DotTermRep.1.node@->reg = nextRegister(@DotTermRep.0.node@->reg);
	@}
	;

ExprEnd:	EQLARG
	@{	@i @ExprEnd.node@ = newLeaf(OP_LarOrEq); @}
	|	'='
	@{	@i @ExprEnd.node@ = newNode(OP_Eq,NULL,NULL); @}
	|	'-'
	@{	@i @ExprEnd.node@ = newLeaf(OP_Minus); @}
	;

Term:		'(' Expr ')'
    	|	NUM
	@{	@i @Term.node@ = newNUMLeaf(@NUM.value@); @}
	|	ID
	@{	@i @Term.node@ = newIDLeaf(OP_Id,@ID.name@, getParIndex(@Term.ids@,@ID.name@), getRegIndex(@Term.ids@, @ID.name@));
		@trav isVisible(@Term.ids@, @ID.name@, FALSE);

	@}
	|	ID '(' ')'
	@{	@i @Term.node@ = NULL; @}
	|	ID '(' ExprRep ')'
	@{	@i @Term.node@ = NULL; @}
	;

ExprRep:	ExprRepRep Expr
	@{	@i @ExprRep.node@ = NULL; @}
	;

ExprRepRep:	
	@{	@i @ExprRepRep.node@ = NULL; @}
	|	ExprRepRep Expr ','
	@{	@i @ExprRepRep.0.node@ = NULL; @}
	;
%%
int main (void) {
	flag = 0;
	yyparse();
	exit(flag);
}
void yyerror(const char *str){
        flag = 2;
}
