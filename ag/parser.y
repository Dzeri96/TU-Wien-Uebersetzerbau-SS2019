%{
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#include "list.h"
	int flag;
	void yyerror(const char *s);
%}
%token NUM ID ARROW EQLARG COND CONTINUE END RETURN VAR BREAK NOT HEAD TAIL ISLIST OR
%start Program

@autoinh ids

@attributes { char *name; } ID
@attributes { list_t *in; list_t *out; } Stats
@attributes { list_t *ids; } Expr Term ExprStartRep PlusTermRep MulTermRep OrTermRep DotTermRep ExprRep ExprRepRep MaybeExpr MaybeID
@attributes { list_t *in; list_t *out; } Stat
@attributes { list_t *pars; } Pars ParsRep
@attributes { list_t *in; list_t *out; } GuardedRep Guarded Cond

@traversal @postorder trav


%%

Program:
	|	Program Funcdef ';'
	;

Funcdef:	ID '(' Pars ')' Stats END
	@{	@i @Stats.in@ = @Pars.pars@; 
	@}
       	|	ID '(' ')' Stats END
	@{	@i @Stats.in@ = newList(); @}
	;

Pars:		ParsRep ID
	@{	@i @Pars.pars@ = mergeLists(@ParsRep.pars@,addToList(newList(), @ID.name@, FALSE, TRUE), TRUE); @}
	;

ParsRep:
	@{	@i @ParsRep.pars@ = newList(); @}
       	|	ParsRep ID ','
	@{	@i @ParsRep.0.pars@ = mergeLists(@ParsRep.1.pars@,addToList(newList(), @ID.name@, FALSE, TRUE), TRUE); @}
	;
Stats:	
     	@{ @i @Stats.out@ = newList(); @}
     	|	Stats Stat ';'
	@{
		@i @Stat.in@ = mergeLists(@Stats.0.in@,@Stats.1.out@,FALSE);
		@i @Stats.0.out@ = mergeLists(@Stats.1.out@, @Stat.out@, FALSE);
		@i @Stats.1.in@ = @Stats.0.in@;
	@}
	;

Stat:		RETURN Expr
    	@{
		@i @Expr.ids@ = @Stat.in@;
		@i @Stat.out@ = newList();
	@}
	|	Cond
	@{	
		@i @Stat.out@ = newList();
		@i @Cond.in@ = @Stat.in@;
	@}
	|	VAR ID '=' Expr
	@{
		@i @Expr.ids@ = @Stat.in@;
		@i @Stat.out@ = addToList(newList(), @ID.name@, FALSE, TRUE);
		@trav overlaps(@Stat.in@,@ID.name@,FALSE);
	@}
	|	ID '=' Expr
	@{	
		@i @Expr.ids@ = @Stat.in@;
		@trav isVisible(@Stat.in@, @ID.name@, FALSE);
		@i @Stat.out@ = newList();
	@}
	;
Cond:		ID ':' COND GuardedRep END
	@{	@i @GuardedRep.in@ = mergeLists(@Cond.in@,addToList(newList(),@ID.name@,TRUE,TRUE),TRUE);
		@i @Cond.out@ = @GuardedRep.out@;
		@trav overlaps(@Cond.in@,@ID.name@,TRUE);
	@}
    	|	COND GuardedRep END
	@{	@i @GuardedRep.in@ = @Cond.in@;
		@i @Cond.out@ = @GuardedRep.out@; 
	@}
	;

GuardedRep:
	@{	@i @GuardedRep.out@ = newList(); @}
	|	GuardedRep Guarded ';'
	@{	@i @GuardedRep.1.in@ = @GuardedRep.0.in@;
		@i @Guarded.in@ = @GuardedRep.0.in@;
		@i @GuardedRep.0.out@ = mergeLists(@GuardedRep.1.out@,@Guarded.out@,FALSE);
	@}
	;

Guarded:	MaybeExpr ARROW Stats ContinueOrBreak MaybeID
	@{	@i @MaybeExpr.ids@ = @Guarded.in@;
		@i @Stats.in@ = @Guarded.in@;
		@i @Guarded.out@ = @Stats.out@;
		@i @MaybeID.ids@ = @Guarded.in@;
	@}
       	;

MaybeExpr:	
	|	Expr
	;

MaybeID:
	|	ID
	@{	@trav isVisible(@MaybeID.ids@, @ID.name@, TRUE); @}
	;

ContinueOrBreak:CONTINUE
	|	BREAK
	;

Expr:		ExprStartRep
    	|	PlusTermRep
	|	MulTermRep
	|	OrTermRep
	|	DotTermRep
	|	Term ExprEnd Term
	;

ExprStartRep:	Term
	|	NOT ExprStartRep
	|	HEAD ExprStartRep
	|	TAIL ExprStartRep
	|	ISLIST ExprStartRep
	;

PlusTermRep:	Term '+' Term		
	|	PlusTermRep '+' Term
	;

MulTermRep:	Term '*' Term
	|	MulTermRep '*' Term
	;

OrTermRep:	Term OR Term
	|	OrTermRep OR Term
	;

DotTermRep:	Term '.' Term
	|	DotTermRep '.' Term
	;

ExprEnd:	EQLARG
	|	'='
	|	'-'
	;

Term:		'(' Expr ')'
    	|	NUM
	|	ID
	@{	@trav isVisible(@Term.ids@, @ID.name@, FALSE); @}
	|	ID '(' ')'
	|	ID '(' ExprRep ')'
	;

ExprRep:	ExprRepRep Expr
	;

ExprRepRep:	
	|	ExprRepRep Expr ','
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
