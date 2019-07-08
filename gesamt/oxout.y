/* output from Ox version 1.5.1 */

/* Ox-generated Attribute-Grammar evaluator parser specification
   for Yacc-compatible parser generators

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
   parser specification skeleton and distribute that work under terms of
   your own choice, so long as that work isn't itself an
   Attribute-Grammar evaluator generator using the skeleton or a
   modified version thereof as an evaluator parser specification
   skeleton.  */

%{
/* Identify Ox output. */
#define YYYOX 1

#ifdef __cplusplus
#define __YYYSTRUCT YYSTYPE::
#else
#define __YYYSTRUCT struct
#endif

#include <stdlib.h>
#if defined(__sun) && defined(__SVR4)
#include <strings.h>
#else
#include <string.h>
#endif
%}
#line 1 "codeb.y"
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
%start
#line 62 "oxout.y"
yyyAugNonterm
#line 14 "codeb.y"



#line 68 "oxout.y"

%{
#define yyyinit()


struct yyyT1
#line 19 "codeb.y"
 { char *name; }
#line 77 "oxout.y"
;


struct yyyT2
#line 20 "codeb.y"
 { long value; }
#line 84 "oxout.y"
;


struct yyyT3
#line 21 "codeb.y"
 { list_t *in; list_t *out; }
#line 91 "oxout.y"
;


struct yyyT4
#line 22 "codeb.y"
 { list_t *ids; tree_t *node; }
#line 98 "oxout.y"
;


struct yyyT5
#line 23 "codeb.y"
 { list_t *in; list_t *out; tree_t *node; }
#line 105 "oxout.y"
;


struct yyyT6
#line 24 "codeb.y"
 { list_t *pars; short parCnt;}
#line 112 "oxout.y"
;


struct yyyT7
#line 25 "codeb.y"
 { list_t *in; list_t *out; tree_t *node; }
#line 119 "oxout.y"
;


struct yyyT8
#line 26 "codeb.y"
 { tree_t *node; }
#line 126 "oxout.y"
;


struct yyyT9
#line 27 "codeb.y"
 { short isCont; }
#line 133 "oxout.y"
;


struct yyyT10
#line 28 "codeb.y"
 { list_t *ids; tree_t *node; short parCnt; }
#line 140 "oxout.y"
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

%}

%{
struct yyyRSitem {yyyGNT *node;
                  yyyWST whichSym;
                  yyyWAT wa;
                 };

static struct yyyRSitem *yyyRS;
static long yyyRSTop = 0L;
#define yyyRSBottom 1L
static long yyyAfterRS = 1L;

#include <limits.h>
#define yyyR USHRT_MAX
%}
%type <yyyOxAttrbs> yyyAugNonterm
%union {
struct yyyOxAttrbsT {
struct yyyStackItem *yyyOxStackItem;
} yyyOxAttrbs;
}

%{
#include <stdio.h>
#include <stdarg.h>

static int yyyYok = 1;

static void yyyExecuteRRsection(yyyGNT *rootNode);
static void yyyDecorate(void);
#ifdef YYMSTA
struct yyyOxAttrbsT; /* hack required to compensate for `msta' behavior */
#endif
static void yyyGenIntNode(long yyyProdNum, int yyyRHSlength, int yyyNattrbs, __YYYSTRUCT yyyOxAttrbsT *yyval_OxAttrbs, ...);
static void yyyReclaimSemStkEls(int yyyRHSlength, ...);
static void yyyAdjustINRC(long yyyProdNum, int yyyRHSlength, long startP, long stopP, __YYYSTRUCT yyyOxAttrbsT *yyval_OxAttrbs, ...);
static void yyyCheckUnsolvedInstTrav(yyyGNT *rootNode,long *nNZrc,long *cycleSum);
static void yyyUnsolvedInstSearchTravAux(yyyGNT *pNode);

%}


#line 35 "codeb.y"
%%

#line 235 "oxout.y"
yyyAugNonterm
	:		Program
		{
		 yyyDecorate(); yyyExecuteRRsection($<yyyOxAttrbs>1.yyyOxStackItem->node);
		}
	;
#line 37 "codeb.y"
Program:
#line 244 "oxout.y"

{if(yyyYok){
yyyGenIntNode(1,0,0,&$<yyyOxAttrbs>$);
yyyAdjustINRC(1,0,0,0,&$<yyyOxAttrbs>$);
yyyReclaimSemStkEls(0);}}
#line 38 "codeb.y"
	|	Program Funcdef ';'
#line 252 "oxout.y"

{if(yyyYok){
yyyGenIntNode(2,3,0,&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3);
yyyAdjustINRC(2,3,0,0,&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3);
yyyReclaimSemStkEls(3,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3);}}
#line 39 "codeb.y"
	;

Funcdef:	ID '(' Pars ')' Stats END
#line 262 "oxout.y"

{if(yyyYok){
yyyGenIntNode(3,6,0,&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3,&$<yyyOxAttrbs>4,&$<yyyOxAttrbs>5,&$<yyyOxAttrbs>6);
yyyAdjustINRC(3,6,0,3,&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3,&$<yyyOxAttrbs>4,&$<yyyOxAttrbs>5,&$<yyyOxAttrbs>6);
yyyReclaimSemStkEls(6,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3,&$<yyyOxAttrbs>4,&$<yyyOxAttrbs>5,&$<yyyOxAttrbs>6);}}
#line 44 "codeb.y"

       	|	ID '(' ')' Stats END
#line 271 "oxout.y"

{if(yyyYok){
yyyGenIntNode(4,5,0,&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3,&$<yyyOxAttrbs>4,&$<yyyOxAttrbs>5);

$<yyyOxAttrbs>$.yyyOxStackItem->node->cL[3]->yyyAttrbs.yyyAttrb3.in
#line 46 "codeb.y"
 = newList();
#line 279 "oxout.y"
yyyAdjustINRC(4,5,3,6,&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3,&$<yyyOxAttrbs>4,&$<yyyOxAttrbs>5);
yyyReclaimSemStkEls(5,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3,&$<yyyOxAttrbs>4,&$<yyyOxAttrbs>5);}}
#line 48 "codeb.y"

	;

Pars:		ParsRep ID
#line 287 "oxout.y"

{if(yyyYok){
yyyGenIntNode(5,2,2,&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2);
yyyAdjustINRC(5,2,6,12,&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2);
yyyReclaimSemStkEls(2,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2);}}
#line 54 "codeb.y"

	;

ParsRep:
#line 298 "oxout.y"

{if(yyyYok){
yyyGenIntNode(6,0,2,&$<yyyOxAttrbs>$);

$<yyyOxAttrbs>$.yyyOxStackItem->node->yyyAttrbs.yyyAttrb6.pars
#line 58 "codeb.y"
 = newList();

#line 307 "oxout.y"
$<yyyOxAttrbs>$.yyyOxStackItem->node->yyyAttrbs.yyyAttrb6.parCnt
#line 59 "codeb.y"
 = 0;
#line 311 "oxout.y"
yyyAdjustINRC(6,0,12,18,&$<yyyOxAttrbs>$);
yyyReclaimSemStkEls(0);}}
#line 60 "codeb.y"

       	|	ParsRep ID ','
#line 317 "oxout.y"

{if(yyyYok){
yyyGenIntNode(7,3,2,&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3);
yyyAdjustINRC(7,3,18,24,&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3);
yyyReclaimSemStkEls(3,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3);}}
#line 63 "codeb.y"

	;
Stats:
#line 327 "oxout.y"

{if(yyyYok){
yyyGenIntNode(8,0,2,&$<yyyOxAttrbs>$);

$<yyyOxAttrbs>$.yyyOxStackItem->node->yyyAttrbs.yyyAttrb3.out
#line 66 "codeb.y"
 = newList();
#line 335 "oxout.y"
yyyAdjustINRC(8,0,24,27,&$<yyyOxAttrbs>$);
yyyReclaimSemStkEls(0);}}
#line 66 "codeb.y"

     	|	Stats Stat ';'
#line 341 "oxout.y"

{if(yyyYok){
yyyGenIntNode(9,3,2,&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3);
yyyAdjustINRC(9,3,27,36,&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3);
yyyReclaimSemStkEls(3,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3);}}
#line 73 "codeb.y"

	;

Stat:		RETURN Expr
#line 352 "oxout.y"

{if(yyyYok){
yyyGenIntNode(10,2,3,&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2);

$<yyyOxAttrbs>$.yyyOxStackItem->node->yyyAttrbs.yyyAttrb5.out
#line 79 "codeb.y"
 = newList();
#line 360 "oxout.y"
yyyAdjustINRC(10,2,36,45,&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2);
yyyReclaimSemStkEls(2,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2);}}
#line 82 "codeb.y"

	|	Cond
#line 366 "oxout.y"

{if(yyyYok){
yyyGenIntNode(11,1,3,&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1);

#line 84 "codeb.y"


#line 374 "oxout.y"
$<yyyOxAttrbs>$.yyyOxStackItem->node->yyyAttrbs.yyyAttrb5.out
#line 85 "codeb.y"
 = newList();

#line 379 "oxout.y"
$<yyyOxAttrbs>$.yyyOxStackItem->node->yyyAttrbs.yyyAttrb5.node
#line 87 "codeb.y"
 = newNode(OP_Blank,NULL,NULL);
#line 383 "oxout.y"
yyyAdjustINRC(11,1,45,54,&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1);
yyyReclaimSemStkEls(1,&$<yyyOxAttrbs>1);}}
#line 88 "codeb.y"

	|	VAR ID '=' Expr
#line 389 "oxout.y"

{if(yyyYok){
yyyGenIntNode(12,4,3,&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3,&$<yyyOxAttrbs>4);
yyyAdjustINRC(12,4,54,63,&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3,&$<yyyOxAttrbs>4);
yyyReclaimSemStkEls(4,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3,&$<yyyOxAttrbs>4);}}
#line 96 "codeb.y"

	|	ID '=' Expr
#line 398 "oxout.y"

{if(yyyYok){
yyyGenIntNode(13,3,3,&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3);

$<yyyOxAttrbs>$.yyyOxStackItem->node->yyyAttrbs.yyyAttrb5.out
#line 101 "codeb.y"
 = newList();
#line 406 "oxout.y"
yyyAdjustINRC(13,3,63,72,&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3);
yyyReclaimSemStkEls(3,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3);}}
#line 104 "codeb.y"

	;
Cond:		ID ':' COND GuardedRep END
#line 413 "oxout.y"

{if(yyyYok){
yyyGenIntNode(14,5,3,&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3,&$<yyyOxAttrbs>4,&$<yyyOxAttrbs>5);
yyyAdjustINRC(14,5,72,81,&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3,&$<yyyOxAttrbs>4,&$<yyyOxAttrbs>5);
yyyReclaimSemStkEls(5,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3,&$<yyyOxAttrbs>4,&$<yyyOxAttrbs>5);}}
#line 113 "codeb.y"

    	|	COND GuardedRep END
#line 422 "oxout.y"

{if(yyyYok){
yyyGenIntNode(15,3,3,&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3);
yyyAdjustINRC(15,3,81,90,&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3);
yyyReclaimSemStkEls(3,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3);}}
#line 120 "codeb.y"

	;

GuardedRep:
#line 433 "oxout.y"

{if(yyyYok){
yyyGenIntNode(16,0,3,&$<yyyOxAttrbs>$);

$<yyyOxAttrbs>$.yyyOxStackItem->node->yyyAttrbs.yyyAttrb7.out
#line 124 "codeb.y"
 = newList();

#line 442 "oxout.y"
$<yyyOxAttrbs>$.yyyOxStackItem->node->yyyAttrbs.yyyAttrb7.node
#line 125 "codeb.y"
 = newNode(OP_Guarded, NULL, NULL);
#line 446 "oxout.y"
yyyAdjustINRC(16,0,90,96,&$<yyyOxAttrbs>$);
yyyReclaimSemStkEls(0);}}
#line 126 "codeb.y"

	|	Guarded ';' GuardedRep
#line 452 "oxout.y"

{if(yyyYok){
yyyGenIntNode(17,3,3,&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3);

$<yyyOxAttrbs>$.yyyOxStackItem->node->yyyAttrbs.yyyAttrb7.node
#line 131 "codeb.y"
 = newNode(OP_Guarded, NULL, NULL);
#line 460 "oxout.y"
yyyAdjustINRC(17,3,96,108,&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3);
yyyReclaimSemStkEls(3,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3);}}
#line 134 "codeb.y"

	;

Guarded:	MaybeExpr ARROW Stats ContinueOrBreak MaybeID
#line 468 "oxout.y"

{if(yyyYok){
yyyGenIntNode(18,5,3,&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3,&$<yyyOxAttrbs>4,&$<yyyOxAttrbs>5);
yyyAdjustINRC(18,5,108,123,&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3,&$<yyyOxAttrbs>4,&$<yyyOxAttrbs>5);
yyyReclaimSemStkEls(5,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3,&$<yyyOxAttrbs>4,&$<yyyOxAttrbs>5);}}
#line 147 "codeb.y"

       	;

MaybeExpr:
#line 479 "oxout.y"

{if(yyyYok){
yyyGenIntNode(19,0,2,&$<yyyOxAttrbs>$);

$<yyyOxAttrbs>$.yyyOxStackItem->node->yyyAttrbs.yyyAttrb4.node
#line 151 "codeb.y"
 = newNode(OP_Blank,NULL,NULL);
#line 487 "oxout.y"
yyyAdjustINRC(19,0,123,126,&$<yyyOxAttrbs>$);
yyyReclaimSemStkEls(0);}}
#line 151 "codeb.y"

	|	Expr
#line 493 "oxout.y"

{if(yyyYok){
yyyGenIntNode(20,1,2,&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1);
yyyAdjustINRC(20,1,126,132,&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1);
yyyReclaimSemStkEls(1,&$<yyyOxAttrbs>1);}}
#line 153 "codeb.y"
	;

MaybeID:
#line 503 "oxout.y"

{if(yyyYok){
yyyGenIntNode(21,0,2,&$<yyyOxAttrbs>$);

$<yyyOxAttrbs>$.yyyOxStackItem->node->yyyAttrbs.yyyAttrb4.node
#line 156 "codeb.y"
 = newIDLeaf(OP_Id, NULL, 0, 0);
#line 511 "oxout.y"
yyyAdjustINRC(21,0,132,135,&$<yyyOxAttrbs>$);
yyyReclaimSemStkEls(0);}}
#line 156 "codeb.y"

	|	ID
#line 517 "oxout.y"

{if(yyyYok){
yyyGenIntNode(22,1,2,&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1);

$<yyyOxAttrbs>$.yyyOxStackItem->node->yyyAttrbs.yyyAttrb4.node
#line 158 "codeb.y"
 = newIDLeaf(OP_Id,
#line 525 "oxout.y"
$<yyyOxAttrbs>$.yyyOxStackItem->node->cL[0]->yyyAttrbs.yyyAttrb1.name
#line 158 "codeb.y"
, 0, 0);
#line 529 "oxout.y"
yyyAdjustINRC(22,1,135,138,&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1);
yyyReclaimSemStkEls(1,&$<yyyOxAttrbs>1);}}
#line 160 "codeb.y"

	;

ContinueOrBreak:CONTINUE
#line 537 "oxout.y"

{if(yyyYok){
yyyGenIntNode(23,1,1,&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1);

$<yyyOxAttrbs>$.yyyOxStackItem->node->yyyAttrbs.yyyAttrb9.isCont
#line 164 "codeb.y"
 = 1;
#line 545 "oxout.y"
yyyAdjustINRC(23,1,138,141,&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1);
yyyReclaimSemStkEls(1,&$<yyyOxAttrbs>1);}}
#line 164 "codeb.y"

	|	BREAK
#line 551 "oxout.y"

{if(yyyYok){
yyyGenIntNode(24,1,1,&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1);

$<yyyOxAttrbs>$.yyyOxStackItem->node->yyyAttrbs.yyyAttrb9.isCont
#line 166 "codeb.y"
 = 0;
#line 559 "oxout.y"
yyyAdjustINRC(24,1,141,144,&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1);
yyyReclaimSemStkEls(1,&$<yyyOxAttrbs>1);}}
#line 166 "codeb.y"

	;

