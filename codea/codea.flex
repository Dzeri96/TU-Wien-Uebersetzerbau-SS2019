%{
	#include "parser.h"
	#include "list.h"
	#include "tree.h"
	extern int flag;
%}
%x IN_COMMENT
%s ERR_STATE
DELIMITER ";"|"("|")"|","|"="|":"|"+"|"*"|"."|"-"
IDENTIFIER [A-Za-z][A-Za-z0-9]*
HEX \$[A-Fa-f0-9]+
DECIMAL [0-9]+
SPACES [ \t\n]
COMMENT_BODY [^\{\}]*"}"
%%
cond return COND;
continue return CONTINUE;
end return END;
return return RETURN;
var return VAR;
break return BREAK;
not return NOT;
head return HEAD;
tail return TAIL;
islist return ISLIST;
or return OR;
"->" return ARROW;
">=" return EQLARG;
";" return ';';
"(" return '(';
")" return ')';
"," return ',';
"=" return '=';
":" return ':';
"+" return '+';
"*" return '*';
"." return '.';
"-" return '-';
{IDENTIFIER} return ID; @{ @ID.name@ = strdup(yytext); @}
{HEX} return NUM; @{ @NUM.value@ = strtol(yytext+1,NULL,16); @}
{DECIMAL} return NUM; @{ @NUM.value@ = strtol(yytext,NULL,10); @}
{SPACES} ;
<INITIAL>"{" BEGIN(IN_COMMENT);
<IN_COMMENT>{COMMENT_BODY} BEGIN(INITIAL);
<IN_COMMENT,ERR_STATE><<EOF>> {exit(1); flag = 1;}
. {printf("Error,\"%s\" is not a valid part of the syntax!\n", yytext); BEGIN(ERR_STATE);}
