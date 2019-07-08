%{
	#include <stdlib.h>
	#include <stdio.h>
	int flag;
	void yyerror(const char *s);
	extern int yylineno;
%}
%define parse.error verbose
%locations
%token NUM ID ARROW EQLARG COND CONTINUE END RETURN VAR BREAK NOT HEAD TAIL ISLIST OR
%start Program

%%

Program:
	|	Program Funcdef ';'
	;

Funcdef:	ID '(' Pars ')' Stats END
       	|	ID '(' ')' Stats END
	;

Pars:		ParsRep ID
	;

ParsRep:
       	|	ParsRep ID ','
	;
Stats:
     	|	Stats Stat ';'
	;

Stat:		RETURN Expr
	|	Cond
	|	VAR ID '=' Expr
	|	ID '=' Expr
	;
Cond:		ID ':' COND GuardedRep END
    	|	COND GuardedRep END
	;

GuardedRep:
	|	GuardedRep Guarded ';'
	;

Guarded:	MaybeExpr ARROW Stats ContinueOrBreak MaybeID
       	;

MaybeExpr:	
	|	Expr
	;

MaybeID:
	|	ID
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
	fprintf(stderr,"ERROR: %s on line %d\n",str,yylineno);
}