Expr:		ExprStartRep
#line 567 "oxout.y"

{if(yyyYok){
yyyGenIntNode(25,1,2,&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1);
yyyAdjustINRC(25,1,144,150,&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1);
yyyReclaimSemStkEls(1,&$<yyyOxAttrbs>1);}}
#line 170 "codeb.y"

    	|	PlusTermRep
#line 576 "oxout.y"

{if(yyyYok){
yyyGenIntNode(26,1,2,&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1);
yyyAdjustINRC(26,1,150,156,&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1);
yyyReclaimSemStkEls(1,&$<yyyOxAttrbs>1);}}
#line 172 "codeb.y"

	|	MulTermRep
#line 585 "oxout.y"

{if(yyyYok){
yyyGenIntNode(27,1,2,&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1);
yyyAdjustINRC(27,1,156,162,&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1);
yyyReclaimSemStkEls(1,&$<yyyOxAttrbs>1);}}
#line 174 "codeb.y"

	|	OrTermRep
#line 594 "oxout.y"

{if(yyyYok){
yyyGenIntNode(28,1,2,&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1);
yyyAdjustINRC(28,1,162,168,&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1);
yyyReclaimSemStkEls(1,&$<yyyOxAttrbs>1);}}
#line 176 "codeb.y"

	|	DotTermRep
#line 603 "oxout.y"

{if(yyyYok){
yyyGenIntNode(29,1,2,&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1);
yyyAdjustINRC(29,1,168,174,&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1);
yyyReclaimSemStkEls(1,&$<yyyOxAttrbs>1);}}
#line 178 "codeb.y"

	|	Term ExprEnd Term
#line 612 "oxout.y"

{if(yyyYok){
yyyGenIntNode(30,3,2,&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3);
yyyAdjustINRC(30,3,174,183,&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3);
yyyReclaimSemStkEls(3,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3);}}
#line 182 "codeb.y"

	;

ExprStartRep:	Term
#line 623 "oxout.y"

{if(yyyYok){
yyyGenIntNode(31,1,2,&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1);
yyyAdjustINRC(31,1,183,189,&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1);
yyyReclaimSemStkEls(1,&$<yyyOxAttrbs>1);}}
#line 186 "codeb.y"

	|	NOT ExprStartRep
#line 632 "oxout.y"

{if(yyyYok){
yyyGenIntNode(32,2,2,&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2);
yyyAdjustINRC(32,2,189,195,&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2);
yyyReclaimSemStkEls(2,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2);}}
#line 190 "codeb.y"

	|	HEAD ExprStartRep
#line 641 "oxout.y"

{if(yyyYok){
yyyGenIntNode(33,2,2,&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2);
yyyAdjustINRC(33,2,195,201,&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2);
yyyReclaimSemStkEls(2,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2);}}
#line 194 "codeb.y"

	|	TAIL ExprStartRep
#line 650 "oxout.y"

{if(yyyYok){
yyyGenIntNode(34,2,2,&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2);
yyyAdjustINRC(34,2,201,207,&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2);
yyyReclaimSemStkEls(2,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2);}}
#line 198 "codeb.y"

	|	ISLIST ExprStartRep
#line 659 "oxout.y"

{if(yyyYok){
yyyGenIntNode(35,2,2,&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2);
yyyAdjustINRC(35,2,207,213,&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2);
yyyReclaimSemStkEls(2,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2);}}
#line 202 "codeb.y"

	;

PlusTermRep:	Term '+' Term
#line 670 "oxout.y"

{if(yyyYok){
yyyGenIntNode(36,3,2,&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3);
yyyAdjustINRC(36,3,213,222,&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3);
yyyReclaimSemStkEls(3,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3);}}
#line 208 "codeb.y"

	|	PlusTermRep '+' Term
#line 679 "oxout.y"

{if(yyyYok){
yyyGenIntNode(37,3,2,&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3);
yyyAdjustINRC(37,3,222,231,&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3);
yyyReclaimSemStkEls(3,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3);}}
#line 212 "codeb.y"

	;

MulTermRep:	Term '*' Term
#line 690 "oxout.y"

{if(yyyYok){
yyyGenIntNode(38,3,2,&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3);
yyyAdjustINRC(38,3,231,240,&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3);
yyyReclaimSemStkEls(3,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3);}}
#line 218 "codeb.y"

	|	MulTermRep '*' Term
#line 699 "oxout.y"

{if(yyyYok){
yyyGenIntNode(39,3,2,&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3);
yyyAdjustINRC(39,3,240,249,&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3);
yyyReclaimSemStkEls(3,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3);}}
#line 222 "codeb.y"

	;

OrTermRep:	Term OR Term
#line 710 "oxout.y"

{if(yyyYok){
yyyGenIntNode(40,3,2,&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3);
yyyAdjustINRC(40,3,249,258,&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3);
yyyReclaimSemStkEls(3,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3);}}
#line 228 "codeb.y"

	|	OrTermRep OR Term
#line 719 "oxout.y"

{if(yyyYok){
yyyGenIntNode(41,3,2,&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3);
yyyAdjustINRC(41,3,258,267,&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3);
yyyReclaimSemStkEls(3,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3);}}
#line 232 "codeb.y"

	;

DotTermRep:	Term '.' Term
#line 730 "oxout.y"

{if(yyyYok){
yyyGenIntNode(42,3,2,&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3);
yyyAdjustINRC(42,3,267,276,&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3);
yyyReclaimSemStkEls(3,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3);}}
#line 238 "codeb.y"

	|	Term '.' DotTermRep
#line 739 "oxout.y"

{if(yyyYok){
yyyGenIntNode(43,3,2,&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3);
yyyAdjustINRC(43,3,276,285,&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3);
yyyReclaimSemStkEls(3,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3);}}
#line 242 "codeb.y"

	;

ExprEnd:	EQLARG
#line 750 "oxout.y"

{if(yyyYok){
yyyGenIntNode(44,1,1,&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1);

$<yyyOxAttrbs>$.yyyOxStackItem->node->yyyAttrbs.yyyAttrb8.node
#line 246 "codeb.y"
 = newLeaf(OP_LarOrEq);
#line 758 "oxout.y"
yyyAdjustINRC(44,1,285,288,&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1);
yyyReclaimSemStkEls(1,&$<yyyOxAttrbs>1);}}
#line 246 "codeb.y"

	|	'='
#line 764 "oxout.y"

{if(yyyYok){
yyyGenIntNode(45,1,1,&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1);

$<yyyOxAttrbs>$.yyyOxStackItem->node->yyyAttrbs.yyyAttrb8.node
#line 248 "codeb.y"
 = newNode(OP_Eq,NULL,NULL);
#line 772 "oxout.y"
yyyAdjustINRC(45,1,288,291,&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1);
yyyReclaimSemStkEls(1,&$<yyyOxAttrbs>1);}}
#line 248 "codeb.y"

	|	'-'
#line 778 "oxout.y"

{if(yyyYok){
yyyGenIntNode(46,1,1,&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1);

$<yyyOxAttrbs>$.yyyOxStackItem->node->yyyAttrbs.yyyAttrb8.node
#line 250 "codeb.y"
 = newLeaf(OP_Minus);
#line 786 "oxout.y"
yyyAdjustINRC(46,1,291,294,&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1);
yyyReclaimSemStkEls(1,&$<yyyOxAttrbs>1);}}
#line 250 "codeb.y"

	;

Term:		'(' Expr ')'
#line 794 "oxout.y"

{if(yyyYok){
yyyGenIntNode(47,3,2,&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3);
yyyAdjustINRC(47,3,294,300,&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3);
yyyReclaimSemStkEls(3,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3);}}
#line 254 "codeb.y"
    	|	NUM
#line 802 "oxout.y"

{if(yyyYok){
yyyGenIntNode(48,1,2,&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1);

$<yyyOxAttrbs>$.yyyOxStackItem->node->yyyAttrbs.yyyAttrb4.node
#line 255 "codeb.y"
 = newNUMLeaf(
#line 810 "oxout.y"
$<yyyOxAttrbs>$.yyyOxStackItem->node->cL[0]->yyyAttrbs.yyyAttrb2.value
#line 255 "codeb.y"
);
#line 814 "oxout.y"
yyyAdjustINRC(48,1,300,303,&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1);
yyyReclaimSemStkEls(1,&$<yyyOxAttrbs>1);}}
#line 255 "codeb.y"

	|	ID
#line 820 "oxout.y"

{if(yyyYok){
yyyGenIntNode(49,1,2,&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1);
yyyAdjustINRC(49,1,303,306,&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1);
yyyReclaimSemStkEls(1,&$<yyyOxAttrbs>1);}}
#line 260 "codeb.y"

	|	ID '(' ')'
#line 829 "oxout.y"

{if(yyyYok){
yyyGenIntNode(50,3,2,&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3);

$<yyyOxAttrbs>$.yyyOxStackItem->node->yyyAttrbs.yyyAttrb4.node
#line 262 "codeb.y"
 = newNode(OP_Call, NULL, NULL);
#line 837 "oxout.y"
yyyAdjustINRC(50,3,306,309,&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3);
yyyReclaimSemStkEls(3,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3);}}
#line 265 "codeb.y"

	|	ID '(' ExprRep ')'
#line 843 "oxout.y"

{if(yyyYok){
yyyGenIntNode(51,4,2,&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3,&$<yyyOxAttrbs>4);

$<yyyOxAttrbs>$.yyyOxStackItem->node->yyyAttrbs.yyyAttrb4.node
#line 267 "codeb.y"
 = newNode(OP_Call, NULL, NULL);
#line 851 "oxout.y"
yyyAdjustINRC(51,4,309,315,&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3,&$<yyyOxAttrbs>4);
yyyReclaimSemStkEls(4,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3,&$<yyyOxAttrbs>4);}}
#line 272 "codeb.y"

	;

ExprRep:	ExprRepRep Expr
#line 859 "oxout.y"

{if(yyyYok){
yyyGenIntNode(52,2,3,&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2);
yyyAdjustINRC(52,2,315,327,&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2);
yyyReclaimSemStkEls(2,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2);}}
#line 279 "codeb.y"

	;

ExprRepRep:
#line 870 "oxout.y"

{if(yyyYok){
yyyGenIntNode(53,0,3,&$<yyyOxAttrbs>$);

$<yyyOxAttrbs>$.yyyOxStackItem->node->yyyAttrbs.yyyAttrb10.node
#line 283 "codeb.y"
 = newNode(OP_Blank, NULL, NULL);

#line 879 "oxout.y"
$<yyyOxAttrbs>$.yyyOxStackItem->node->yyyAttrbs.yyyAttrb10.parCnt
#line 284 "codeb.y"
 = 0;
#line 883 "oxout.y"
yyyAdjustINRC(53,0,327,333,&$<yyyOxAttrbs>$);
yyyReclaimSemStkEls(0);}}
#line 285 "codeb.y"

	|	ExprRepRep Expr ','
#line 889 "oxout.y"

{if(yyyYok){
yyyGenIntNode(54,3,3,&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3);
yyyAdjustINRC(54,3,333,345,&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3);
yyyReclaimSemStkEls(3,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3);}}
#line 291 "codeb.y"

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
#line 907 "oxout.y"
/* The maximum size of the Ready Set. */
static long yyyRSmaxSize =        0L;
/* The maximum size of the postdecoration-traversal stack; */
/* needed for a depth-first traversal of the parse tree. */
static long yyyTravStackMaxSize = 1000L;

struct yyySolvedSAlistCell {yyyWAT attrbNum;
                            struct yyySolvedSAlistCell *next;
                           };
typedef struct yyySolvedSAlistCell yyySSALC;

#define yyyLambdaSSAL (yyySSALC *) NULL
static yyySSALC *yyySSALCfreeList = yyyLambdaSSAL;



static yyyFT yyyRCIL[] = {
4,0,1, 3,0,0, yyyR,0,2, yyyR,1,1, yyyR,0,0, yyyR,1,0,
yyyR,0,2, yyyR,1,1, yyyR,1,0, yyyR,1,2, 0,0,1, 1,0,2,
yyyR,1,0, yyyR,2,1, 1,0,1, yyyR,1,0, yyyR,2,0, 0,0,1,
yyyR,1,1, yyyR,2,2, 3,0,1, yyyR,1,0, yyyR,2,2, 2,0,1,
yyyR,1,1, yyyR,2,1, 3,0,1, yyyR,1,1, yyyR,2,1, 1,0,1,
yyyR,1,0, yyyR,2,0, yyyR,1,2, yyyR,2,0, 0,0,1, 2,0,1,
yyyR,1,1, yyyR,2,1, 0,0,1, 2,0,1, 4,0,1, yyyR,1,0,
yyyR,1,1, 0,0,1, yyyR,1,0, yyyR,1,0, yyyR,0,0, yyyR,0,0,
yyyR,1,1, 0,0,1, yyyR,1,1, 0,0,1, yyyR,1,1, 0,0,1,
yyyR,1,1, 0,0,1, yyyR,1,1, 0,0,1, yyyR,1,3, 0,0,1,
2,0,1, yyyR,1,1, 0,0,1, yyyR,1,1, 1,0,1, yyyR,1,1,
1,0,1, yyyR,1,1, 1,0,1, yyyR,1,1, 1,0,1, yyyR,1,2,
0,0,1, 2,0,1, yyyR,1,2, 0,0,1, 2,0,1, yyyR,1,2,
0,0,1, 2,0,1, yyyR,1,2, 0,0,1, 2,0,1, yyyR,1,2,
0,0,1, 2,0,1, yyyR,1,2, 0,0,1, 2,0,1, yyyR,1,2,
0,0,1, 2,0,1, yyyR,1,2, 0,0,1, 2,0,1, yyyR,0,0,
yyyR,0,0, yyyR,0,0, yyyR,1,1, 1,0,1, yyyR,1,0, yyyR,1,1,
yyyR,1,0, yyyR,1,0, 2,0,1, yyyR,1,1, yyyR,2,1, 0,0,1,
1,0,1, yyyR,1,0, yyyR,2,0, yyyR,1,1, yyyR,2,1, 0,0,1,
1,0,1,
};

static short yyyIIIEL[] = {0,
0,1,5,12,18,21,22,26,27,31,
34,36,41,45,51,55,56,60,66,67,
69,70,72,74,76,78,80,82,84,86,
90,92,95,98,101,104,108,112,116,120,
124,128,132,136,138,140,142,146,148,150,
154,159,162,163,
};

static long yyyIIEL[] = {
0,0,0,0,0,0,0,1,1,3,3,5,
5,5,6,6,6,8,8,10,12,13,15,17,
19,20,20,22,24,26,29,29,32,32,34,37,
40,43,43,44,44,46,49,50,50,52,55,56,
56,56,59,59,62,62,65,65,68,71,74,74,
77,80,82,82,84,85,87,89,91,93,95,97,
98,99,99,100,100,102,104,106,108,110,112,114,
116,118,120,122,124,125,127,129,131,133,133,135,
137,137,139,141,141,143,145,145,147,149,151,151,
153,155,157,157,159,161,163,163,165,167,169,169,
171,173,175,175,177,179,181,181,183,185,187,187,
189,191,193,193,195,196,196,197,197,198,198,200,
200,202,202,204,205,207,208,210,211,211,211,213,
214,214,217,217,220,223,225,228,231,234,236,
};

static long yyyIEL[] = {
0,0,2,2,2,2,2,2,
2,2,2,4,8,10,10,10,
10,10,12,16,18,18,18,22,
22,22,26,26,28,28,30,30,
30,30,32,34,34,34,34,34,
34,38,40,40,44,44,46,50,
50,50,52,52,54,56,56,56,
58,58,60,62,64,64,64,64,
66,68,68,68,68,72,72,72,
72,74,74,74,76,76,82,82,
82,82,84,84,86,86,86,86,
86,86,88,88,88,90,90,90,
90,90,92,92,92,94,94,94,
96,98,98,98,100,102,102,102,
104,106,106,106,108,110,110,110,
112,116,116,116,118,120,120,122,
124,124,124,126,128,128,128,130,
132,132,132,134,136,136,136,138,
140,140,140,142,146,146,146,148,
148,150,154,154,154,156,156,158,
162,162,162,164,164,166,170,170,
170,172,172,174,178,178,178,180,
180,182,186,186,186,188,188,190,
194,194,194,196,196,198,202,202,
202,204,204,206,206,206,206,208,
208,208,210,210,210,212,214,214,
216,216,216,216,218,218,218,218,
218,218,222,222,222,222,222,224,
224,226,226,226,226,230,230,230,
230,230,232,232,234,
};

