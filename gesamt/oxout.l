%{
/* output from Ox version 1.5.1 */
%}
%{
/* Ox-generated Attribute-Grammar evaluator lexer specification
   for Lex-compatible lexer generators

   Copyright (C) 1992-2018  Kurt M. Bischoff

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As an exception to the standard GNU General Public License, you may
   create a larger work that contains the Ox Attribute-Grammar evaluator
   lexer specification skeleton and distribute that work under terms of
   your own choice, so long as that work isn't itself an
   Attribute-Grammar evaluator generator using the skeleton or a
   modified version thereof as an evaluator lexer specification
   skeleton.  */

/* Identify Ox output. */
#define YYYOX 1

%}
 #line 1 "codeb.flex"
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
COMMENT_BODY .*"}"
 #line 51 "oxout.l"

%{
#define yyyinit()


struct yyyT1
#line 19 "codeb.y"
 { char *name; }
 #line 60 "oxout.l"
;


struct yyyT2
#line 20 "codeb.y"
 { long value; }
 #line 67 "oxout.l"
;


struct yyyT3
#line 21 "codeb.y"
 { list_t *in; list_t *out; }
 #line 74 "oxout.l"
;


struct yyyT4
#line 22 "codeb.y"
 { list_t *ids; tree_t *node; }
 #line 81 "oxout.l"
;


struct yyyT5
#line 23 "codeb.y"
 { list_t *in; list_t *out; tree_t *node; }
 #line 88 "oxout.l"
;


struct yyyT6
#line 24 "codeb.y"
 { list_t *pars; short parCnt;}
 #line 95 "oxout.l"
;


struct yyyT7
#line 25 "codeb.y"
 { list_t *in; list_t *out; tree_t *node; }
 #line 102 "oxout.l"
;


struct yyyT8
#line 26 "codeb.y"
 { tree_t *node; }
 #line 109 "oxout.l"
;


struct yyyT9
#line 27 "codeb.y"
 { short isCont; }
 #line 116 "oxout.l"
;


struct yyyT10
#line 28 "codeb.y"
 { list_t *ids; tree_t *node; short parCnt; }
 #line 123 "oxout.l"
;


union yyyAttrbs {
  struct yyyT1 yyyAttrb1;
  struct yyyT2 yyyAttrb2;
  struct yyyT3 yyyAttrb3;
  struct yyyT4 yyyAttrb4;
  struct yyyT5 yyyAttrb5;
  struct yyyT6 yyyAttrb6;
  struct yyyT7 yyyAttrb7;
  struct yyyT8 yyyAttrb8;
  struct yyyT9 yyyAttrb9;
  struct yyyT10 yyyAttrb10;
};
typedef unsigned short yyyWAT;
typedef unsigned short yyyRCT;
typedef unsigned short yyyPNT;
typedef unsigned short yyyWST;
 /* funny type; as wide as the widest of yyyWAT,yyyWST,yyyRCT  */
typedef unsigned short yyyFT;



typedef union{struct yyyStackItem *stackref; struct yyyGenNode *noderef;} yyyParent;
struct yyyGenNode {yyyParent parent;
                   short parentIsStack; /* =1 => `(yyySIT *)parent' is referenced on the Yacc semantic stack  */
                                        /* =0 => `(yyyGNT *)parent' is this node's parent node  */
                   int cLlen; /* length of child list */
                   struct yyyGenNode **cL; /* child list */
                   int refCountListLen; /* length of RCL */
                   yyyRCT *refCountList;
                   yyyPNT prodNum;
                   yyyWST whichSym; /* which child of parent? */
                   union yyyAttrbs yyyAttrbs; /* the Ox semantic attributes */
                  };

typedef struct yyyGenNode yyyGNT;


struct yyySolvedSAlistCell;
struct yyyStackItem {yyyGNT *node;
                     struct yyySolvedSAlistCell *solvedSAlist;
                    };

typedef struct yyyStackItem yyySIT;
extern void yyyabort(void);
extern void yyyGenLeaf(int nAttrbs,int typeNum,
                       long startP,long stopP
                       ,YYSTYPE *yyylval
                      );
%}
 #line 15 "codeb.flex"
%%
	{yyyinit();} /* initialize Ox */
 #line 15 "codeb.flex"

