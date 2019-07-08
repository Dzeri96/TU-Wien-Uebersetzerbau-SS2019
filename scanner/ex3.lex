%x IN_COMMENT
%s ERR_STATE
KEYWORD end|return|var|cond|continue|break|not|head|tail|islist|or
DELIMITER ";"|"("|")"|","|"="|":"|"->"|"+"|"*"|"."|">="|"-"
IDENTIFIER [A-Za-z][A-Za-z0-9]*
HEX \$[A-Fa-f0-9]+
DECIMAL [0-9]+
SPACES [ \t\n]
COMMENT_BODY [^\{\}]*"}"
%%
{KEYWORD} |
{DELIMITER} printf("%s\n",yytext);
{IDENTIFIER} printf("id %s\n",yytext);
{HEX} {yytext++; printf("num %ld\n", strtol(yytext, NULL, 16));}
{SPACES} ;
<INITIAL>"{" BEGIN(IN_COMMENT);
<IN_COMMENT>{COMMENT_BODY} BEGIN(INITIAL);
<IN_COMMENT,ERR_STATE><<EOF>> exit(1);
{DECIMAL} printf("num %d\n",atoi(yytext));
. {printf("Error,\"%s\" is not a valid part of the syntax!\n", yytext); BEGIN(ERR_STATE);}