static yyyFT yyyEntL[] = {
5,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,
0,0,1,0,2,0,0,1,2,0,0,1,2,0,0,2,
1,0,0,1,4,0,0,2,0,1,0,2,0,2,0,2,
3,0,0,2,0,2,4,0,4,0,0,1,0,2,2,0,
0,1,0,2,1,0,3,0,0,1,0,1,5,0,3,0,
1,0,0,2,0,1,1,0,0,1,0,1,1,0,0,1,
1,0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,
3,0,1,0,0,1,0,1,0,1,1,0,0,1,2,0,
0,1,2,0,0,1,2,0,0,1,2,0,0,1,3,0,
1,0,0,1,0,1,3,0,1,0,0,1,0,1,3,0,
1,0,0,1,0,1,3,0,1,0,0,1,0,1,3,0,
1,0,0,1,0,1,3,0,1,0,0,1,0,1,3,0,
1,0,0,1,0,1,3,0,1,0,0,1,0,1,2,0,
0,1,0,1,0,1,0,1,3,0,2,0,1,0,0,2,
0,1,2,0,1,0,0,2,0,1,
};

#if defined(__GNUC__) || defined(__attribute__)
static void yyyfatal(const char *) __attribute__((noreturn));
#endif
static void yyyfatal(const char *msg)
{fputs(msg,stderr);exit(-1);}



static void yyySignalEnts(yyyGNT *node,long startP,long stopP)
  {yyyGNT *dumNode;

   while (startP < stopP)
     {
      if (!yyyEntL[startP]) dumNode = node;
      else dumNode = (node->cL)[yyyEntL[startP]-1];
      if (!(--((dumNode->refCountList)[yyyEntL[startP+1]]
              )
           )
         )
         {
          if (++yyyRSTop == yyyAfterRS)
             {/* reallocate 'yyyRS' data structure */
              yyyRSmaxSize += 500L;
              if ((yyyRS =
                   (struct yyyRSitem *)realloc(yyyRS,
                                               (size_t)((size_t)(yyyRSmaxSize+1)*sizeof(struct yyyRSitem)))
                  ) == (struct yyyRSitem *) NULL)
                 yyyfatal("malloc error in Ox Ready Set space allocation\n");
              yyyAfterRS = yyyRSmaxSize + 1;
             }
          yyyRS[yyyRSTop].node = dumNode;
          yyyRS[yyyRSTop].whichSym = yyyEntL[startP];
          yyyRS[yyyRSTop].wa = yyyEntL[startP+1];
         }
      startP += 2;
     }
  }



static void yyySolveAndSignal(void) {
static long yyyiDum;
static int yyyws,yyywa;
static yyyGNT *yyyRSTopN,*yyyRefN;
static yyyParent yyyRSTopNp;


yyyRSTopNp = (yyyRSTopN = yyyRS[yyyRSTop].node)->parent;
yyyRefN= (yyyws = (yyyRS[yyyRSTop].whichSym))?yyyRSTopNp.noderef:yyyRSTopN;
yyywa = yyyRS[yyyRSTop].wa;
yyyRSTop--;
switch(yyyRefN->prodNum) {
case 1:  /***Yacc rule 1***/
  switch (yyyws) {
  }
break;
case 2:  /***Yacc rule 2***/
  switch (yyyws) {
  }
break;
case 3:  /***Yacc rule 3***/
  switch (yyyws) {
  case 1:  /**/

  break;
  case 3:  /**/

  break;
  case 5:  /**/
    switch (yyywa) {
    case 0:

yyyRSTopN->yyyAttrbs.yyyAttrb3.in
#line 42 "codeb.y"
 =
#line 1099 "oxout.y"
yyyRefN->cL[2]->yyyAttrbs.yyyAttrb6.pars
#line 42 "codeb.y"
;
#line 1103 "oxout.y"
    break;
    }
  break;
  }
break;
case 4:  /***Yacc rule 4***/
  switch (yyyws) {
  case 1:  /**/

  break;
  case 4:  /**/

  break;
  }
break;
case 5:  /***Yacc rule 5***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 0:

yyyRSTopN->yyyAttrbs.yyyAttrb6.pars
#line 52 "codeb.y"
 = mergeLists(
#line 1128 "oxout.y"
yyyRefN->cL[0]->yyyAttrbs.yyyAttrb6.pars
#line 52 "codeb.y"
,addToList(newList(),
#line 1132 "oxout.y"
yyyRefN->cL[1]->yyyAttrbs.yyyAttrb1.name
#line 52 "codeb.y"
, FALSE, TRUE,
#line 1136 "oxout.y"
yyyRefN->cL[0]->yyyAttrbs.yyyAttrb6.parCnt
#line 52 "codeb.y"
, -1), TRUE);
#line 1140 "oxout.y"
    break;
    case 1:

yyyRSTopN->yyyAttrbs.yyyAttrb6.parCnt
#line 53 "codeb.y"
 =
#line 1147 "oxout.y"
yyyRefN->cL[0]->yyyAttrbs.yyyAttrb6.parCnt
#line 53 "codeb.y"
 + 1;
#line 1151 "oxout.y"
    break;
    }
  break;
  case 1:  /**/

  break;
  case 2:  /**/

  break;
  }
break;
case 6:  /***Yacc rule 6***/
  switch (yyyws) {
  case 0:  /**/

  break;
  }
break;
case 7:  /***Yacc rule 7***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 0:

yyyRSTopN->yyyAttrbs.yyyAttrb6.pars
#line 63 "codeb.y"
 = mergeLists(
#line 1179 "oxout.y"
yyyRefN->cL[0]->yyyAttrbs.yyyAttrb6.pars
#line 63 "codeb.y"
,addToList(newList(),
#line 1183 "oxout.y"
yyyRefN->cL[1]->yyyAttrbs.yyyAttrb1.name
#line 63 "codeb.y"
, FALSE, TRUE,
#line 1187 "oxout.y"
yyyRefN->cL[0]->yyyAttrbs.yyyAttrb6.parCnt
#line 63 "codeb.y"
, -1), TRUE);
#line 1191 "oxout.y"
    break;
    case 1:

yyyRSTopN->yyyAttrbs.yyyAttrb6.parCnt
#line 62 "codeb.y"
 =
#line 1198 "oxout.y"
yyyRefN->cL[0]->yyyAttrbs.yyyAttrb6.parCnt
#line 62 "codeb.y"
 + 1;
#line 1202 "oxout.y"
    break;
    }
  break;
  case 1:  /**/

  break;
  case 2:  /**/

  break;
  }
break;
case 8:  /***Yacc rule 8***/
  switch (yyyws) {
  case 0:  /**/

  break;
  }
break;
case 9:  /***Yacc rule 9***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:

yyyRSTopN->yyyAttrbs.yyyAttrb3.out
#line 70 "codeb.y"
 = mergeLists(
#line 1230 "oxout.y"
yyyRefN->cL[0]->yyyAttrbs.yyyAttrb3.out
#line 70 "codeb.y"
,
#line 1234 "oxout.y"
yyyRefN->cL[1]->yyyAttrbs.yyyAttrb5.out
#line 70 "codeb.y"
, FALSE);
#line 1238 "oxout.y"
    break;
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:

yyyRSTopN->yyyAttrbs.yyyAttrb3.in
#line 71 "codeb.y"
 =
#line 1249 "oxout.y"
yyyRefN->yyyAttrbs.yyyAttrb3.in
#line 71 "codeb.y"
;
#line 1253 "oxout.y"
    break;
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    case 0:

#line 68 "codeb.y"


#line 1264 "oxout.y"
yyyRSTopN->yyyAttrbs.yyyAttrb5.in
#line 69 "codeb.y"
 = mergeLists(
#line 1268 "oxout.y"
yyyRefN->yyyAttrbs.yyyAttrb3.in
#line 69 "codeb.y"
,
#line 1272 "oxout.y"
yyyRefN->cL[0]->yyyAttrbs.yyyAttrb3.out
#line 69 "codeb.y"
,FALSE);
#line 1276 "oxout.y"
    break;
    }
  break;
  }
break;
case 10:  /***Yacc rule 10***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 2:

yyyRSTopN->yyyAttrbs.yyyAttrb5.node
#line 80 "codeb.y"
 = newNode(OP_Return,
#line 1291 "oxout.y"
yyyRefN->cL[1]->yyyAttrbs.yyyAttrb4.node
#line 80 "codeb.y"
, NULL);
#line 1295 "oxout.y"
    break;
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    case 0:

#line 77 "codeb.y"


#line 1306 "oxout.y"
yyyRSTopN->yyyAttrbs.yyyAttrb4.ids
#line 78 "codeb.y"
 =
#line 1310 "oxout.y"
yyyRefN->yyyAttrbs.yyyAttrb5.in
#line 78 "codeb.y"
;
#line 1314 "oxout.y"
    break;
    }
  break;
  }
break;
case 11:  /***Yacc rule 11***/
  switch (yyyws) {
  case 0:  /**/

  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:

yyyRSTopN->yyyAttrbs.yyyAttrb7.in
#line 86 "codeb.y"
 =
#line 1332 "oxout.y"
yyyRefN->yyyAttrbs.yyyAttrb5.in
#line 86 "codeb.y"
;
#line 1336 "oxout.y"
    break;
    }
  break;
  }
break;
case 12:  /***Yacc rule 12***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:

yyyRSTopN->yyyAttrbs.yyyAttrb5.out
#line 92 "codeb.y"
 = addVarToList(newList(),
#line 1351 "oxout.y"
yyyRefN->cL[1]->yyyAttrbs.yyyAttrb1.name
#line 92 "codeb.y"
, FALSE, TRUE, getNrDefVar(
#line 1355 "oxout.y"
yyyRefN->yyyAttrbs.yyyAttrb5.in
#line 92 "codeb.y"
));
#line 1359 "oxout.y"
    yyySignalEnts(yyyRefN,38,40);
    break;
    case 2:

yyyRSTopN->yyyAttrbs.yyyAttrb5.node
#line 93 "codeb.y"
 = newNode(OP_Assign,
#line 1367 "oxout.y"
yyyRefN->cL[3]->yyyAttrbs.yyyAttrb4.node
#line 93 "codeb.y"
, NULL);
#line 1371 "oxout.y"
yyyRSTopN->yyyAttrbs.yyyAttrb5.node
#line 93 "codeb.y"
->parameter = getParIndex(
#line 1375 "oxout.y"
yyyRefN->yyyAttrbs.yyyAttrb5.out
#line 93 "codeb.y"
,
#line 1379 "oxout.y"
yyyRefN->cL[1]->yyyAttrbs.yyyAttrb1.name
#line 93 "codeb.y"
);
#line 1383 "oxout.y"
yyyRSTopN->yyyAttrbs.yyyAttrb5.node
#line 93 "codeb.y"
->regIndex = getRegIndex(
#line 1387 "oxout.y"
yyyRefN->yyyAttrbs.yyyAttrb5.out
#line 93 "codeb.y"
,
#line 1391 "oxout.y"
yyyRefN->cL[1]->yyyAttrbs.yyyAttrb1.name
#line 93 "codeb.y"
);
#line 1395 "oxout.y"
    break;
    }
  break;
  case 2:  /**/

  break;
  case 4:  /**/
    switch (yyywa) {
    case 0:

#line 90 "codeb.y"


#line 1409 "oxout.y"
yyyRSTopN->yyyAttrbs.yyyAttrb4.ids
#line 91 "codeb.y"
 =
#line 1413 "oxout.y"
yyyRefN->yyyAttrbs.yyyAttrb5.in
#line 91 "codeb.y"
;
#line 1417 "oxout.y"
    break;
    }
  break;
  }
break;
case 13:  /***Yacc rule 13***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 2:

yyyRSTopN->yyyAttrbs.yyyAttrb5.node
#line 102 "codeb.y"
 = newNode(OP_Assign,
#line 1432 "oxout.y"
yyyRefN->cL[2]->yyyAttrbs.yyyAttrb4.node
#line 102 "codeb.y"
, NULL);
#line 1436 "oxout.y"
yyyRSTopN->yyyAttrbs.yyyAttrb5.node
#line 102 "codeb.y"
->parameter = getParIndex(
#line 1440 "oxout.y"
yyyRefN->yyyAttrbs.yyyAttrb5.in
#line 102 "codeb.y"
,
#line 1444 "oxout.y"
yyyRefN->cL[0]->yyyAttrbs.yyyAttrb1.name
#line 102 "codeb.y"
);
#line 1448 "oxout.y"
yyyRSTopN->yyyAttrbs.yyyAttrb5.node
#line 102 "codeb.y"
->regIndex = getRegIndex(
#line 1452 "oxout.y"
yyyRefN->yyyAttrbs.yyyAttrb5.in
#line 102 "codeb.y"
,
#line 1456 "oxout.y"
yyyRefN->cL[0]->yyyAttrbs.yyyAttrb1.name
#line 102 "codeb.y"
);
#line 1460 "oxout.y"
    break;
    }
  break;
  case 1:  /**/

  break;
  case 3:  /**/
    switch (yyywa) {
    case 0:

#line 98 "codeb.y"


#line 1474 "oxout.y"
yyyRSTopN->yyyAttrbs.yyyAttrb4.ids
#line 99 "codeb.y"
 =
#line 1478 "oxout.y"
yyyRefN->yyyAttrbs.yyyAttrb5.in
#line 99 "codeb.y"
;
#line 1482 "oxout.y"
    break;
    }
  break;
  }
break;
case 14:  /***Yacc rule 14***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:

yyyRSTopN->yyyAttrbs.yyyAttrb7.out
#line 108 "codeb.y"
 =
#line 1497 "oxout.y"
yyyRefN->cL[3]->yyyAttrbs.yyyAttrb7.out
#line 108 "codeb.y"
;
#line 1501 "oxout.y"
    break;
    case 2:
yyyRSTopN->yyyAttrbs.yyyAttrb7.node = yyyRefN->cL[3]->yyyAttrbs.yyyAttrb7.node;
    break;
    }
  break;
  case 1:  /**/

  break;
  case 4:  /**/
    switch (yyywa) {
    case 0:

yyyRSTopN->yyyAttrbs.yyyAttrb7.in
#line 107 "codeb.y"
 = mergeLists(
#line 1518 "oxout.y"
yyyRefN->yyyAttrbs.yyyAttrb7.in
#line 107 "codeb.y"
,addToList(newList(),
#line 1522 "oxout.y"
yyyRefN->cL[0]->yyyAttrbs.yyyAttrb1.name
#line 107 "codeb.y"
,TRUE,TRUE,-1,-1),TRUE);
#line 1526 "oxout.y"
    break;
    }
  break;
  }
break;
case 15:  /***Yacc rule 15***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:

yyyRSTopN->yyyAttrbs.yyyAttrb7.out
#line 116 "codeb.y"
 =
#line 1541 "oxout.y"
yyyRefN->cL[1]->yyyAttrbs.yyyAttrb7.out
#line 116 "codeb.y"
;
#line 1545 "oxout.y"
    break;
    case 2:
yyyRSTopN->yyyAttrbs.yyyAttrb7.node = yyyRefN->cL[1]->yyyAttrbs.yyyAttrb7.node;
    break;
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    case 0:

yyyRSTopN->yyyAttrbs.yyyAttrb7.in
#line 115 "codeb.y"
 =
#line 1559 "oxout.y"
yyyRefN->yyyAttrbs.yyyAttrb7.in
#line 115 "codeb.y"
;
#line 1563 "oxout.y"
    break;
    }
  break;
  }
break;
case 16:  /***Yacc rule 16***/
  switch (yyyws) {
  case 0:  /**/

  break;
  }