cond {
 #line 182 "oxout.l"
yyyGenLeaf(0,0,0,0,&yylval);
 #line 16 "codeb.flex"
return COND;}
continue {
 #line 187 "oxout.l"
yyyGenLeaf(0,0,0,0,&yylval);
 #line 17 "codeb.flex"
return CONTINUE;}
end {
 #line 192 "oxout.l"
yyyGenLeaf(0,0,0,0,&yylval);
 #line 18 "codeb.flex"
return END;}
return {
 #line 197 "oxout.l"
yyyGenLeaf(0,0,0,0,&yylval);
 #line 19 "codeb.flex"
return RETURN;}
var {
 #line 202 "oxout.l"
yyyGenLeaf(0,0,0,0,&yylval);
 #line 20 "codeb.flex"
return VAR;}
break {
 #line 207 "oxout.l"
yyyGenLeaf(0,0,0,0,&yylval);
 #line 21 "codeb.flex"
return BREAK;}
not {
 #line 212 "oxout.l"
yyyGenLeaf(0,0,0,0,&yylval);
 #line 22 "codeb.flex"
return NOT;}
head {
 #line 217 "oxout.l"
yyyGenLeaf(0,0,0,0,&yylval);
 #line 23 "codeb.flex"
return HEAD;}
tail {
 #line 222 "oxout.l"
yyyGenLeaf(0,0,0,0,&yylval);
 #line 24 "codeb.flex"
return TAIL;}
islist {
 #line 227 "oxout.l"
yyyGenLeaf(0,0,0,0,&yylval);
 #line 25 "codeb.flex"
return ISLIST;}
or {
 #line 232 "oxout.l"
yyyGenLeaf(0,0,0,0,&yylval);
 #line 26 "codeb.flex"
return OR;}
"->" {
 #line 237 "oxout.l"
yyyGenLeaf(0,0,0,0,&yylval);
 #line 27 "codeb.flex"
return ARROW;}
">=" {
 #line 242 "oxout.l"
yyyGenLeaf(0,0,0,0,&yylval);
 #line 28 "codeb.flex"
return EQLARG;}
";" {
 #line 247 "oxout.l"
yyyGenLeaf(0,0,0,0,&yylval);
 #line 29 "codeb.flex"
return ';';}
"(" {
 #line 252 "oxout.l"
yyyGenLeaf(0,0,0,0,&yylval);
 #line 30 "codeb.flex"
return '(';}
")" {
 #line 257 "oxout.l"
yyyGenLeaf(0,0,0,0,&yylval);
 #line 31 "codeb.flex"
return ')';}
"," {
 #line 262 "oxout.l"
yyyGenLeaf(0,0,0,0,&yylval);
 #line 32 "codeb.flex"
return ',';}
"=" {
 #line 267 "oxout.l"
yyyGenLeaf(0,0,0,0,&yylval);
 #line 33 "codeb.flex"
return '=';}
":" {
 #line 272 "oxout.l"
yyyGenLeaf(0,0,0,0,&yylval);
 #line 34 "codeb.flex"
return ':';}
"+" {
 #line 277 "oxout.l"
yyyGenLeaf(0,0,0,0,&yylval);
 #line 35 "codeb.flex"
return '+';}
"*" {
 #line 282 "oxout.l"
yyyGenLeaf(0,0,0,0,&yylval);
 #line 36 "codeb.flex"
return '*';}
"." {
 #line 287 "oxout.l"
yyyGenLeaf(0,0,0,0,&yylval);
 #line 37 "codeb.flex"
return '.';}
"-" {
 #line 292 "oxout.l"
yyyGenLeaf(0,0,0,0,&yylval);
 #line 38 "codeb.flex"
return '-';}
{IDENTIFIER} {
 #line 297 "oxout.l"
yyyGenLeaf(1,1,0,1,&yylval);
 #line 39 "codeb.flex"
 #line 300 "oxout.l"
yylval.yyyOxAttrbs.yyyOxStackItem->node->yyyAttrbs.yyyAttrb1.name
 #line 39 "codeb.flex"
 = strdup(yytext);return ID;}
{HEX} {
 #line 305 "oxout.l"
yyyGenLeaf(1,2,1,2,&yylval);
 #line 40 "codeb.flex"
 #line 308 "oxout.l"
yylval.yyyOxAttrbs.yyyOxStackItem->node->yyyAttrbs.yyyAttrb2.value
 #line 40 "codeb.flex"
 = strtol(yytext+1,NULL,16);return NUM;}
{DECIMAL} {
 #line 313 "oxout.l"
yyyGenLeaf(1,2,1,2,&yylval);
 #line 41 "codeb.flex"
 #line 316 "oxout.l"
yylval.yyyOxAttrbs.yyyOxStackItem->node->yyyAttrbs.yyyAttrb2.value
 #line 41 "codeb.flex"
 = strtol(yytext,NULL,10);return NUM;}
{SPACES} ;
<INITIAL>"{" BEGIN(IN_COMMENT);
<IN_COMMENT>{COMMENT_BODY} BEGIN(INITIAL);
<IN_COMMENT,ERR_STATE><<EOF>> {exit(1); flag = 1;}
. {printf("Error,\"%s\" is not a valid part of the syntax!\n", yytext); BEGIN(ERR_STATE);}