break;
case 17:  /***Yacc rule 17***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:

yyyRSTopN->yyyAttrbs.yyyAttrb7.out
#line 130 "codeb.y"
 = mergeLists(
#line 1585 "oxout.y"
yyyRefN->cL[2]->yyyAttrbs.yyyAttrb7.out
#line 130 "codeb.y"
,
#line 1589 "oxout.y"
yyyRefN->cL[0]->yyyAttrbs.yyyAttrb7.out
#line 130 "codeb.y"
,FALSE);
#line 1593 "oxout.y"
    break;
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:

yyyRSTopN->yyyAttrbs.yyyAttrb7.in
#line 129 "codeb.y"
 =
#line 1604 "oxout.y"
yyyRefN->yyyAttrbs.yyyAttrb7.in
#line 129 "codeb.y"
;
#line 1608 "oxout.y"
    break;
    }
  break;
  case 3:  /**/
    switch (yyywa) {
    case 0:

yyyRSTopN->yyyAttrbs.yyyAttrb7.in
#line 128 "codeb.y"
 =
#line 1619 "oxout.y"
yyyRefN->yyyAttrbs.yyyAttrb7.in
#line 128 "codeb.y"
;
#line 1623 "oxout.y"
    break;
    }
  break;
  }
break;
case 18:  /***Yacc rule 18***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:

yyyRSTopN->yyyAttrbs.yyyAttrb7.out
#line 140 "codeb.y"
 =
#line 1638 "oxout.y"
yyyRefN->cL[2]->yyyAttrbs.yyyAttrb3.out
#line 140 "codeb.y"
;
#line 1642 "oxout.y"
    break;
    case 2:

yyyRSTopN->yyyAttrbs.yyyAttrb7.node
#line 142 "codeb.y"
 = newNode(OP_Guarded,
#line 1649 "oxout.y"
yyyRefN->cL[0]->yyyAttrbs.yyyAttrb4.node
#line 142 "codeb.y"
, NULL);
#line 1653 "oxout.y"
    break;
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:

yyyRSTopN->yyyAttrbs.yyyAttrb4.ids
#line 138 "codeb.y"
 =
#line 1664 "oxout.y"
yyyRefN->yyyAttrbs.yyyAttrb7.in
#line 138 "codeb.y"
;
#line 1668 "oxout.y"
    break;
    }
  break;
  case 3:  /**/
    switch (yyywa) {
    case 0:

yyyRSTopN->yyyAttrbs.yyyAttrb3.in
#line 139 "codeb.y"
 =
#line 1679 "oxout.y"
yyyRefN->yyyAttrbs.yyyAttrb7.in
#line 139 "codeb.y"
;
#line 1683 "oxout.y"
    break;
    }
  break;
  case 4:  /**/

  break;
  case 5:  /**/
    switch (yyywa) {
    case 0:

yyyRSTopN->yyyAttrbs.yyyAttrb4.ids
#line 141 "codeb.y"
 =
#line 1697 "oxout.y"
yyyRefN->yyyAttrbs.yyyAttrb7.in
#line 141 "codeb.y"
;
#line 1701 "oxout.y"
    break;
    }
  break;
  }
break;
case 19:  /***Yacc rule 19***/
  switch (yyyws) {
  case 0:  /**/

  break;
  }
break;
case 20:  /***Yacc rule 20***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:
yyyRSTopN->yyyAttrbs.yyyAttrb4.node = yyyRefN->cL[0]->yyyAttrbs.yyyAttrb4.node;
    break;
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
yyyRSTopN->yyyAttrbs.yyyAttrb4.ids = yyyRefN->yyyAttrbs.yyyAttrb4.ids;
    break;
    }
  break;
  }
break;
case 21:  /***Yacc rule 21***/
  switch (yyyws) {
  case 0:  /**/

  break;
  }
break;
case 22:  /***Yacc rule 22***/
  switch (yyyws) {
  case 0:  /**/

  break;
  case 1:  /**/

  break;
  }
break;
case 23:  /***Yacc rule 23***/
  switch (yyyws) {
  case 0:  /**/

  break;
  }
break;
case 24:  /***Yacc rule 24***/
  switch (yyyws) {
  case 0:  /**/

  break;
  }
break;
case 25:  /***Yacc rule 25***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:
yyyRSTopN->yyyAttrbs.yyyAttrb4.node = yyyRefN->cL[0]->yyyAttrbs.yyyAttrb4.node;
    break;
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
yyyRSTopN->yyyAttrbs.yyyAttrb4.ids = yyyRefN->yyyAttrbs.yyyAttrb4.ids;
    break;
    }
  break;
  }
break;
case 26:  /***Yacc rule 26***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:
yyyRSTopN->yyyAttrbs.yyyAttrb4.node = yyyRefN->cL[0]->yyyAttrbs.yyyAttrb4.node;
    break;
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
yyyRSTopN->yyyAttrbs.yyyAttrb4.ids = yyyRefN->yyyAttrbs.yyyAttrb4.ids;
    break;
    }
  break;
  }
break;
case 27:  /***Yacc rule 27***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:
yyyRSTopN->yyyAttrbs.yyyAttrb4.node = yyyRefN->cL[0]->yyyAttrbs.yyyAttrb4.node;
    break;
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
yyyRSTopN->yyyAttrbs.yyyAttrb4.ids = yyyRefN->yyyAttrbs.yyyAttrb4.ids;
    break;
    }
  break;
  }
break;
case 28:  /***Yacc rule 28***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:
yyyRSTopN->yyyAttrbs.yyyAttrb4.node = yyyRefN->cL[0]->yyyAttrbs.yyyAttrb4.node;
    break;
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
yyyRSTopN->yyyAttrbs.yyyAttrb4.ids = yyyRefN->yyyAttrbs.yyyAttrb4.ids;
    break;
    }
  break;
  }
break;
case 29:  /***Yacc rule 29***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:
yyyRSTopN->yyyAttrbs.yyyAttrb4.node = yyyRefN->cL[0]->yyyAttrbs.yyyAttrb4.node;
    break;
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
yyyRSTopN->yyyAttrbs.yyyAttrb4.ids = yyyRefN->yyyAttrbs.yyyAttrb4.ids;
    break;
    }
  break;
  }
break;
case 30:  /***Yacc rule 30***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:

yyyRSTopN->yyyAttrbs.yyyAttrb4.node
#line 180 "codeb.y"
 = newNode(
#line 1862 "oxout.y"
yyyRefN->cL[1]->yyyAttrbs.yyyAttrb8.node
#line 180 "codeb.y"
->operator,
#line 1866 "oxout.y"
yyyRefN->cL[0]->yyyAttrbs.yyyAttrb4.node
#line 180 "codeb.y"
,
#line 1870 "oxout.y"
yyyRefN->cL[2]->yyyAttrbs.yyyAttrb4.node
#line 180 "codeb.y"
);
#line 1874 "oxout.y"
    break;
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
yyyRSTopN->yyyAttrbs.yyyAttrb4.ids = yyyRefN->yyyAttrbs.yyyAttrb4.ids;
    break;
    }
  break;
  case 2:  /**/

  break;
  case 3:  /**/
    switch (yyywa) {
    case 0:
yyyRSTopN->yyyAttrbs.yyyAttrb4.ids = yyyRefN->yyyAttrbs.yyyAttrb4.ids;
    break;
    }
  break;
  }
break;
case 31:  /***Yacc rule 31***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:
yyyRSTopN->yyyAttrbs.yyyAttrb4.node = yyyRefN->cL[0]->yyyAttrbs.yyyAttrb4.node;
    break;
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
yyyRSTopN->yyyAttrbs.yyyAttrb4.ids = yyyRefN->yyyAttrbs.yyyAttrb4.ids;
    break;
    }
  break;
  }
break;
case 32:  /***Yacc rule 32***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:

yyyRSTopN->yyyAttrbs.yyyAttrb4.node
#line 188 "codeb.y"
 = newNode(OP_Not,
#line 1924 "oxout.y"
yyyRefN->cL[1]->yyyAttrbs.yyyAttrb4.node
#line 188 "codeb.y"
,NULL);
#line 1928 "oxout.y"
    break;
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    case 0:
yyyRSTopN->yyyAttrbs.yyyAttrb4.ids = yyyRefN->yyyAttrbs.yyyAttrb4.ids;
    break;
    }
  break;
  }
break;
case 33:  /***Yacc rule 33***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:

yyyRSTopN->yyyAttrbs.yyyAttrb4.node
#line 192 "codeb.y"
 = newNode(OP_Head,
#line 1950 "oxout.y"
yyyRefN->cL[1]->yyyAttrbs.yyyAttrb4.node
#line 192 "codeb.y"
,NULL);
#line 1954 "oxout.y"
    break;
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    case 0:
yyyRSTopN->yyyAttrbs.yyyAttrb4.ids = yyyRefN->yyyAttrbs.yyyAttrb4.ids;
    break;
    }
  break;
  }
break;
case 34:  /***Yacc rule 34***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:

yyyRSTopN->yyyAttrbs.yyyAttrb4.node
#line 196 "codeb.y"
 = newNode(OP_Tail,
#line 1976 "oxout.y"
yyyRefN->cL[1]->yyyAttrbs.yyyAttrb4.node
#line 196 "codeb.y"
,NULL);
#line 1980 "oxout.y"
    break;
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    case 0:
yyyRSTopN->yyyAttrbs.yyyAttrb4.ids = yyyRefN->yyyAttrbs.yyyAttrb4.ids;
    break;
    }
  break;
  }
break;
case 35:  /***Yacc rule 35***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:

yyyRSTopN->yyyAttrbs.yyyAttrb4.node
#line 200 "codeb.y"
 = newNode(OP_IsList,
#line 2002 "oxout.y"
yyyRefN->cL[1]->yyyAttrbs.yyyAttrb4.node
#line 200 "codeb.y"
,NULL);
#line 2006 "oxout.y"
    break;
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    case 0:
yyyRSTopN->yyyAttrbs.yyyAttrb4.ids = yyyRefN->yyyAttrbs.yyyAttrb4.ids;
    break;
    }
  break;
  }
break;
case 36:  /***Yacc rule 36***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:

yyyRSTopN->yyyAttrbs.yyyAttrb4.node
#line 206 "codeb.y"
 = newNode(OP_Add,
#line 2028 "oxout.y"
yyyRefN->cL[0]->yyyAttrbs.yyyAttrb4.node
#line 206 "codeb.y"
,
#line 2032 "oxout.y"
yyyRefN->cL[2]->yyyAttrbs.yyyAttrb4.node
#line 206 "codeb.y"
);
#line 2036 "oxout.y"
    break;
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
yyyRSTopN->yyyAttrbs.yyyAttrb4.ids = yyyRefN->yyyAttrbs.yyyAttrb4.ids;
    break;
    }
  break;
  case 3:  /**/
    switch (yyywa) {
    case 0:
yyyRSTopN->yyyAttrbs.yyyAttrb4.ids = yyyRefN->yyyAttrbs.yyyAttrb4.ids;
    break;
    }
  break;
  }
break;
case 37:  /***Yacc rule 37***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:

yyyRSTopN->yyyAttrbs.yyyAttrb4.node
#line 210 "codeb.y"
 = newNode(OP_Add,
#line 2065 "oxout.y"
yyyRefN->cL[0]->yyyAttrbs.yyyAttrb4.node
#line 210 "codeb.y"
,
#line 2069 "oxout.y"
yyyRefN->cL[2]->yyyAttrbs.yyyAttrb4.node
#line 210 "codeb.y"
);
#line 2073 "oxout.y"
    break;
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
yyyRSTopN->yyyAttrbs.yyyAttrb4.ids = yyyRefN->yyyAttrbs.yyyAttrb4.ids;
    break;
    }
  break;
  case 3:  /**/
    switch (yyywa) {
    case 0:
yyyRSTopN->yyyAttrbs.yyyAttrb4.ids = yyyRefN->yyyAttrbs.yyyAttrb4.ids;
    break;
    }
  break;
  }
break;
case 38:  /***Yacc rule 38***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:

yyyRSTopN->yyyAttrbs.yyyAttrb4.node
#line 216 "codeb.y"
 = newNode(OP_Mult,
#line 2102 "oxout.y"
yyyRefN->cL[0]->yyyAttrbs.yyyAttrb4.node
#line 216 "codeb.y"
,
#line 2106 "oxout.y"
yyyRefN->cL[2]->yyyAttrbs.yyyAttrb4.node
#line 216 "codeb.y"
);
#line 2110 "oxout.y"
    break;
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
yyyRSTopN->yyyAttrbs.yyyAttrb4.ids = yyyRefN->yyyAttrbs.yyyAttrb4.ids;
    break;
    }
  break;
  case 3:  /**/
    switch (yyywa) {
    case 0:
yyyRSTopN->yyyAttrbs.yyyAttrb4.ids = yyyRefN->yyyAttrbs.yyyAttrb4.ids;
    break;
    }
  break;
  }
break;
case 39:  /***Yacc rule 39***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:

yyyRSTopN->yyyAttrbs.yyyAttrb4.node
#line 220 "codeb.y"
 = newNode(OP_Mult,
#line 2139 "oxout.y"
yyyRefN->cL[0]->yyyAttrbs.yyyAttrb4.node
#line 220 "codeb.y"
,
#line 2143 "oxout.y"
yyyRefN->cL[2]->yyyAttrbs.yyyAttrb4.node
#line 220 "codeb.y"
);
#line 2147 "oxout.y"
    break;
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
yyyRSTopN->yyyAttrbs.yyyAttrb4.ids = yyyRefN->yyyAttrbs.yyyAttrb4.ids;
    break;
    }
  break;
  case 3:  /**/
    switch (yyywa) {
    case 0:
yyyRSTopN->yyyAttrbs.yyyAttrb4.ids = yyyRefN->yyyAttrbs.yyyAttrb4.ids;
    break;
    }
  break;
  }
break;
case 40:  /***Yacc rule 40***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:

yyyRSTopN->yyyAttrbs.yyyAttrb4.node
#line 226 "codeb.y"
 = newNode(OP_Or,
#line 2176 "oxout.y"
yyyRefN->cL[0]->yyyAttrbs.yyyAttrb4.node
#line 226 "codeb.y"
,
#line 2180 "oxout.y"
yyyRefN->cL[2]->yyyAttrbs.yyyAttrb4.node
#line 226 "codeb.y"
);
#line 2184 "oxout.y"
    break;
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
yyyRSTopN->yyyAttrbs.yyyAttrb4.ids = yyyRefN->yyyAttrbs.yyyAttrb4.ids;
    break;
    }
  break;
  case 3:  /**/
    switch (yyywa) {
    case 0:
yyyRSTopN->yyyAttrbs.yyyAttrb4.ids = yyyRefN->yyyAttrbs.yyyAttrb4.ids;
    break;
    }
  break;
  }
break;
case 41:  /***Yacc rule 41***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:

yyyRSTopN->yyyAttrbs.yyyAttrb4.node
#line 230 "codeb.y"
 = newNode(OP_Or,
#line 2213 "oxout.y"
yyyRefN->cL[0]->yyyAttrbs.yyyAttrb4.node
#line 230 "codeb.y"
,
#line 2217 "oxout.y"
yyyRefN->cL[2]->yyyAttrbs.yyyAttrb4.node
#line 230 "codeb.y"
);
#line 2221 "oxout.y"
    break;
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
yyyRSTopN->yyyAttrbs.yyyAttrb4.ids = yyyRefN->yyyAttrbs.yyyAttrb4.ids;
    break;
    }
  break;
  case 3:  /**/
    switch (yyywa) {
    case 0:
yyyRSTopN->yyyAttrbs.yyyAttrb4.ids = yyyRefN->yyyAttrbs.yyyAttrb4.ids;
    break;
    }
  break;
  }
break;
case 42:  /***Yacc rule 42***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:

yyyRSTopN->yyyAttrbs.yyyAttrb4.node
#line 236 "codeb.y"
 = newNode(OP_Dot,
#line 2250 "oxout.y"
yyyRefN->cL[0]->yyyAttrbs.yyyAttrb4.node
#line 236 "codeb.y"
,
#line 2254 "oxout.y"
yyyRefN->cL[2]->yyyAttrbs.yyyAttrb4.node
#line 236 "codeb.y"
);
#line 2258 "oxout.y"
    break;
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
yyyRSTopN->yyyAttrbs.yyyAttrb4.ids = yyyRefN->yyyAttrbs.yyyAttrb4.ids;
    break;
    }
  break;
  case 3:  /**/
    switch (yyywa) {
    case 0:
yyyRSTopN->yyyAttrbs.yyyAttrb4.ids = yyyRefN->yyyAttrbs.yyyAttrb4.ids;
    break;
    }
  break;
  }
break;
case 43:  /***Yacc rule 43***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:

yyyRSTopN->yyyAttrbs.yyyAttrb4.node
#line 240 "codeb.y"
 = newNode(OP_Dot,
#line 2287 "oxout.y"
yyyRefN->cL[0]->yyyAttrbs.yyyAttrb4.node
#line 240 "codeb.y"
,
#line 2291 "oxout.y"
yyyRefN->cL[2]->yyyAttrbs.yyyAttrb4.node
#line 240 "codeb.y"
);
#line 2295 "oxout.y"
    break;
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
yyyRSTopN->yyyAttrbs.yyyAttrb4.ids = yyyRefN->yyyAttrbs.yyyAttrb4.ids;
    break;
    }
  break;
  case 3:  /**/
    switch (yyywa) {
    case 0:
yyyRSTopN->yyyAttrbs.yyyAttrb4.ids = yyyRefN->yyyAttrbs.yyyAttrb4.ids;
    break;
    }
  break;
  }
break;
case 44:  /***Yacc rule 44***/
  switch (yyyws) {
  case 0:  /**/

  break;
  }
break;
case 45:  /***Yacc rule 45***/
  switch (yyyws) {
  case 0:  /**/

  break;
  }
break;
case 46:  /***Yacc rule 46***/
  switch (yyyws) {
  case 0:  /**/

  break;
  }
break;
case 47:  /***Yacc rule 47***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:
yyyRSTopN->yyyAttrbs.yyyAttrb4.node = yyyRefN->cL[1]->yyyAttrbs.yyyAttrb4.node;
    break;
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    case 0:
yyyRSTopN->yyyAttrbs.yyyAttrb4.ids = yyyRefN->yyyAttrbs.yyyAttrb4.ids;
    break;
    }
  break;
  }
break;
case 48:  /***Yacc rule 48***/
  switch (yyyws) {
  case 0:  /**/

  break;
  case 1:  /**/

  break;
  }
break;
case 49:  /***Yacc rule 49***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:

yyyRSTopN->yyyAttrbs.yyyAttrb4.node
#line 257 "codeb.y"
 = newIDLeaf(OP_Id,
#line 2373 "oxout.y"
yyyRefN->cL[0]->yyyAttrbs.yyyAttrb1.name
#line 257 "codeb.y"
, getParIndex(
#line 2377 "oxout.y"
yyyRefN->yyyAttrbs.yyyAttrb4.ids
#line 257 "codeb.y"
,
#line 2381 "oxout.y"
yyyRefN->cL[0]->yyyAttrbs.yyyAttrb1.name
#line 257 "codeb.y"
), getRegIndex(
#line 2385 "oxout.y"
yyyRefN->yyyAttrbs.yyyAttrb4.ids
#line 257 "codeb.y"
,
#line 2389 "oxout.y"
yyyRefN->cL[0]->yyyAttrbs.yyyAttrb1.name
#line 257 "codeb.y"
));
#line 2393 "oxout.y"
    break;
    }
  break;
  case 1:  /**/

  break;
  }
break;
case 50:  /***Yacc rule 50***/
  switch (yyyws) {
  case 0:  /**/

  break;
  case 1:  /**/

  break;
  }
break;
case 51:  /***Yacc rule 51***/
  switch (yyyws) {
  case 0:  /**/

  break;
  case 1:  /**/

  break;
  case 3:  /**/
    switch (yyywa) {
    case 0:
yyyRSTopN->yyyAttrbs.yyyAttrb10.ids = yyyRefN->yyyAttrbs.yyyAttrb4.ids;
    break;
    }
  break;
  }
break;
case 52:  /***Yacc rule 52***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:

yyyRSTopN->yyyAttrbs.yyyAttrb10.node
#line 276 "codeb.y"
 = newNode(OP_Expr,
#line 2438 "oxout.y"
yyyRefN->cL[1]->yyyAttrbs.yyyAttrb4.node
#line 276 "codeb.y"
, NULL);
#line 2442 "oxout.y"
    break;
    case 2:

yyyRSTopN->yyyAttrbs.yyyAttrb10.parCnt
#line 277 "codeb.y"
 =
#line 2449 "oxout.y"
yyyRefN->cL[0]->yyyAttrbs.yyyAttrb10.parCnt
#line 277 "codeb.y"
 + 1;
#line 2453 "oxout.y"
    break;
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
yyyRSTopN->yyyAttrbs.yyyAttrb10.ids = yyyRefN->yyyAttrbs.yyyAttrb10.ids;
    break;
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    case 0:
yyyRSTopN->yyyAttrbs.yyyAttrb4.ids = yyyRefN->yyyAttrbs.yyyAttrb10.ids;
    break;
    }
  break;
  }
break;
case 53:  /***Yacc rule 53***/
  switch (yyyws) {
  case 0:  /**/

  break;
  }
break;
case 54:  /***Yacc rule 54***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:

yyyRSTopN->yyyAttrbs.yyyAttrb10.node
#line 287 "codeb.y"
 = newNode(OP_Expr,
#line 2489 "oxout.y"
yyyRefN->cL[1]->yyyAttrbs.yyyAttrb4.node
#line 287 "codeb.y"
, NULL);
#line 2493 "oxout.y"
    break;
    case 2:

yyyRSTopN->yyyAttrbs.yyyAttrb10.parCnt
#line 288 "codeb.y"
 =
#line 2500 "oxout.y"
yyyRefN->cL[0]->yyyAttrbs.yyyAttrb10.parCnt
#line 288 "codeb.y"
 + 1;
#line 2504 "oxout.y"
    break;
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
yyyRSTopN->yyyAttrbs.yyyAttrb10.ids = yyyRefN->yyyAttrbs.yyyAttrb10.ids;
    break;
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    case 0:
yyyRSTopN->yyyAttrbs.yyyAttrb4.ids = yyyRefN->yyyAttrbs.yyyAttrb10.ids;
    break;
    }
  break;
  }
break;
} /* switch */

if (yyyws)  /* the just-solved instance was inherited. */
   {if (yyyRSTopN->prodNum)
       {yyyiDum = yyyIIEL[yyyIIIEL[yyyRSTopN->prodNum]] + yyywa;
        yyySignalEnts(yyyRSTopN,yyyIEL[yyyiDum],
                                yyyIEL[yyyiDum+1]
                     );
       }
   }
else     /* the just-solved instance was synthesized. */
   {if (!(yyyRSTopN->parentIsStack)) /* node has a parent. */
       {yyyiDum = yyyIIEL[yyyIIIEL[yyyRSTopNp.noderef->prodNum] +
                          yyyRSTopN->whichSym
                         ] +
                  yyywa;
        yyySignalEnts(yyyRSTopNp.noderef,
                      yyyIEL[yyyiDum],
                      yyyIEL[yyyiDum+1]
                     );
       }
    else   /* node is still on the stack--it has no parent yet. */
       {yyySSALC **yyypL = &(yyyRSTopNp.stackref->solvedSAlist);
        yyySSALC *yyyiDum;
        if (yyySSALCfreeList == yyyLambdaSSAL)
           {yyyiDum = (yyySSALC *) malloc((size_t)sizeof(yyySSALC));
            if (yyyiDum == yyyLambdaSSAL)
               yyyfatal("malloc error in Ox Stack Solved List space allocation\n");
           }
        else
           {yyyiDum = yyySSALCfreeList;
            yyySSALCfreeList = yyySSALCfreeList->next;
           }
        yyyiDum->next = *yyypL;
        yyyiDum->attrbNum = (yyyWAT)yyywa;
        *yyypL = yyyiDum;
       }
   }

} /* yyySolveAndSignal */



#define condStg unsigned int conds;
#define yyyClearConds {yyyTravStack[yyyTST].conds = 0;}
#define yyySetCond(n) {yyyTravStack[yyyTST].conds += (1<<(n));}
#define yyyCond(n) ((yyyTravStack[yyyTST].conds & (1<<(n)))?1:0)



struct yyyTravStackItem {yyyGNT *node;
                         char isReady;
                         condStg
                        };



static void yyyDoTraversals(yyyGNT *rootNode)
{struct yyyTravStackItem *yyyTravStack;
 long yyyTST,yyyAfterTravStack;
 yyyGNT *yyyTSTn,**yyyCLptr2;
 int yyyRL=0,yyyPass;
 int i;

 if (!yyyYok) return;
 if ((yyyTravStack =
                 ((struct yyyTravStackItem *)
                  calloc((size_t)yyyTravStackMaxSize,
                         (size_t)sizeof(struct yyyTravStackItem)
                        )
                 )
     )
     ==
     (struct yyyTravStackItem *) NULL
    )
    yyyfatal("malloc error in Ox Traversal Stack allocation\n");

yyyAfterTravStack = yyyTravStackMaxSize;
#define yyyTSBottom 1L


for (int yyyi=0; yyyi<4; yyyi++) {
yyyTST = 1L;
yyyTravStack[yyyTST].node = rootNode;
yyyTravStack[yyyTST].isReady = 0;
yyyClearConds

while(yyyTST >= yyyTSBottom)
  {yyyTSTn = yyyTravStack[yyyTST].node;
   if (yyyTravStack[yyyTST].isReady)
      {yyyPass = 1;
       goto yyyTravSwitch;
yyyTpop:
       yyyTST--;
      }
   else
      {yyyPass = 0;
       goto yyyTravSwitch;
yyyTpush:
       yyyTravStack[yyyTST].isReady = 1;
       if (yyyTSTn->prodNum)
          {if (yyyRL)
             {yyyCLptr2 = yyyTSTn->cL;
              i = yyyTSTn->cLlen;
              while (i--)
                {if (++yyyTST == yyyAfterTravStack)
                    {/* realloc `yyyTravStack' data structure */
                     yyyTravStackMaxSize += 500L;
                     if ((yyyTravStack = (struct yyyTravStackItem *)
                          realloc(yyyTravStack,
                                  (size_t)((size_t)yyyTravStackMaxSize*sizeof(struct yyyTravStackItem)))
                         ) == (struct yyyTravStackItem *) NULL)
                        yyyfatal("malloc error in Ox Traversal Stack allocation\n");
                     yyyAfterTravStack = yyyTravStackMaxSize;
                    }
                 yyyTravStack[yyyTST].node = *yyyCLptr2;
                 yyyTravStack[yyyTST].isReady = 0;
                 yyyClearConds
                 yyyCLptr2++;
                }
             } /* right to left */
          else  /* left to right */
             {i = yyyTSTn->cLlen;
              yyyCLptr2 = yyyTSTn->cL + i;
              while (i--)
                {yyyCLptr2--;
                 if (++yyyTST == yyyAfterTravStack)
                    {/* realloc `yyyTravStack' data structure */
                     yyyTravStackMaxSize += 500L;
                     if ((yyyTravStack = (struct yyyTravStackItem *)
                          realloc(yyyTravStack,
                                  (size_t)((size_t)yyyTravStackMaxSize*sizeof(struct yyyTravStackItem)))
                         ) == (struct yyyTravStackItem *) NULL)
                        yyyfatal("malloc error in Ox Traversal Stack allocation\n");
                     yyyAfterTravStack = yyyTravStackMaxSize;
                    }
                  yyyTravStack[yyyTST].node = *yyyCLptr2;
                  yyyTravStack[yyyTST].isReady = 0;
                  yyyClearConds
                }
             } /* left to right */
          }
      } /* else */
   continue;
yyyTravSwitch:
				switch(yyyTSTn->prodNum)	{
case 1:
	switch(yyyi)	{
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 2:
	switch(yyyi)	{
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 3:
	switch(yyyi)	{
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
if (
#line 43 "codeb.y"
(1)
#line 2788 "oxout.y"
) yyySetCond(1)

				case 1:

if (yyyCond(0) != yyyPass) {
}
if (yyyCond(1) != yyyPass) {
#line 43 "codeb.y"
 functionStart(
#line 2798 "oxout.y"
yyyTSTn->cL[0]->yyyAttrbs.yyyAttrb1.name
#line 43 "codeb.y"
);
#line 2802 "oxout.y"
}
				break;
					}
		break;
			}

break;
case 4:
	switch(yyyi)	{
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
if (
#line 47 "codeb.y"
(1)
#line 2846 "oxout.y"
) yyySetCond(1)

				case 1:

if (yyyCond(0) != yyyPass) {
}
if (yyyCond(1) != yyyPass) {
#line 47 "codeb.y"
 functionStart(
#line 2856 "oxout.y"
yyyTSTn->cL[0]->yyyAttrbs.yyyAttrb1.name
#line 47 "codeb.y"
);
#line 2860 "oxout.y"
}
				break;
					}
		break;
			}

break;
case 5:
	switch(yyyi)	{
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 6:
	switch(yyyi)	{
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 7:
	switch(yyyi)	{
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 8:
	switch(yyyi)	{
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 9:
	switch(yyyi)	{
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

if (yyyCond(0) != yyyPass) {
#line 72 "codeb.y"
 burm_label(
#line 3070 "oxout.y"
yyyTSTn->cL[1]->yyyAttrbs.yyyAttrb5.node
#line 72 "codeb.y"
); burm_reduce(
#line 3074 "oxout.y"
yyyTSTn->cL[1]->yyyAttrbs.yyyAttrb5.node
#line 72 "codeb.y"
,1);
#line 3078 "oxout.y"
}
				break;
					}
		break;
			}

break;
case 10:
	switch(yyyi)	{
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;yyySetCond(0)

				case 1:

if (yyyCond(0) != yyyPass) {
yyyTSTn->yyyAttrbs.yyyAttrb5.node
#line 81 "codeb.y"
->reg = getRegByNr(getNrDefVar(
#line 3108 "oxout.y"
yyyTSTn->yyyAttrbs.yyyAttrb5.in
#line 81 "codeb.y"
));
#line 3112 "oxout.y"
yyyTSTn->cL[1]->yyyAttrbs.yyyAttrb4.node
#line 81 "codeb.y"
->reg =
#line 3116 "oxout.y"
yyyTSTn->yyyAttrbs.yyyAttrb5.node
#line 81 "codeb.y"
->reg;
#line 3120 "oxout.y"
}
				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 11:
	switch(yyyi)	{
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 12:
	switch(yyyi)	{
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

if (yyyCond(0) != yyyPass) {
#line 95 "codeb.y"
 overlaps(
#line 3198 "oxout.y"
yyyTSTn->yyyAttrbs.yyyAttrb5.in
#line 95 "codeb.y"
,
#line 3202 "oxout.y"
yyyTSTn->cL[1]->yyyAttrbs.yyyAttrb1.name
#line 95 "codeb.y"
,FALSE);
#line 3206 "oxout.y"
}
				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;yyySetCond(0)

				case 1:

if (yyyCond(0) != yyyPass) {
yyyTSTn->yyyAttrbs.yyyAttrb5.node
#line 94 "codeb.y"
->reg = getRegByNr(getNrDefVar(
#line 3222 "oxout.y"
yyyTSTn->yyyAttrbs.yyyAttrb5.in
#line 94 "codeb.y"
));
#line 3226 "oxout.y"
yyyTSTn->cL[3]->yyyAttrbs.yyyAttrb4.node
#line 94 "codeb.y"
->reg =
#line 3230 "oxout.y"
yyyTSTn->yyyAttrbs.yyyAttrb5.node
#line 94 "codeb.y"
->reg;
#line 3234 "oxout.y"
}
				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 13:
	switch(yyyi)	{
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

if (yyyCond(0) != yyyPass) {
#line 100 "codeb.y"
 isVisible(
#line 3271 "oxout.y"
yyyTSTn->yyyAttrbs.yyyAttrb5.in
#line 100 "codeb.y"
,
#line 3275 "oxout.y"
yyyTSTn->cL[0]->yyyAttrbs.yyyAttrb1.name
#line 100 "codeb.y"
, FALSE);
#line 3279 "oxout.y"
}
				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;yyySetCond(0)

				case 1:

if (yyyCond(0) != yyyPass) {
yyyTSTn->yyyAttrbs.yyyAttrb5.node
#line 103 "codeb.y"
->reg = getRegByNr(getNrDefVar(
#line 3295 "oxout.y"
yyyTSTn->yyyAttrbs.yyyAttrb5.in
#line 103 "codeb.y"
));
#line 3299 "oxout.y"
yyyTSTn->cL[2]->yyyAttrbs.yyyAttrb4.node
#line 103 "codeb.y"
->reg =
#line 3303 "oxout.y"
yyyTSTn->yyyAttrbs.yyyAttrb5.node
#line 103 "codeb.y"
->reg;
#line 3307 "oxout.y"
}
				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 14:
	switch(yyyi)	{
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

if (yyyCond(0) != yyyPass) {
#line 110 "codeb.y"
 overlaps(
#line 3344 "oxout.y"
yyyTSTn->yyyAttrbs.yyyAttrb7.in
#line 110 "codeb.y"
,
#line 3348 "oxout.y"
yyyTSTn->cL[0]->yyyAttrbs.yyyAttrb1.name
#line 110 "codeb.y"
,TRUE);
#line 3352 "oxout.y"
}
				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;yyySetCond(0)

				case 1:

if (yyyCond(0) != yyyPass) {
yyyTSTn->cL[3]->yyyAttrbs.yyyAttrb7.node
#line 109 "codeb.y"
->name =
#line 3377 "oxout.y"
yyyTSTn->cL[0]->yyyAttrbs.yyyAttrb1.name
#line 109 "codeb.y"
;
#line 3381 "oxout.y"
}
				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
if (
#line 111 "codeb.y"
(1)
#line 3393 "oxout.y"
) yyySetCond(1)

				case 1:

if (yyyCond(0) != yyyPass) {
}
if (yyyCond(1) != yyyPass) {
#line 111 "codeb.y"
 printf("cond_%s_start:\n",
#line 3403 "oxout.y"
yyyTSTn->cL[0]->yyyAttrbs.yyyAttrb1.name
#line 111 "codeb.y"
);
#line 3407 "oxout.y"
}
if (yyyCond(2) != yyyPass) {
#line 112 "codeb.y"
 printf("cond_%s_end:\n",
#line 3412 "oxout.y"
yyyTSTn->cL[0]->yyyAttrbs.yyyAttrb1.name
#line 112 "codeb.y"
);
#line 3416 "oxout.y"
}
				break;
					}
		break;
			}

break;
case 15:
	switch(yyyi)	{
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;yyySetCond(0)

				case 1:

if (yyyCond(0) != yyyPass) {
#line 117 "codeb.y"
 ifCount++;
#line 3454 "oxout.y"
yyyTSTn->cL[1]->yyyAttrbs.yyyAttrb7.node
#line 117 "codeb.y"
->name = longToStr(ifCount);
#line 3458 "oxout.y"
}
				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
if (
#line 118 "codeb.y"
(1)
#line 3470 "oxout.y"
) yyySetCond(1)

				case 1:

if (yyyCond(0) != yyyPass) {
}
if (yyyCond(1) != yyyPass) {
#line 118 "codeb.y"
 printf("cond_%s_start:\n",
#line 3480 "oxout.y"
yyyTSTn->cL[1]->yyyAttrbs.yyyAttrb7.node
#line 118 "codeb.y"
->name);
#line 3484 "oxout.y"
}
if (yyyCond(2) != yyyPass) {
#line 119 "codeb.y"
 printf("cond_%s_end:\n",
#line 3489 "oxout.y"
yyyTSTn->cL[1]->yyyAttrbs.yyyAttrb7.node
#line 119 "codeb.y"
->name);
#line 3493 "oxout.y"
}
				break;
					}
		break;
			}

break;
case 16:
	switch(yyyi)	{
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 17:
	switch(yyyi)	{
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;yyySetCond(0)

				case 1:

if (yyyCond(0) != yyyPass) {
yyyTSTn->cL[2]->yyyAttrbs.yyyAttrb7.node
#line 132 "codeb.y"
->name =
#line 3573 "oxout.y"
yyyTSTn->yyyAttrbs.yyyAttrb7.node
#line 132 "codeb.y"
->name;
#line 3577 "oxout.y"
yyyTSTn->cL[0]->yyyAttrbs.yyyAttrb7.node
#line 132 "codeb.y"
->name =
#line 3581 "oxout.y"
yyyTSTn->yyyAttrbs.yyyAttrb7.node
#line 132 "codeb.y"
->name;
#line 3585 "oxout.y"
}
				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
if (
#line 133 "codeb.y"
(1)
#line 3597 "oxout.y"
) yyySetCond(1)

				case 1:

if (yyyCond(0) != yyyPass) {
}
if (yyyCond(1) != yyyPass) {
#line 133 "codeb.y"
 burm_label(
#line 3607 "oxout.y"
yyyTSTn->cL[0]->yyyAttrbs.yyyAttrb7.node
#line 133 "codeb.y"
); burm_reduce(
#line 3611 "oxout.y"
yyyTSTn->cL[0]->yyyAttrbs.yyyAttrb7.node
#line 133 "codeb.y"
,1);
#line 3615 "oxout.y"
}
				break;
					}
		break;
			}

break;
case 18:
	switch(yyyi)	{
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;yyySetCond(0)

				case 1:

if (yyyCond(0) != yyyPass) {
#line 144 "codeb.y"
 if(
#line 3644 "oxout.y"
yyyTSTn->cL[0]->yyyAttrbs.yyyAttrb4.node
#line 144 "codeb.y"
->operator != OP_Blank)
#line 3648 "oxout.y"
yyyTSTn->cL[0]->yyyAttrbs.yyyAttrb4.node
#line 144 "codeb.y"
->reg = getRegByNr(getNrDefVar(
#line 3652 "oxout.y"
yyyTSTn->yyyAttrbs.yyyAttrb7.in
#line 144 "codeb.y"
));
#line 3656 "oxout.y"
}
				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;yyySetCond(0)

				case 1:

if (yyyCond(0) != yyyPass) {
yyyTSTn->yyyAttrbs.yyyAttrb7.node
#line 143 "codeb.y"
->parameter = ++guardCount;
#line 3672 "oxout.y"
}
				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

if (yyyCond(0) != yyyPass) {
#line 145 "codeb.y"
 guardJmpPrint(
#line 3686 "oxout.y"
yyyTSTn->cL[3]->yyyAttrbs.yyyAttrb9.isCont
#line 145 "codeb.y"
,
#line 3690 "oxout.y"
yyyTSTn->cL[4]->yyyAttrbs.yyyAttrb4.node
#line 145 "codeb.y"
->name,
#line 3694 "oxout.y"
yyyTSTn->yyyAttrbs.yyyAttrb7.node
#line 145 "codeb.y"
->name);
#line 3698 "oxout.y"
}
if (yyyCond(1) != yyyPass) {
#line 146 "codeb.y"
 printf("guard_%d:\n",
#line 3703 "oxout.y"
yyyTSTn->yyyAttrbs.yyyAttrb7.node
#line 146 "codeb.y"
->parameter);
#line 3707 "oxout.y"
}
				break;
					}
		break;
			}

break;
case 19:
	switch(yyyi)	{
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 20:
	switch(yyyi)	{
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 21:
	switch(yyyi)	{
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 22:
	switch(yyyi)	{
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

if (yyyCond(0) != yyyPass) {
#line 159 "codeb.y"
 isVisible(
#line 3849 "oxout.y"
yyyTSTn->yyyAttrbs.yyyAttrb4.ids
#line 159 "codeb.y"
,
#line 3853 "oxout.y"
yyyTSTn->cL[0]->yyyAttrbs.yyyAttrb1.name
#line 159 "codeb.y"
, TRUE);
#line 3857 "oxout.y"
}
				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 23:
	switch(yyyi)	{
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 24:
	switch(yyyi)	{
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 25:
	switch(yyyi)	{
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;yyySetCond(0)

				case 1:

if (yyyCond(0) != yyyPass) {
yyyTSTn->cL[0]->yyyAttrbs.yyyAttrb4.node
#line 170 "codeb.y"
->reg =
#line 3996 "oxout.y"
yyyTSTn->yyyAttrbs.yyyAttrb4.node
#line 170 "codeb.y"
->reg;
#line 4000 "oxout.y"
}
				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 26:
	switch(yyyi)	{
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;yyySetCond(0)

				case 1:

if (yyyCond(0) != yyyPass) {
yyyTSTn->cL[0]->yyyAttrbs.yyyAttrb4.node
#line 172 "codeb.y"
->reg =
#line 4048 "oxout.y"
yyyTSTn->yyyAttrbs.yyyAttrb4.node
#line 172 "codeb.y"
->reg;
#line 4052 "oxout.y"
}
				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 27:
	switch(yyyi)	{
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;yyySetCond(0)

				case 1:

if (yyyCond(0) != yyyPass) {
yyyTSTn->cL[0]->yyyAttrbs.yyyAttrb4.node
#line 174 "codeb.y"
->reg =
#line 4100 "oxout.y"
yyyTSTn->yyyAttrbs.yyyAttrb4.node
#line 174 "codeb.y"
->reg;
#line 4104 "oxout.y"
}
				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 28:
	switch(yyyi)	{
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;yyySetCond(0)

				case 1:

if (yyyCond(0) != yyyPass) {
yyyTSTn->cL[0]->yyyAttrbs.yyyAttrb4.node
#line 176 "codeb.y"
->reg =
#line 4152 "oxout.y"
yyyTSTn->yyyAttrbs.yyyAttrb4.node
#line 176 "codeb.y"
->reg;
#line 4156 "oxout.y"
}
				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 29:
	switch(yyyi)	{
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;yyySetCond(0)

				case 1:

if (yyyCond(0) != yyyPass) {
yyyTSTn->cL[0]->yyyAttrbs.yyyAttrb4.node
#line 178 "codeb.y"
->reg =
#line 4204 "oxout.y"
yyyTSTn->yyyAttrbs.yyyAttrb4.node
#line 178 "codeb.y"
->reg;
#line 4208 "oxout.y"
}
				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 30:
	switch(yyyi)	{
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;yyySetCond(0)

				case 1:

if (yyyCond(0) != yyyPass) {
yyyTSTn->cL[0]->yyyAttrbs.yyyAttrb4.node
#line 181 "codeb.y"
->reg =
#line 4256 "oxout.y"
yyyTSTn->yyyAttrbs.yyyAttrb4.node
#line 181 "codeb.y"
->reg;
#line 4260 "oxout.y"
yyyTSTn->cL[2]->yyyAttrbs.yyyAttrb4.node
#line 181 "codeb.y"
->reg = nextRegister(
#line 4264 "oxout.y"
yyyTSTn->yyyAttrbs.yyyAttrb4.node
#line 181 "codeb.y"
->reg);
#line 4268 "oxout.y"
}
				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 31:
	switch(yyyi)	{
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;yyySetCond(0)

				case 1:

if (yyyCond(0) != yyyPass) {
yyyTSTn->cL[0]->yyyAttrbs.yyyAttrb4.node
#line 186 "codeb.y"
->reg =
#line 4316 "oxout.y"
yyyTSTn->yyyAttrbs.yyyAttrb4.node
#line 186 "codeb.y"
->reg;
#line 4320 "oxout.y"
}
				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 32:
	switch(yyyi)	{
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;yyySetCond(0)

				case 1:

if (yyyCond(0) != yyyPass) {
yyyTSTn->cL[1]->yyyAttrbs.yyyAttrb4.node
#line 189 "codeb.y"
->reg =
#line 4368 "oxout.y"
yyyTSTn->yyyAttrbs.yyyAttrb4.node
#line 189 "codeb.y"
->reg;
#line 4372 "oxout.y"
}
				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 33:
	switch(yyyi)	{
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;yyySetCond(0)

				case 1:

if (yyyCond(0) != yyyPass) {
yyyTSTn->cL[1]->yyyAttrbs.yyyAttrb4.node
#line 193 "codeb.y"
->reg =
#line 4420 "oxout.y"
yyyTSTn->yyyAttrbs.yyyAttrb4.node
#line 193 "codeb.y"
->reg;
#line 4424 "oxout.y"
}
				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 34:
	switch(yyyi)	{
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;yyySetCond(0)

				case 1:

if (yyyCond(0) != yyyPass) {
yyyTSTn->cL[1]->yyyAttrbs.yyyAttrb4.node
#line 197 "codeb.y"
->reg =
#line 4472 "oxout.y"
yyyTSTn->yyyAttrbs.yyyAttrb4.node
#line 197 "codeb.y"
->reg;
#line 4476 "oxout.y"
}
				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 35:
	switch(yyyi)	{
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;yyySetCond(0)

				case 1:

if (yyyCond(0) != yyyPass) {
yyyTSTn->cL[1]->yyyAttrbs.yyyAttrb4.node
#line 201 "codeb.y"
->reg =
#line 4524 "oxout.y"
yyyTSTn->yyyAttrbs.yyyAttrb4.node
#line 201 "codeb.y"
->reg;
#line 4528 "oxout.y"
}
				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 36:
	switch(yyyi)	{
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;yyySetCond(0)

				case 1:

if (yyyCond(0) != yyyPass) {
yyyTSTn->cL[0]->yyyAttrbs.yyyAttrb4.node
#line 207 "codeb.y"
->reg =
#line 4576 "oxout.y"
yyyTSTn->yyyAttrbs.yyyAttrb4.node
#line 207 "codeb.y"
->reg;
#line 4580 "oxout.y"
yyyTSTn->cL[2]->yyyAttrbs.yyyAttrb4.node
#line 207 "codeb.y"
->reg = nextRegister(
#line 4584 "oxout.y"
yyyTSTn->yyyAttrbs.yyyAttrb4.node
#line 207 "codeb.y"
->reg);
#line 4588 "oxout.y"
}
				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 37:
	switch(yyyi)	{
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;yyySetCond(0)

				case 1:

if (yyyCond(0) != yyyPass) {
yyyTSTn->cL[0]->yyyAttrbs.yyyAttrb4.node
#line 211 "codeb.y"
->reg =
#line 4636 "oxout.y"
yyyTSTn->yyyAttrbs.yyyAttrb4.node
#line 211 "codeb.y"
->reg;
#line 4640 "oxout.y"
yyyTSTn->cL[2]->yyyAttrbs.yyyAttrb4.node
#line 211 "codeb.y"
->reg = nextRegister(
#line 4644 "oxout.y"
yyyTSTn->yyyAttrbs.yyyAttrb4.node
#line 211 "codeb.y"
->reg);
#line 4648 "oxout.y"
}
				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 38:
	switch(yyyi)	{
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;yyySetCond(0)

				case 1:

if (yyyCond(0) != yyyPass) {
yyyTSTn->cL[0]->yyyAttrbs.yyyAttrb4.node
#line 217 "codeb.y"
->reg =
#line 4696 "oxout.y"
yyyTSTn->yyyAttrbs.yyyAttrb4.node
#line 217 "codeb.y"
->reg;
#line 4700 "oxout.y"
yyyTSTn->cL[2]->yyyAttrbs.yyyAttrb4.node
#line 217 "codeb.y"
->reg = nextRegister(
#line 4704 "oxout.y"
yyyTSTn->yyyAttrbs.yyyAttrb4.node
#line 217 "codeb.y"
->reg);
#line 4708 "oxout.y"
}
				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 39:
	switch(yyyi)	{
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;yyySetCond(0)

				case 1:

if (yyyCond(0) != yyyPass) {
yyyTSTn->cL[0]->yyyAttrbs.yyyAttrb4.node
#line 221 "codeb.y"
->reg =
#line 4756 "oxout.y"
yyyTSTn->yyyAttrbs.yyyAttrb4.node
#line 221 "codeb.y"
->reg;
#line 4760 "oxout.y"
yyyTSTn->cL[2]->yyyAttrbs.yyyAttrb4.node
#line 221 "codeb.y"
->reg = nextRegister(
#line 4764 "oxout.y"
yyyTSTn->yyyAttrbs.yyyAttrb4.node
#line 221 "codeb.y"
->reg);
#line 4768 "oxout.y"
}
				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 40:
	switch(yyyi)	{
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;yyySetCond(0)

				case 1:

if (yyyCond(0) != yyyPass) {
yyyTSTn->cL[0]->yyyAttrbs.yyyAttrb4.node
#line 227 "codeb.y"
->reg =
#line 4816 "oxout.y"
yyyTSTn->yyyAttrbs.yyyAttrb4.node
#line 227 "codeb.y"
->reg;
#line 4820 "oxout.y"
yyyTSTn->cL[2]->yyyAttrbs.yyyAttrb4.node
#line 227 "codeb.y"
->reg = nextRegister(
#line 4824 "oxout.y"
yyyTSTn->yyyAttrbs.yyyAttrb4.node
#line 227 "codeb.y"
->reg);
#line 4828 "oxout.y"
}
				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 41:
	switch(yyyi)	{
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;yyySetCond(0)

				case 1:

if (yyyCond(0) != yyyPass) {
yyyTSTn->cL[0]->yyyAttrbs.yyyAttrb4.node
#line 231 "codeb.y"
->reg =
#line 4876 "oxout.y"
yyyTSTn->yyyAttrbs.yyyAttrb4.node
#line 231 "codeb.y"
->reg;
#line 4880 "oxout.y"
yyyTSTn->cL[2]->yyyAttrbs.yyyAttrb4.node
#line 231 "codeb.y"
->reg = nextRegister(
#line 4884 "oxout.y"
yyyTSTn->yyyAttrbs.yyyAttrb4.node
#line 231 "codeb.y"
->reg);
#line 4888 "oxout.y"
}
				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 42:
	switch(yyyi)	{
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;yyySetCond(0)

				case 1:

if (yyyCond(0) != yyyPass) {
yyyTSTn->cL[0]->yyyAttrbs.yyyAttrb4.node
#line 237 "codeb.y"
->reg =
#line 4936 "oxout.y"
yyyTSTn->yyyAttrbs.yyyAttrb4.node
#line 237 "codeb.y"
->reg;
#line 4940 "oxout.y"
yyyTSTn->cL[2]->yyyAttrbs.yyyAttrb4.node
#line 237 "codeb.y"
->reg = nextRegister(
#line 4944 "oxout.y"
yyyTSTn->yyyAttrbs.yyyAttrb4.node
#line 237 "codeb.y"
->reg);
#line 4948 "oxout.y"
}
				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 43:
	switch(yyyi)	{
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;yyySetCond(0)

				case 1:

if (yyyCond(0) != yyyPass) {
yyyTSTn->cL[0]->yyyAttrbs.yyyAttrb4.node
#line 241 "codeb.y"
->reg =
#line 4996 "oxout.y"
yyyTSTn->yyyAttrbs.yyyAttrb4.node
#line 241 "codeb.y"
->reg;
#line 5000 "oxout.y"
yyyTSTn->cL[2]->yyyAttrbs.yyyAttrb4.node
#line 241 "codeb.y"
->reg = nextRegister(
#line 5004 "oxout.y"
yyyTSTn->yyyAttrbs.yyyAttrb4.node
#line 241 "codeb.y"
->reg);
#line 5008 "oxout.y"
}
				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 44:
	switch(yyyi)	{
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 45:
	switch(yyyi)	{
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 46:
	switch(yyyi)	{
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 47:
	switch(yyyi)	{
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 48:
	switch(yyyi)	{
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 49:
	switch(yyyi)	{
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

if (yyyCond(0) != yyyPass) {
#line 258 "codeb.y"
 isVisible(
#line 5250 "oxout.y"
yyyTSTn->yyyAttrbs.yyyAttrb4.ids
#line 258 "codeb.y"
,
#line 5254 "oxout.y"
yyyTSTn->cL[0]->yyyAttrbs.yyyAttrb1.name
#line 258 "codeb.y"
, FALSE);

#line 5259 "oxout.y"
}
				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 50:
	switch(yyyi)	{
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
if (
#line 263 "codeb.y"
(1)
#line 5330 "oxout.y"
) yyySetCond(1)

				case 1:

if (yyyCond(0) != yyyPass) {
}
if (yyyCond(1) != yyyPass) {
#line 263 "codeb.y"
 saveRegsUntil(
#line 5340 "oxout.y"
yyyTSTn->yyyAttrbs.yyyAttrb4.node
#line 263 "codeb.y"
->reg); saveParRegsUntil(getNrPar(
#line 5344 "oxout.y"
yyyTSTn->yyyAttrbs.yyyAttrb4.ids
#line 263 "codeb.y"
));
#line 5348 "oxout.y"
}
if (yyyCond(2) != yyyPass) {
#line 264 "codeb.y"
 call(
#line 5353 "oxout.y"
yyyTSTn->cL[0]->yyyAttrbs.yyyAttrb1.name
#line 264 "codeb.y"
); move("rax",
#line 5357 "oxout.y"
yyyTSTn->yyyAttrbs.yyyAttrb4.node
#line 264 "codeb.y"
->reg); restoreParRegsUntil(getNrPar(
#line 5361 "oxout.y"
yyyTSTn->yyyAttrbs.yyyAttrb4.ids
#line 264 "codeb.y"
)); restoreRegsUntilExcept(
#line 5365 "oxout.y"
yyyTSTn->yyyAttrbs.yyyAttrb4.node
#line 264 "codeb.y"
->reg,"none");
#line 5369 "oxout.y"
}
				break;
					}
		break;
			}

break;
case 51:
	switch(yyyi)	{
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
if (
#line 268 "codeb.y"
(1)
#line 5413 "oxout.y"
) yyySetCond(1)

				case 1:

if (yyyCond(0) != yyyPass) {
}
if (yyyCond(1) != yyyPass) {
#line 268 "codeb.y"
 saveRegsUntil(
#line 5423 "oxout.y"
yyyTSTn->yyyAttrbs.yyyAttrb4.node
#line 268 "codeb.y"
->reg); saveParRegsUntil(getNrPar(
#line 5427 "oxout.y"
yyyTSTn->yyyAttrbs.yyyAttrb4.ids
#line 268 "codeb.y"
));
#line 5431 "oxout.y"
}
if (yyyCond(2) != yyyPass) {
#line 269 "codeb.y"
 burm_label(
#line 5436 "oxout.y"
yyyTSTn->cL[2]->yyyAttrbs.yyyAttrb10.node
#line 269 "codeb.y"
); burm_reduce(
#line 5440 "oxout.y"
yyyTSTn->cL[2]->yyyAttrbs.yyyAttrb10.node
#line 269 "codeb.y"
,1);
#line 5444 "oxout.y"
}
if (yyyCond(3) != yyyPass) {
#line 270 "codeb.y"
 restoreParRegsUntil(
#line 5449 "oxout.y"
yyyTSTn->cL[2]->yyyAttrbs.yyyAttrb10.parCnt
#line 270 "codeb.y"
); call(
#line 5453 "oxout.y"
yyyTSTn->cL[0]->yyyAttrbs.yyyAttrb1.name
#line 270 "codeb.y"
); move("rax",
#line 5457 "oxout.y"
yyyTSTn->yyyAttrbs.yyyAttrb4.node
#line 270 "codeb.y"
->reg); restoreParRegsUntil(getNrPar(
#line 5461 "oxout.y"
yyyTSTn->yyyAttrbs.yyyAttrb4.ids
#line 270 "codeb.y"
)); restoreRegsUntilExcept(
#line 5465 "oxout.y"
yyyTSTn->yyyAttrbs.yyyAttrb4.node
#line 270 "codeb.y"
->reg,"none");

#line 5470 "oxout.y"
}
				break;
					}
		break;
			}

break;
case 52:
	switch(yyyi)	{
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;yyySetCond(0)

				case 1:

if (yyyCond(0) != yyyPass) {
yyyTSTn->cL[1]->yyyAttrbs.yyyAttrb4.node
#line 278 "codeb.y"
->reg = getRegByNr(getNrDefVar(
#line 5500 "oxout.y"
yyyTSTn->yyyAttrbs.yyyAttrb10.ids
#line 278 "codeb.y"
));
#line 5504 "oxout.y"
}
				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 53:
	switch(yyyi)	{
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 54:
	switch(yyyi)	{
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;yyySetCond(0)

				case 1:

if (yyyCond(0) != yyyPass) {
yyyTSTn->cL[1]->yyyAttrbs.yyyAttrb4.node
#line 289 "codeb.y"
->reg = getRegByNr(getNrDefVar(
#line 5593 "oxout.y"
yyyTSTn->yyyAttrbs.yyyAttrb10.ids
#line 289 "codeb.y"
));
#line 5597 "oxout.y"
}
				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 3:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

if (yyyCond(0) != yyyPass) {
#line 290 "codeb.y"
 burm_label(
#line 5620 "oxout.y"
yyyTSTn->yyyAttrbs.yyyAttrb10.node
#line 290 "codeb.y"
); burm_reduce(
#line 5624 "oxout.y"
yyyTSTn->yyyAttrbs.yyyAttrb10.node
#line 290 "codeb.y"
,1);
#line 5628 "oxout.y"
}
				break;
					}
		break;
			}

break;
								} /* switch */
   if (yyyPass) goto yyyTpop; else goto yyyTpush;
  } /* while */
 } /* for */
} /* yyyDoTraversals */

static void yyyExecuteRRsection(yyyGNT *rootNode)  {
   long cycleSum = 0;
   long nNZrc = 0;

   if (!yyyYok) return;
   yyyCheckUnsolvedInstTrav(rootNode,&nNZrc,&cycleSum);
   if (nNZrc)
      {
       fputs("\n\n\n**********\n",stderr);
       fputs("cycle detected in completed parse tree",stderr);
       fputs(" after decoration.\n",stderr);
#if CYCLE_VERBOSE
       fprintf(stderr,
               "number of unsolved attribute instances == %ld.\n",
               nNZrc
              );
       fprintf(stderr,
               "total number of remaining dependencies == %ld.\n",
               cycleSum
              );
       fputs("average number of remaining dependencies\n",stderr);
       fprintf(stderr,"  per unsolved instance == %f.\n",
               ((float)(cycleSum)/(float)(nNZrc))
              );
#endif
       fprintf(stderr,
         "searching parse tree for %ld unsolved instances:\n",
               nNZrc
              );
       yyyUnsolvedInstSearchTravAux(rootNode);
      }
   yyyDoTraversals(rootNode);
} /* yyyExecuteRRsection */



static yyyWAT yyyLRCIL[2] = {0,0,
};



static void yyyDecorate(void)
  {
   while (yyyRSTop >= yyyRSBottom)
      yyySolveAndSignal();
  }



static void yyyGenIntNode(long yyyProdNum, int yyyRHSlength, int yyyNattrbs, __YYYSTRUCT yyyOxAttrbsT *yyval_OxAttrbs, ...)
  {
   yyySIT **yyyOxStackItem = &yyval_OxAttrbs->yyyOxStackItem;
   va_list ap;

   *yyyOxStackItem = (yyySIT *) malloc((size_t)sizeof(yyySIT));
   if (*yyyOxStackItem == (yyySIT *) NULL)
      yyyfatal("malloc error in Ox/Yacc semantic stack space allocation\n");
   (*yyyOxStackItem)->node =
                                (yyyGNT *) malloc((size_t)sizeof(yyyGNT));
   if ((*yyyOxStackItem)->node == (yyyGNT *) NULL)
      yyyfatal("malloc error in Ox Semantic Node space allocation\n");
   (*yyyOxStackItem)->solvedSAlist = yyyLambdaSSAL;
   (*yyyOxStackItem)->node->parent.stackref = *yyyOxStackItem;
   (*yyyOxStackItem)->node->parentIsStack = 1;
   (*yyyOxStackItem)->node->cLlen  = yyyRHSlength;
   (*yyyOxStackItem)->node->cL =
            (yyyGNT **) calloc((size_t)yyyRHSlength, (size_t)sizeof(yyyGNT *));
   if ((*yyyOxStackItem)->node->cL == (yyyGNT **) NULL)
      yyyfatal("malloc error in Ox Child List space allocation\n");
   (*yyyOxStackItem)->node->refCountListLen = yyyNattrbs;
   (*yyyOxStackItem)->node->refCountList =
            (yyyRCT *) calloc((size_t)yyyNattrbs, (size_t)sizeof(yyyRCT));
   if ((*yyyOxStackItem)->node->refCountList == (yyyRCT *) NULL)
      yyyfatal("malloc error in Ox Reference Count List space allocation\n");
   (*yyyOxStackItem)->node->prodNum = (yyyPNT)yyyProdNum;
   va_start(ap, yyval_OxAttrbs);
   for (yyyWST i=1;i<=yyyRHSlength;i++)
     {yyySIT *yaccStDum = va_arg(ap,__YYYSTRUCT yyyOxAttrbsT *)->yyyOxStackItem;
      yyyGNT *gnpDum = (*yyyOxStackItem)->node->cL[i-1] = yaccStDum->node;
      gnpDum->whichSym = i;
      gnpDum->parent.noderef = (*yyyOxStackItem)->node;
      gnpDum->parentIsStack = 0;
     }
   va_end(ap);
  }



static void yyyReclaimSemStkEls(int yyyRHSlength, ...)
  {
   va_list ap;

   va_start(ap, yyyRHSlength);
   for (yyyWST i=1;i<=yyyRHSlength;i++)
     {yyySIT *yaccStDum = va_arg(ap,__YYYSTRUCT yyyOxAttrbsT *)->yyyOxStackItem;
      yaccStDum->node = (yyyGNT *) NULL;
      free(yaccStDum);
     }
   va_end(ap);
  }



#define yyyDECORfREQ 50



static void yyyAdjustINRC(long yyyProdNum, int yyyRHSlength, long startP, long stopP, __YYYSTRUCT yyyOxAttrbsT *yyval_OxAttrbs, ...)
  {
   yyySIT *yyyOxStackItem = yyval_OxAttrbs->yyyOxStackItem;
   yyySSALC *SSALptr,*SSALptrHead,**cPtrPtr;
   long *pL;
   yyyGNT *gnpDum;
   long iTemp;
   long nextP;
   static unsigned short intNodeCount = yyyDECORfREQ;
   va_list ap;

   nextP = startP;
   while (nextP < stopP)
     {if (yyyRCIL[nextP] == yyyR)
         {(yyyOxStackItem->node->refCountList)[yyyRCIL[nextP+1]] = yyyRCIL[nextP+2];
         }
      else
         {(((yyyOxStackItem->node->cL)[yyyRCIL[nextP]])->refCountList)[yyyRCIL[nextP+1]] = yyyRCIL[nextP+2];
         }
      nextP += 3;
     }
   pL = yyyIIEL + yyyIIIEL[yyyProdNum];
   va_start(ap, yyval_OxAttrbs);
   for (yyyWST i=1;i<=yyyRHSlength;i++)
     {yyySIT *yaccStDum = va_arg(ap,__YYYSTRUCT yyyOxAttrbsT *)->yyyOxStackItem;
      pL++;
      SSALptrHead = SSALptr = *(cPtrPtr = &(yaccStDum->solvedSAlist));
      if (SSALptr != yyyLambdaSSAL)
         {*cPtrPtr = yyyLambdaSSAL;
          do
            {
             iTemp = (*pL+SSALptr->attrbNum);
             yyySignalEnts(yyyOxStackItem->node,
                           yyyIEL[iTemp],
                           yyyIEL[iTemp+1]
                          );
             SSALptr = *(cPtrPtr = &(SSALptr->next));
            }
            while (SSALptr != yyyLambdaSSAL);
          *cPtrPtr = yyySSALCfreeList;
          yyySSALCfreeList = SSALptrHead;
         }
     }
   va_end(ap);
   nextP = startP + 2;
   while (nextP < stopP)
     {if (!yyyRCIL[nextP])
         {if (yyyRCIL[nextP-2] == yyyR)
             {yyySSALC **pL = &(yyyOxStackItem->solvedSAlist);
              yyySSALC *iTemp;
              if (yyySSALCfreeList == yyyLambdaSSAL)
                 {iTemp = (yyySSALC *) malloc((size_t)sizeof(yyySSALC));
                  if (iTemp == yyyLambdaSSAL)
                     yyyfatal("malloc error in Ox Stack Solved List space allocation\n");
                 }
              else
                 {iTemp = yyySSALCfreeList;
                  yyySSALCfreeList = yyySSALCfreeList->next;
                 }
              iTemp->next = *pL;
              iTemp->attrbNum = yyyRCIL[nextP-1];
              *pL = iTemp;
             }
          else
             {if ((gnpDum = (yyyOxStackItem->node->cL)[yyyRCIL[nextP-2]])->prodNum != 0)
                 {iTemp = yyyIIEL[yyyIIIEL[gnpDum->prodNum]] + yyyRCIL[nextP-1];
                  yyySignalEnts(gnpDum,
                                yyyIEL[iTemp],
                                yyyIEL[iTemp+1]
                               );
                 }
             }
         }
      nextP += 3;
     }
   if (!--intNodeCount)
      {intNodeCount = yyyDECORfREQ;
       yyyDecorate();
      }
  }



void yyyGenLeaf(int nAttrbs,int typeNum,long startP,long stopP,YYSTYPE *yyylval)
  {yyyRCT *rcPdum;
   yyySIT **yyyOxStackItem = &yyylval->yyyOxAttrbs.yyyOxStackItem;
   (*yyyOxStackItem) = (yyySIT *) malloc((size_t)sizeof(yyySIT));
   if ((*yyyOxStackItem) == (yyySIT *) NULL)
      yyyfatal("malloc error in Ox/Yacc semantic stack space allocation\n");
   (*yyyOxStackItem)->node =
                          (yyyGNT *) malloc((size_t)sizeof(yyyGNT))
                         ;
   if ((*yyyOxStackItem)->node == (yyyGNT *) NULL)
      yyyfatal("malloc error in Ox Semantic Node space allocation\n");
   (*yyyOxStackItem)->solvedSAlist = yyyLambdaSSAL;
   (*yyyOxStackItem)->node->parent.stackref = *yyyOxStackItem;
   (*yyyOxStackItem)->node->parentIsStack = 1;
   (*yyyOxStackItem)->node->cLlen = 0;
   (*yyyOxStackItem)->node->cL = (yyyGNT **) NULL;
   (*yyyOxStackItem)->node->refCountListLen = nAttrbs;
   rcPdum = (*yyyOxStackItem)->node->refCountList =
            (yyyRCT *) calloc((size_t)nAttrbs, (size_t)sizeof(yyyRCT));
   if (rcPdum == (yyyRCT *) NULL)
      yyyfatal("malloc error in Ox Reference Count List space allocation\n");
   while (startP < stopP) rcPdum[yyyLRCIL[startP++]] = 0;
   (*yyyOxStackItem)->node->prodNum = 0;
   (*yyyOxStackItem)->node->whichSym = 0;
  }



void yyyabort(void)
  {yyyYok = 0;
  }



#define yyyLastProdNum 54


static int yyyProdsInd[] = {
   0,
   0,   1,   5,  12,  18,  21,  22,  26,  27,  31,
  34,  36,  41,  45,  51,  55,  56,  60,  66,  67,
  69,  70,  72,  74,  76,  78,  80,  82,  84,  86,
  90,  92,  95,  98, 101, 104, 108, 112, 116, 120,
 124, 128, 132, 136, 138, 140, 142, 146, 148, 150,
 154, 159, 162, 163,
 167,
};


static int yyyProds[][2] = {
{1013,   0},{1013,   0},{1013,   0},{ 165,   0},{ 548,   0},
{ 165,   0},{ 619,   1},{ 396,   0},{ 114,   6},{ 404,   0},
{  63,   3},{ 124,   0},{ 165,   0},{ 619,   1},{ 396,   0},
{ 404,   0},{  63,   3},{ 124,   0},{ 114,   6},{ 655,   6},
{ 619,   1},{ 655,   6},{ 655,   6},{ 655,   6},{ 619,   1},
{ 428,   0},{  63,   3},{  63,   3},{  63,   3},{ 246,   5},
{ 548,   0},{ 246,   5},{ 838,   0},{ 430,   4},{ 246,   5},
{ 898,   7},{ 246,   5},{ 933,   0},{ 619,   1},{ 564,   0},
{ 430,   4},{ 246,   5},{ 619,   1},{ 564,   0},{ 430,   4},
{ 898,   7},{ 619,   1},{ 540,   0},{ 675,   0},{ 810,   7},
{ 124,   0},{ 898,   7},{ 675,   0},{ 810,   7},{ 124,   0},
{ 810,   7},{ 810,   7},{  38,   7},{ 548,   0},{ 810,   7},
{  38,   7},{ 259,   4},{1195,   0},{  63,   3},{ 856,   9},
{ 734,   4},{ 259,   4},{ 259,   4},{ 430,   4},{ 734,   4},
{ 734,   4},{ 619,   1},{ 856,   9},{ 634,   0},{ 856,   9},
{ 646,   0},{ 430,   4},{ 833,   4},{ 430,   4},{ 747,   4},
{ 430,   4},{ 815,   4},{ 430,   4},{ 792,   4},{ 430,   4},
{ 758,   4},{ 430,   4},{ 997,   4},{ 975,   8},{ 997,   4},
{ 833,   4},{ 997,   4},{ 833,   4},{1165,   0},{ 833,   4},
{ 833,   4},{  99,   0},{ 833,   4},{ 833,   4},{ 994,   0},
{ 833,   4},{ 833,   4},{ 606,   0},{ 833,   4},{ 747,   4},
{ 997,   4},{ 420,   0},{ 997,   4},{ 747,   4},{ 747,   4},
{ 420,   0},{ 997,   4},{ 815,   4},{ 997,   4},{ 412,   0},
{ 997,   4},{ 815,   4},{ 815,   4},{ 412,   0},{ 997,   4},
{ 792,   4},{ 997,   4},{ 737,   0},{ 997,   4},{ 792,   4},
{ 792,   4},{ 737,   0},{ 997,   4},{ 758,   4},{ 997,   4},
{ 444,   0},{ 997,   4},{ 758,   4},{ 997,   4},{ 444,   0},
{ 758,   4},{ 975,   8},{ 473,   0},{ 975,   8},{ 564,   0},
{ 975,   8},{ 436,   0},{ 997,   4},{ 396,   0},{ 430,   4},
{ 404,   0},{ 997,   4},{ 765,   2},{ 997,   4},{ 619,   1},
{ 997,   4},{ 619,   1},{ 396,   0},{ 404,   0},{ 997,   4},
{ 619,   1},{ 396,   0},{ 828,  10},{ 404,   0},{ 828,  10},
{ 831,  10},{ 430,   4},{ 831,  10},{ 831,  10},{ 831,  10},
{ 430,   4},{ 428,   0},
};


static int yyySortsInd[] = {
  0,
  0,  1,  2,  4,  6,  9, 11, 14, 15, 16,
 19,
};


static int yyySorts[] = {
  381,  793,  987, 1088,  882,  809,  987, 1088,  809,  146,
  626,  987, 1088,  809,  809,  763,  882,  809,  626,
};



static const char *yyyStringTab[] = {
0,0,0,"regIndex",0,
0,0,0,0,0,
0,0,0,"isVisible",0,
0,0,0,0,0,
0,0,"getNrPar",0,0,
"getNrDefVar","saveRegsUntil",0,0,"saveParRegsUntil",
0,0,0,0,0,
0,0,0,"Guarded",0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,"Stats","restoreParRegsUntil",
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,"HEAD",
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,"Pars",
0,0,0,0,0,
0,0,"y","OP_Expr","END",
0,0,0,0,0,
0,"reg",0,0,0,
0,0,0,0,0,
0,0,0,0,"getRegByNr",
0,"pars",0,0,0,
0,0,0,"OP_Call",0,
0,0,0,0,0,
0,0,0,0,"OP_Head",
"Funcdef",0,0,0,0,
0,0,0,0,0,
0,"move",0,0,0,
0,0,0,0,"OP_Id",
"OP_Assign",0,0,0,0,
0,0,0,0,0,
0,0,0,0,"OP_Eq",
0,0,0,0,"OP_LarOrEq",
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,"NULL",0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,"Stat",0,0,0,
0,0,0,0,0,
0,0,0,0,"MaybeExpr",
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,"OP_Minus",0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,"call",0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
"burm_reduce",0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,"functionStart",
0,0,0,0,0,
0,0,0,0,0,
0,"name",0,0,0,
0,0,0,0,0,
0,"trav","list_t",0,0,
0,"'('",0,0,0,
0,0,0,0,"')'",
0,0,0,0,0,
0,0,"'*'",0,0,
0,"strdup",0,0,0,
"'+'",0,0,0,0,
0,0,0,"','",0,
"Expr",0,0,0,0,
0,"'-'",0,0,0,
0,0,0,0,"'.'",
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,"OP_Or",
0,0,0,0,0,
0,0,0,"OP_Add","restoreRegsUntilExcept",
0,0,"tree_t","EQLARG",0,
0,"printf",0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,"newLeaf",0,"newIDLeaf","newNUMLeaf",
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,"overlaps",
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
"':'",0,0,0,0,
0,0,0,"';'",0,
0,0,0,0,0,
0,0,0,"OP_IsList",0,
0,0,0,0,"'='",
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
"burm_label",0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,"ISLIST",0,0,0,
0,0,0,0,0,
0,0,0,0,"ID",
0,0,0,0,0,
0,"parCnt",0,0,0,
0,0,0,0,"CONTINUE",
0,0,0,0,0,
0,0,0,0,0,
0,"BREAK",0,0,0,
0,0,0,0,0,
"ParsRep",0,0,"codegen",0,
"ifCount",0,0,0,0,
"OP_Mult",0,0,0,0,
0,"TRUE",0,0,0,
"COND",0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,"FALSE",
0,0,"newNode",0,"MaybeID",
0,"addToList","OR",0,"addVarToList",
0,0,0,0,0,
0,0,"PlusTermRep",0,0,
0,0,0,0,0,
"newList",0,0,"DotTermRep",0,
0,0,0,"isCont",0,
"NUM",0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,"guardCount","strtol",0,"guardJmpPrint",
0,0,0,0,0,
0,0,"OrTermRep","value",0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,"node",
"GuardedRep",0,0,0,0,
"MulTermRep",0,"parameter",0,0,
0,0,0,0,0,
0,0,0,"ExprRep",0,
0,"ExprRepRep",0,"ExprStartRep",0,
0,0,0,"RETURN",0,
0,0,0,0,0,
0,0,0,0,0,
"nextRegister",0,0,0,0,
0,"ContinueOrBreak",0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,"ids",0,0,
0,0,0,0,0,
0,0,0,"OP_Return",0,
0,0,0,"Cond",0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,"if",0,
0,0,0,0,0,
0,0,0,"VAR",0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,"OP_Not",
"OP_Dot",0,0,0,0,
"ExprEnd",0,0,0,0,
0,0,0,0,"OP_Guarded",
0,0,"in",0,0,
0,0,0,0,"TAIL",
0,0,"Term",0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,"Program",0,
0,0,0,0,0,
0,0,0,"yytext",0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,"OP_Tail",
0,0,0,0,0,
0,0,0,"out",0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,"OP_Blank",
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,"operator",0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
"NOT",0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
"ARROW",0,0,0,0,
0,0,0,0,0,
"mergeLists",0,0,0,0,
0,0,0,0,0,
0,0,0,0,"longToStr",
0,0,0,0,0,
0,"getParIndex","getRegIndex",0,0,
0,
};



#define yyySizeofProd(num) (yyyProdsInd[(num)+1] - yyyProdsInd[(num)])

#define yyyGSoccurStr(prodNum,symPos) \
   (yyyStringTab[yyyProds[yyyProdsInd[(prodNum)] + (symPos)][0]])

#define yyySizeofSort(num) (yyySortsInd[(num)+1] - yyySortsInd[(num)])

#define yyySortOf(prodNum,symPos) \
  (yyyProds[yyyProdsInd[(prodNum)] + (symPos)][1])

#define yyyAttrbStr(prodNum,symPos,attrbNum)                      \
  (yyyStringTab[yyySorts[yyySortsInd[yyySortOf(prodNum,symPos)] + \
                         (attrbNum)                               \
                        ]                                         \
               ]                                                  \
  )



static void yyyShowProd(int i)
  {int nSyms;

   nSyms = yyySizeofProd(i);
   for (int j=0; j<nSyms; j++)
     {
      fprintf(stderr,"%s",yyyGSoccurStr(i,j));
      if (j == 0) fputs(" : ",stderr); else putc(' ',stderr);
     }
   fputs(";\n",stderr);
  }



static void yyyCheckNodeInstancesSolved(yyyGNT *np)
  {int mysort,sortSize,prodNum,symPos,inTerminalNode;
   int nUnsolvedInsts = 0;

   if (np->prodNum != 0)
     {inTerminalNode = 0;
      prodNum = np->prodNum;
      symPos = 0;
     }
   else
     {inTerminalNode = 1;
      prodNum = np->parent.noderef->prodNum;
      symPos = np->whichSym;
     }
   mysort = yyySortOf(prodNum,symPos);
   sortSize = yyySizeofSort(mysort);
   for (int i=0; i<sortSize; i++)
     if ((np->refCountList)[i] != 0) nUnsolvedInsts += 1;
   if (nUnsolvedInsts)
     {fprintf(stderr,
      "\nFound node that has %d unsolved attribute instance(s).\n",
              nUnsolvedInsts
             );
      fprintf(stderr,"Node is labeled \"%s\".\n",
             yyyGSoccurStr(prodNum,symPos));
      if (inTerminalNode)
        {fputs("Node is terminal.  Its parent production is:\n  ",stderr);
         yyyShowProd(prodNum);
        }
      else
        {fputs("Node is nonterminal.  ",stderr);
         if (!(np->parentIsStack))
           {fprintf(stderr,
                    "Node is %dth child in its parent production:\n  ",
                   np->whichSym
                  );
            yyyShowProd(np->parent.noderef->prodNum);
           }
         fputs("Node is on left hand side of this production:\n  ",stderr);
         yyyShowProd(np->prodNum);
        }
      fputs("The following instances are unsolved:\n",stderr);
      for (int i=0; i<sortSize; i++)
        if ((np->refCountList)[i] != 0)
          fprintf(stderr,"     %-16s still has %1d dependencies.\n",
                  yyyAttrbStr(prodNum,symPos,i),(np->refCountList)[i]);
     }
  }



static void yyyCheckUnsolvedInstTrav(yyyGNT *pNode,long *nNZrc,long *cycleSum)
  {yyyGNT **yyyCLpdum;
   yyyRCT *rcp;
   int i;

   /* visit the refCountList of each node in the tree, and sum the non-zero refCounts */
   rcp = pNode->refCountList;
   i = pNode->refCountListLen;
   while (i--)
      if (*rcp++) {*cycleSum += *(rcp - 1); (*nNZrc)++;}
   yyyCLpdum = pNode->cL;
   i = pNode->cLlen;
   while (i--)
     {
      yyyCheckUnsolvedInstTrav(*yyyCLpdum,nNZrc,cycleSum);
      yyyCLpdum++;
     }
  }



static void yyyUnsolvedInstSearchTravAux(yyyGNT *pNode)
  {yyyGNT **yyyCLpdum;
   int i;

   yyyCheckNodeInstancesSolved(pNode);
   yyyCLpdum = pNode->cL;
   i = pNode->cLlen;
   while (i--)
     {
      yyyUnsolvedInstSearchTravAux(*yyyCLpdum);
      yyyCLpdum++;
     }
  }



