/* A Bison parser, made by GNU Bison 3.3.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2019 Free Software Foundation,
   Inc.

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

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.3.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 29 "oxout.y" /* yacc.c:337  */

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
#line 1 "codeb.y" /* yacc.c:337  */

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
#line 69 "oxout.y" /* yacc.c:337  */

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

#line 190 "oxout.y" /* yacc.c:337  */

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

#line 234 "parser.c" /* yacc.c:337  */
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser.h".  */
#ifndef YY_YY_PARSER_H_INCLUDED
# define YY_YY_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    NUM = 258,
    ID = 259,
    ARROW = 260,
    EQLARG = 261,
    COND = 262,
    CONTINUE = 263,
    END = 264,
    RETURN = 265,
    VAR = 266,
    BREAK = 267,
    NOT = 268,
    HEAD = 269,
    TAIL = 270,
    ISLIST = 271,
    OR = 272
  };
#endif
/* Tokens.  */
#define NUM 258
#define ID 259
#define ARROW 260
#define EQLARG 261
#define COND 262
#define CONTINUE 263
#define END 264
#define RETURN 265
#define VAR 266
#define BREAK 267
#define NOT 268
#define HEAD 269
#define TAIL 270
#define ISLIST 271
#define OR 272

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 205 "oxout.y" /* yacc.c:352  */

struct yyyOxAttrbsT {
struct yyyStackItem *yyyOxStackItem;
} yyyOxAttrbs;

#line 317 "parser.c" /* yacc.c:352  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_H_INCLUDED  */

/* Second part of user prologue.  */
#line 211 "oxout.y" /* yacc.c:354  */

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


#line 352 "parser.c" /* yacc.c:354  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   94

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  28
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  24
/* YYNRULES -- Number of rules.  */
#define YYNRULES  56
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  96

#define YYUNDEFTOK  2
#define YYMAXUTOK   272

/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  ((unsigned) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      19,    20,    25,    24,    21,    27,    26,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    23,    18,
       2,    22,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   236,   236,   245,    38,    41,    45,    51,   299,    61,
     328,    67,    76,    83,    89,    97,   106,   114,   434,   127,
     137,   480,   152,   504,   157,   163,   165,   169,   171,   173,
     175,   177,   179,   185,   187,   191,   195,   199,   205,   209,
     215,   219,   225,   229,   235,   239,   245,   247,   249,   253,
     254,   256,   261,   266,   275,   871,   286
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUM", "ID", "ARROW", "EQLARG", "COND",
  "CONTINUE", "END", "RETURN", "VAR", "BREAK", "NOT", "HEAD", "TAIL",
  "ISLIST", "OR", "';'", "'('", "')'", "','", "'='", "':'", "'+'", "'*'",
  "'.'", "'-'", "$accept", "yyyAugNonterm", "Program", "Funcdef", "Pars",
  "ParsRep", "Stats", "Stat", "Cond", "GuardedRep", "Guarded", "MaybeExpr",
  "MaybeID", "ContinueOrBreak", "Expr", "ExprStartRep", "PlusTermRep",
  "MulTermRep", "OrTermRep", "DotTermRep", "ExprEnd", "Term", "ExprRep",
  "ExprRepRep", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,    59,    40,
      41,    44,    61,    58,    43,    42,    46,    45
};
# endif

#define YYPACT_NINF -38

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-38)))

#define YYTABLE_NINF -22

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
     -38,    11,    12,   -38,    -4,    -1,     0,   -38,   -38,    16,
      17,    73,   -38,    21,   -10,    44,   -38,    51,    18,    20,
     -38,    81,   -38,    51,    37,   -38,    26,    51,    51,    51,
      51,    51,    41,    33,    48,   -38,   -38,    38,    36,    52,
     -38,     1,   -38,    56,   -38,   -38,   -38,    44,    53,   -38,
     -38,   -38,   -38,   -38,    59,   -38,    44,   -38,     5,     5,
       5,   -38,     5,   -38,     5,     5,     5,   -38,     5,    51,
      72,   -38,    66,    51,   -38,   -38,    64,   -38,   -38,   -38,
     -38,   -38,   -38,   -38,    61,   -38,   -38,   -38,   -38,    68,
     -38,   -38,    89,   -38,   -38,   -38
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     2,     1,     0,     0,     8,     4,    10,     0,
       0,     0,    10,     7,     0,    18,     6,     0,     0,     0,
      13,     0,     9,     0,     0,    50,    51,     0,     0,     0,
       0,     0,     0,     0,     0,    22,    27,    28,    29,    30,
      31,    33,    12,     0,    11,     5,    15,    18,    55,    34,
      33,    35,    36,    37,     0,    17,    18,    10,     0,     0,
       0,    46,     0,    47,     0,     0,     0,    48,     0,     0,
       0,    52,     0,     0,    49,    19,     0,    39,    41,    43,
      42,    38,    40,    45,    44,    32,    14,    16,    53,    54,
      25,    26,    23,    56,    24,    20
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -38,   -38,   -38,   -38,   -38,   -38,   -11,   -38,   -38,   -37,
     -38,   -38,   -38,   -38,   -17,     2,   -38,   -38,   -38,    28,
     -38,   -25,   -38,   -38
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,     2,     5,     9,    10,    11,    19,    20,    32,
      33,    34,    95,    92,    35,    36,    37,    38,    39,    40,
      68,    41,    72,    73
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      42,    21,    50,    50,    50,    50,    46,    61,    25,    26,
      70,     3,    23,    24,    54,     6,     4,     7,    62,    75,
       8,    13,    43,    63,    31,    64,    65,    66,    67,    49,
      51,    52,    53,    77,    78,    79,    12,    80,    44,    81,
      82,    84,    22,    85,    47,    48,    76,    25,    26,   -21,
      55,    56,    86,    57,    25,    26,    89,    27,    28,    29,
      30,    59,    58,    31,    27,    28,    29,    30,    14,    60,
      31,    15,    90,    71,    17,    18,    91,    14,    69,    74,
      15,    87,    16,    17,    18,    14,    88,    66,    15,    93,
      45,    17,    18,    94,    83
};

static const yytype_uint8 yycheck[] =
{
      17,    12,    27,    28,    29,    30,    23,     6,     3,     4,
      47,     0,    22,    23,    31,    19,     4,    18,    17,    56,
      20,     4,     4,    22,    19,    24,    25,    26,    27,    27,
      28,    29,    30,    58,    59,    60,    20,    62,    18,    64,
      65,    66,    21,    68,     7,    19,    57,     3,     4,     5,
       9,    18,    69,     5,     3,     4,    73,    13,    14,    15,
      16,    25,    24,    19,    13,    14,    15,    16,     4,    17,
      19,     7,     8,    20,    10,    11,    12,     4,    22,    20,
       7,     9,     9,    10,    11,     4,    20,    26,     7,    21,
       9,    10,    11,     4,    66
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    29,    30,     0,     4,    31,    19,    18,    20,    32,
      33,    34,    20,     4,     4,     7,     9,    10,    11,    35,
      36,    34,    21,    22,    23,     3,     4,    13,    14,    15,
      16,    19,    37,    38,    39,    42,    43,    44,    45,    46,
      47,    49,    42,     4,    18,     9,    42,     7,    19,    43,
      49,    43,    43,    43,    42,     9,    18,     5,    24,    25,
      17,     6,    17,    22,    24,    25,    26,    27,    48,    22,
      37,    20,    50,    51,    20,    37,    34,    49,    49,    49,
      49,    49,    49,    47,    49,    49,    42,     9,    20,    42,
       8,    12,    41,    21,     4,    40
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    28,    29,    30,    30,    31,    31,    32,    33,    33,
      34,    34,    35,    35,    35,    35,    36,    36,    37,    37,
      38,    39,    39,    40,    40,    41,    41,    42,    42,    42,
      42,    42,    42,    43,    43,    43,    43,    43,    44,    44,
      45,    45,    46,    46,    47,    47,    48,    48,    48,    49,
      49,    49,    49,    49,    50,    51,    51
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     3,     6,     5,     2,     0,     3,
       0,     3,     2,     1,     4,     3,     5,     3,     0,     3,
       5,     0,     1,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     2,     2,     2,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     1,     1,     1,     3,
       1,     1,     3,     4,     2,     0,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return (YYSIZE_T) (yystpcpy (yyres, yystr) - yyres);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yynewstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  *yyssp = (yytype_int16) yystate;

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = (YYSIZE_T) (yyssp - yyss + 1);

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 237 "oxout.y" /* yacc.c:1652  */
    {
		 yyyDecorate(); yyyExecuteRRsection((yyvsp[0].yyyOxAttrbs).yyyOxStackItem->node);
		}
#line 1493 "parser.c" /* yacc.c:1652  */
    break;

  case 3:
#line 245 "oxout.y" /* yacc.c:1652  */
    {if(yyyYok){
yyyGenIntNode(1,0,0,&(yyval.yyyOxAttrbs));
yyyAdjustINRC(1,0,0,0,&(yyval.yyyOxAttrbs));
yyyReclaimSemStkEls(0);}}
#line 1502 "parser.c" /* yacc.c:1652  */
    break;

  case 4:
#line 253 "oxout.y" /* yacc.c:1652  */
    {if(yyyYok){
yyyGenIntNode(2,3,0,&(yyval.yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyAdjustINRC(2,3,0,0,&(yyval.yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyReclaimSemStkEls(3,&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));}}
#line 1511 "parser.c" /* yacc.c:1652  */
    break;

  case 5:
#line 263 "oxout.y" /* yacc.c:1652  */
    {if(yyyYok){
yyyGenIntNode(3,6,0,&(yyval.yyyOxAttrbs),&(yyvsp[-5].yyyOxAttrbs),&(yyvsp[-4].yyyOxAttrbs),&(yyvsp[-3].yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyAdjustINRC(3,6,0,3,&(yyval.yyyOxAttrbs),&(yyvsp[-5].yyyOxAttrbs),&(yyvsp[-4].yyyOxAttrbs),&(yyvsp[-3].yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyReclaimSemStkEls(6,&(yyvsp[-5].yyyOxAttrbs),&(yyvsp[-4].yyyOxAttrbs),&(yyvsp[-3].yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));}}
#line 1520 "parser.c" /* yacc.c:1652  */
    break;

  case 6:
#line 272 "oxout.y" /* yacc.c:1652  */
    {if(yyyYok){
yyyGenIntNode(4,5,0,&(yyval.yyyOxAttrbs),&(yyvsp[-4].yyyOxAttrbs),&(yyvsp[-3].yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));

(yyval.yyyOxAttrbs).yyyOxStackItem->node->cL[3]->yyyAttrbs.yyyAttrb3.in
#line 46 "codeb.y"
 = newList();
#line 279 "oxout.y"
yyyAdjustINRC(4,5,3,6,&(yyval.yyyOxAttrbs),&(yyvsp[-4].yyyOxAttrbs),&(yyvsp[-3].yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyReclaimSemStkEls(5,&(yyvsp[-4].yyyOxAttrbs),&(yyvsp[-3].yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));}}
#line 1534 "parser.c" /* yacc.c:1652  */
    break;

  case 7:
#line 288 "oxout.y" /* yacc.c:1652  */
    {if(yyyYok){
yyyGenIntNode(5,2,2,&(yyval.yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyAdjustINRC(5,2,6,12,&(yyval.yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyReclaimSemStkEls(2,&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));}}
#line 1543 "parser.c" /* yacc.c:1652  */
    break;

  case 8:
#line 299 "oxout.y" /* yacc.c:1652  */
    {if(yyyYok){
yyyGenIntNode(6,0,2,&(yyval.yyyOxAttrbs));

(yyval.yyyOxAttrbs).yyyOxStackItem->node->yyyAttrbs.yyyAttrb6.pars
#line 58 "codeb.y"
 = newList();

#line 307 "oxout.y"
(yyval.yyyOxAttrbs).yyyOxStackItem->node->yyyAttrbs.yyyAttrb6.parCnt
#line 59 "codeb.y"
 = 0;
#line 311 "oxout.y"
yyyAdjustINRC(6,0,12,18,&(yyval.yyyOxAttrbs));
yyyReclaimSemStkEls(0);}}
#line 1562 "parser.c" /* yacc.c:1652  */
    break;

  case 9:
#line 318 "oxout.y" /* yacc.c:1652  */
    {if(yyyYok){
yyyGenIntNode(7,3,2,&(yyval.yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyAdjustINRC(7,3,18,24,&(yyval.yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyReclaimSemStkEls(3,&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));}}
#line 1571 "parser.c" /* yacc.c:1652  */
    break;

  case 10:
#line 328 "oxout.y" /* yacc.c:1652  */
    {if(yyyYok){
yyyGenIntNode(8,0,2,&(yyval.yyyOxAttrbs));

(yyval.yyyOxAttrbs).yyyOxStackItem->node->yyyAttrbs.yyyAttrb3.out
#line 66 "codeb.y"
 = newList();
#line 335 "oxout.y"
yyyAdjustINRC(8,0,24,27,&(yyval.yyyOxAttrbs));
yyyReclaimSemStkEls(0);}}
#line 1585 "parser.c" /* yacc.c:1652  */
    break;

  case 11:
#line 342 "oxout.y" /* yacc.c:1652  */
    {if(yyyYok){
yyyGenIntNode(9,3,2,&(yyval.yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyAdjustINRC(9,3,27,36,&(yyval.yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyReclaimSemStkEls(3,&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));}}
#line 1594 "parser.c" /* yacc.c:1652  */
    break;

  case 12:
#line 353 "oxout.y" /* yacc.c:1652  */
    {if(yyyYok){
yyyGenIntNode(10,2,3,&(yyval.yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));

(yyval.yyyOxAttrbs).yyyOxStackItem->node->yyyAttrbs.yyyAttrb5.out
#line 79 "codeb.y"
 = newList();
#line 360 "oxout.y"
yyyAdjustINRC(10,2,36,45,&(yyval.yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyReclaimSemStkEls(2,&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));}}
#line 1608 "parser.c" /* yacc.c:1652  */
    break;

  case 13:
#line 367 "oxout.y" /* yacc.c:1652  */
    {if(yyyYok){
yyyGenIntNode(11,1,3,&(yyval.yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));

#line 84 "codeb.y"


#line 374 "oxout.y"
(yyval.yyyOxAttrbs).yyyOxStackItem->node->yyyAttrbs.yyyAttrb5.out
#line 85 "codeb.y"
 = newList();

#line 379 "oxout.y"
(yyval.yyyOxAttrbs).yyyOxStackItem->node->yyyAttrbs.yyyAttrb5.node
#line 87 "codeb.y"
 = newNode(OP_Blank,NULL,NULL);
#line 383 "oxout.y"
yyyAdjustINRC(11,1,45,54,&(yyval.yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyReclaimSemStkEls(1,&(yyvsp[0].yyyOxAttrbs));}}
#line 1631 "parser.c" /* yacc.c:1652  */
    break;

  case 14:
#line 390 "oxout.y" /* yacc.c:1652  */
    {if(yyyYok){
yyyGenIntNode(12,4,3,&(yyval.yyyOxAttrbs),&(yyvsp[-3].yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyAdjustINRC(12,4,54,63,&(yyval.yyyOxAttrbs),&(yyvsp[-3].yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyReclaimSemStkEls(4,&(yyvsp[-3].yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));}}
#line 1640 "parser.c" /* yacc.c:1652  */
    break;

  case 15:
#line 399 "oxout.y" /* yacc.c:1652  */
    {if(yyyYok){
yyyGenIntNode(13,3,3,&(yyval.yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));

(yyval.yyyOxAttrbs).yyyOxStackItem->node->yyyAttrbs.yyyAttrb5.out
#line 101 "codeb.y"
 = newList();
#line 406 "oxout.y"
yyyAdjustINRC(13,3,63,72,&(yyval.yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyReclaimSemStkEls(3,&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));}}
#line 1654 "parser.c" /* yacc.c:1652  */
    break;

  case 16:
#line 414 "oxout.y" /* yacc.c:1652  */
    {if(yyyYok){
yyyGenIntNode(14,5,3,&(yyval.yyyOxAttrbs),&(yyvsp[-4].yyyOxAttrbs),&(yyvsp[-3].yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyAdjustINRC(14,5,72,81,&(yyval.yyyOxAttrbs),&(yyvsp[-4].yyyOxAttrbs),&(yyvsp[-3].yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyReclaimSemStkEls(5,&(yyvsp[-4].yyyOxAttrbs),&(yyvsp[-3].yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));}}
#line 1663 "parser.c" /* yacc.c:1652  */
    break;

  case 17:
#line 423 "oxout.y" /* yacc.c:1652  */
    {if(yyyYok){
yyyGenIntNode(15,3,3,&(yyval.yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyAdjustINRC(15,3,81,90,&(yyval.yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyReclaimSemStkEls(3,&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));}}
#line 1672 "parser.c" /* yacc.c:1652  */
    break;

  case 18:
#line 434 "oxout.y" /* yacc.c:1652  */
    {if(yyyYok){
yyyGenIntNode(16,0,3,&(yyval.yyyOxAttrbs));

(yyval.yyyOxAttrbs).yyyOxStackItem->node->yyyAttrbs.yyyAttrb7.out
#line 124 "codeb.y"
 = newList();

#line 442 "oxout.y"
(yyval.yyyOxAttrbs).yyyOxStackItem->node->yyyAttrbs.yyyAttrb7.node
#line 125 "codeb.y"
 = newNode(OP_Guarded, NULL, NULL);
#line 446 "oxout.y"
yyyAdjustINRC(16,0,90,96,&(yyval.yyyOxAttrbs));
yyyReclaimSemStkEls(0);}}
#line 1691 "parser.c" /* yacc.c:1652  */
    break;

  case 19:
#line 453 "oxout.y" /* yacc.c:1652  */
    {if(yyyYok){
yyyGenIntNode(17,3,3,&(yyval.yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));

(yyval.yyyOxAttrbs).yyyOxStackItem->node->yyyAttrbs.yyyAttrb7.node
#line 131 "codeb.y"
 = newNode(OP_Guarded, NULL, NULL);
#line 460 "oxout.y"
yyyAdjustINRC(17,3,96,108,&(yyval.yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyReclaimSemStkEls(3,&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));}}
#line 1705 "parser.c" /* yacc.c:1652  */
    break;

  case 20:
#line 469 "oxout.y" /* yacc.c:1652  */
    {if(yyyYok){
yyyGenIntNode(18,5,3,&(yyval.yyyOxAttrbs),&(yyvsp[-4].yyyOxAttrbs),&(yyvsp[-3].yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyAdjustINRC(18,5,108,123,&(yyval.yyyOxAttrbs),&(yyvsp[-4].yyyOxAttrbs),&(yyvsp[-3].yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyReclaimSemStkEls(5,&(yyvsp[-4].yyyOxAttrbs),&(yyvsp[-3].yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));}}
#line 1714 "parser.c" /* yacc.c:1652  */
    break;

  case 21:
#line 480 "oxout.y" /* yacc.c:1652  */
    {if(yyyYok){
yyyGenIntNode(19,0,2,&(yyval.yyyOxAttrbs));

(yyval.yyyOxAttrbs).yyyOxStackItem->node->yyyAttrbs.yyyAttrb4.node
#line 151 "codeb.y"
 = newNode(OP_Blank,NULL,NULL);
#line 487 "oxout.y"
yyyAdjustINRC(19,0,123,126,&(yyval.yyyOxAttrbs));
yyyReclaimSemStkEls(0);}}
#line 1728 "parser.c" /* yacc.c:1652  */
    break;

  case 22:
#line 494 "oxout.y" /* yacc.c:1652  */
    {if(yyyYok){
yyyGenIntNode(20,1,2,&(yyval.yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyAdjustINRC(20,1,126,132,&(yyval.yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyReclaimSemStkEls(1,&(yyvsp[0].yyyOxAttrbs));}}
#line 1737 "parser.c" /* yacc.c:1652  */
    break;

  case 23:
#line 504 "oxout.y" /* yacc.c:1652  */
    {if(yyyYok){
yyyGenIntNode(21,0,2,&(yyval.yyyOxAttrbs));

(yyval.yyyOxAttrbs).yyyOxStackItem->node->yyyAttrbs.yyyAttrb4.node
#line 156 "codeb.y"
 = newIDLeaf(OP_Id, NULL, 0, 0);
#line 511 "oxout.y"
yyyAdjustINRC(21,0,132,135,&(yyval.yyyOxAttrbs));
yyyReclaimSemStkEls(0);}}
#line 1751 "parser.c" /* yacc.c:1652  */
    break;

  case 24:
#line 518 "oxout.y" /* yacc.c:1652  */
    {if(yyyYok){
yyyGenIntNode(22,1,2,&(yyval.yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));

(yyval.yyyOxAttrbs).yyyOxStackItem->node->yyyAttrbs.yyyAttrb4.node
#line 158 "codeb.y"
 = newIDLeaf(OP_Id,
#line 525 "oxout.y"
(yyval.yyyOxAttrbs).yyyOxStackItem->node->cL[0]->yyyAttrbs.yyyAttrb1.name
#line 158 "codeb.y"
, 0, 0);
#line 529 "oxout.y"
yyyAdjustINRC(22,1,135,138,&(yyval.yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyReclaimSemStkEls(1,&(yyvsp[0].yyyOxAttrbs));}}
#line 1769 "parser.c" /* yacc.c:1652  */
    break;

  case 25:
#line 538 "oxout.y" /* yacc.c:1652  */
    {if(yyyYok){
yyyGenIntNode(23,1,1,&(yyval.yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));

(yyval.yyyOxAttrbs).yyyOxStackItem->node->yyyAttrbs.yyyAttrb9.isCont
#line 164 "codeb.y"
 = 1;
#line 545 "oxout.y"
yyyAdjustINRC(23,1,138,141,&(yyval.yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyReclaimSemStkEls(1,&(yyvsp[0].yyyOxAttrbs));}}
#line 1783 "parser.c" /* yacc.c:1652  */
    break;

  case 26:
#line 552 "oxout.y" /* yacc.c:1652  */
    {if(yyyYok){
yyyGenIntNode(24,1,1,&(yyval.yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));

(yyval.yyyOxAttrbs).yyyOxStackItem->node->yyyAttrbs.yyyAttrb9.isCont
#line 166 "codeb.y"
 = 0;
#line 559 "oxout.y"
yyyAdjustINRC(24,1,141,144,&(yyval.yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyReclaimSemStkEls(1,&(yyvsp[0].yyyOxAttrbs));}}
#line 1797 "parser.c" /* yacc.c:1652  */
    break;

  case 27:
#line 568 "oxout.y" /* yacc.c:1652  */
    {if(yyyYok){
yyyGenIntNode(25,1,2,&(yyval.yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyAdjustINRC(25,1,144,150,&(yyval.yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyReclaimSemStkEls(1,&(yyvsp[0].yyyOxAttrbs));}}
#line 1806 "parser.c" /* yacc.c:1652  */
    break;

  case 28:
#line 577 "oxout.y" /* yacc.c:1652  */
    {if(yyyYok){
yyyGenIntNode(26,1,2,&(yyval.yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyAdjustINRC(26,1,150,156,&(yyval.yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyReclaimSemStkEls(1,&(yyvsp[0].yyyOxAttrbs));}}
#line 1815 "parser.c" /* yacc.c:1652  */
    break;

  case 29:
#line 586 "oxout.y" /* yacc.c:1652  */
    {if(yyyYok){
yyyGenIntNode(27,1,2,&(yyval.yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyAdjustINRC(27,1,156,162,&(yyval.yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyReclaimSemStkEls(1,&(yyvsp[0].yyyOxAttrbs));}}
#line 1824 "parser.c" /* yacc.c:1652  */
    break;

  case 30:
#line 595 "oxout.y" /* yacc.c:1652  */
    {if(yyyYok){
yyyGenIntNode(28,1,2,&(yyval.yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyAdjustINRC(28,1,162,168,&(yyval.yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyReclaimSemStkEls(1,&(yyvsp[0].yyyOxAttrbs));}}
#line 1833 "parser.c" /* yacc.c:1652  */
    break;

  case 31:
#line 604 "oxout.y" /* yacc.c:1652  */
    {if(yyyYok){
yyyGenIntNode(29,1,2,&(yyval.yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyAdjustINRC(29,1,168,174,&(yyval.yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyReclaimSemStkEls(1,&(yyvsp[0].yyyOxAttrbs));}}
#line 1842 "parser.c" /* yacc.c:1652  */
    break;

  case 32:
#line 613 "oxout.y" /* yacc.c:1652  */
    {if(yyyYok){
yyyGenIntNode(30,3,2,&(yyval.yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyAdjustINRC(30,3,174,183,&(yyval.yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyReclaimSemStkEls(3,&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));}}
#line 1851 "parser.c" /* yacc.c:1652  */
    break;

  case 33:
#line 624 "oxout.y" /* yacc.c:1652  */
    {if(yyyYok){
yyyGenIntNode(31,1,2,&(yyval.yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyAdjustINRC(31,1,183,189,&(yyval.yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyReclaimSemStkEls(1,&(yyvsp[0].yyyOxAttrbs));}}
#line 1860 "parser.c" /* yacc.c:1652  */
    break;

  case 34:
#line 633 "oxout.y" /* yacc.c:1652  */
    {if(yyyYok){
yyyGenIntNode(32,2,2,&(yyval.yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyAdjustINRC(32,2,189,195,&(yyval.yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyReclaimSemStkEls(2,&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));}}
#line 1869 "parser.c" /* yacc.c:1652  */
    break;

  case 35:
#line 642 "oxout.y" /* yacc.c:1652  */
    {if(yyyYok){
yyyGenIntNode(33,2,2,&(yyval.yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyAdjustINRC(33,2,195,201,&(yyval.yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyReclaimSemStkEls(2,&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));}}
#line 1878 "parser.c" /* yacc.c:1652  */
    break;

  case 36:
#line 651 "oxout.y" /* yacc.c:1652  */
    {if(yyyYok){
yyyGenIntNode(34,2,2,&(yyval.yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyAdjustINRC(34,2,201,207,&(yyval.yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyReclaimSemStkEls(2,&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));}}
#line 1887 "parser.c" /* yacc.c:1652  */
    break;

  case 37:
#line 660 "oxout.y" /* yacc.c:1652  */
    {if(yyyYok){
yyyGenIntNode(35,2,2,&(yyval.yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyAdjustINRC(35,2,207,213,&(yyval.yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyReclaimSemStkEls(2,&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));}}
#line 1896 "parser.c" /* yacc.c:1652  */
    break;

  case 38:
#line 671 "oxout.y" /* yacc.c:1652  */
    {if(yyyYok){
yyyGenIntNode(36,3,2,&(yyval.yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyAdjustINRC(36,3,213,222,&(yyval.yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyReclaimSemStkEls(3,&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));}}
#line 1905 "parser.c" /* yacc.c:1652  */
    break;

  case 39:
#line 680 "oxout.y" /* yacc.c:1652  */
    {if(yyyYok){
yyyGenIntNode(37,3,2,&(yyval.yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyAdjustINRC(37,3,222,231,&(yyval.yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyReclaimSemStkEls(3,&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));}}
#line 1914 "parser.c" /* yacc.c:1652  */
    break;

  case 40:
#line 691 "oxout.y" /* yacc.c:1652  */
    {if(yyyYok){
yyyGenIntNode(38,3,2,&(yyval.yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyAdjustINRC(38,3,231,240,&(yyval.yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyReclaimSemStkEls(3,&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));}}
#line 1923 "parser.c" /* yacc.c:1652  */
    break;

  case 41:
#line 700 "oxout.y" /* yacc.c:1652  */
    {if(yyyYok){
yyyGenIntNode(39,3,2,&(yyval.yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyAdjustINRC(39,3,240,249,&(yyval.yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyReclaimSemStkEls(3,&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));}}
#line 1932 "parser.c" /* yacc.c:1652  */
    break;

  case 42:
#line 711 "oxout.y" /* yacc.c:1652  */
    {if(yyyYok){
yyyGenIntNode(40,3,2,&(yyval.yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyAdjustINRC(40,3,249,258,&(yyval.yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyReclaimSemStkEls(3,&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));}}
#line 1941 "parser.c" /* yacc.c:1652  */
    break;

  case 43:
#line 720 "oxout.y" /* yacc.c:1652  */
    {if(yyyYok){
yyyGenIntNode(41,3,2,&(yyval.yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyAdjustINRC(41,3,258,267,&(yyval.yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyReclaimSemStkEls(3,&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));}}
#line 1950 "parser.c" /* yacc.c:1652  */
    break;

  case 44:
#line 731 "oxout.y" /* yacc.c:1652  */
    {if(yyyYok){
yyyGenIntNode(42,3,2,&(yyval.yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyAdjustINRC(42,3,267,276,&(yyval.yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyReclaimSemStkEls(3,&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));}}
#line 1959 "parser.c" /* yacc.c:1652  */
    break;

  case 45:
#line 740 "oxout.y" /* yacc.c:1652  */
    {if(yyyYok){
yyyGenIntNode(43,3,2,&(yyval.yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyAdjustINRC(43,3,276,285,&(yyval.yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyReclaimSemStkEls(3,&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));}}
#line 1968 "parser.c" /* yacc.c:1652  */
    break;

  case 46:
#line 751 "oxout.y" /* yacc.c:1652  */
    {if(yyyYok){
yyyGenIntNode(44,1,1,&(yyval.yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));

(yyval.yyyOxAttrbs).yyyOxStackItem->node->yyyAttrbs.yyyAttrb8.node
#line 246 "codeb.y"
 = newLeaf(OP_LarOrEq);
#line 758 "oxout.y"
yyyAdjustINRC(44,1,285,288,&(yyval.yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyReclaimSemStkEls(1,&(yyvsp[0].yyyOxAttrbs));}}
#line 1982 "parser.c" /* yacc.c:1652  */
    break;

  case 47:
#line 765 "oxout.y" /* yacc.c:1652  */
    {if(yyyYok){
yyyGenIntNode(45,1,1,&(yyval.yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));

(yyval.yyyOxAttrbs).yyyOxStackItem->node->yyyAttrbs.yyyAttrb8.node
#line 248 "codeb.y"
 = newNode(OP_Eq,NULL,NULL);
#line 772 "oxout.y"
yyyAdjustINRC(45,1,288,291,&(yyval.yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyReclaimSemStkEls(1,&(yyvsp[0].yyyOxAttrbs));}}
#line 1996 "parser.c" /* yacc.c:1652  */
    break;

  case 48:
#line 779 "oxout.y" /* yacc.c:1652  */
    {if(yyyYok){
yyyGenIntNode(46,1,1,&(yyval.yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));

(yyval.yyyOxAttrbs).yyyOxStackItem->node->yyyAttrbs.yyyAttrb8.node
#line 250 "codeb.y"
 = newLeaf(OP_Minus);
#line 786 "oxout.y"
yyyAdjustINRC(46,1,291,294,&(yyval.yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyReclaimSemStkEls(1,&(yyvsp[0].yyyOxAttrbs));}}
#line 2010 "parser.c" /* yacc.c:1652  */
    break;

  case 49:
#line 795 "oxout.y" /* yacc.c:1652  */
    {if(yyyYok){
yyyGenIntNode(47,3,2,&(yyval.yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyAdjustINRC(47,3,294,300,&(yyval.yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyReclaimSemStkEls(3,&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));}}
#line 2019 "parser.c" /* yacc.c:1652  */
    break;

  case 50:
#line 803 "oxout.y" /* yacc.c:1652  */
    {if(yyyYok){
yyyGenIntNode(48,1,2,&(yyval.yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));

(yyval.yyyOxAttrbs).yyyOxStackItem->node->yyyAttrbs.yyyAttrb4.node
#line 255 "codeb.y"
 = newNUMLeaf(
#line 810 "oxout.y"
(yyval.yyyOxAttrbs).yyyOxStackItem->node->cL[0]->yyyAttrbs.yyyAttrb2.value
#line 255 "codeb.y"
);
#line 814 "oxout.y"
yyyAdjustINRC(48,1,300,303,&(yyval.yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyReclaimSemStkEls(1,&(yyvsp[0].yyyOxAttrbs));}}
#line 2037 "parser.c" /* yacc.c:1652  */
    break;

  case 51:
#line 821 "oxout.y" /* yacc.c:1652  */
    {if(yyyYok){
yyyGenIntNode(49,1,2,&(yyval.yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyAdjustINRC(49,1,303,306,&(yyval.yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyReclaimSemStkEls(1,&(yyvsp[0].yyyOxAttrbs));}}
#line 2046 "parser.c" /* yacc.c:1652  */
    break;

  case 52:
#line 830 "oxout.y" /* yacc.c:1652  */
    {if(yyyYok){
yyyGenIntNode(50,3,2,&(yyval.yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));

(yyval.yyyOxAttrbs).yyyOxStackItem->node->yyyAttrbs.yyyAttrb4.node
#line 262 "codeb.y"
 = newNode(OP_Call, NULL, NULL);
#line 837 "oxout.y"
yyyAdjustINRC(50,3,306,309,&(yyval.yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyReclaimSemStkEls(3,&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));}}
#line 2060 "parser.c" /* yacc.c:1652  */
    break;

  case 53:
#line 844 "oxout.y" /* yacc.c:1652  */
    {if(yyyYok){
yyyGenIntNode(51,4,2,&(yyval.yyyOxAttrbs),&(yyvsp[-3].yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));

(yyval.yyyOxAttrbs).yyyOxStackItem->node->yyyAttrbs.yyyAttrb4.node
#line 267 "codeb.y"
 = newNode(OP_Call, NULL, NULL);
#line 851 "oxout.y"
yyyAdjustINRC(51,4,309,315,&(yyval.yyyOxAttrbs),&(yyvsp[-3].yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyReclaimSemStkEls(4,&(yyvsp[-3].yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));}}
#line 2074 "parser.c" /* yacc.c:1652  */
    break;

  case 54:
#line 860 "oxout.y" /* yacc.c:1652  */
    {if(yyyYok){
yyyGenIntNode(52,2,3,&(yyval.yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyAdjustINRC(52,2,315,327,&(yyval.yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyReclaimSemStkEls(2,&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));}}
#line 2083 "parser.c" /* yacc.c:1652  */
    break;

  case 55:
#line 871 "oxout.y" /* yacc.c:1652  */
    {if(yyyYok){
yyyGenIntNode(53,0,3,&(yyval.yyyOxAttrbs));

(yyval.yyyOxAttrbs).yyyOxStackItem->node->yyyAttrbs.yyyAttrb10.node
#line 283 "codeb.y"
 = newNode(OP_Blank, NULL, NULL);

#line 879 "oxout.y"
(yyval.yyyOxAttrbs).yyyOxStackItem->node->yyyAttrbs.yyyAttrb10.parCnt
#line 284 "codeb.y"
 = 0;
#line 883 "oxout.y"
yyyAdjustINRC(53,0,327,333,&(yyval.yyyOxAttrbs));
yyyReclaimSemStkEls(0);}}
#line 2102 "parser.c" /* yacc.c:1652  */
    break;

  case 56:
#line 890 "oxout.y" /* yacc.c:1652  */
    {if(yyyYok){
yyyGenIntNode(54,3,3,&(yyval.yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyAdjustINRC(54,3,333,345,&(yyval.yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyReclaimSemStkEls(3,&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));}}
#line 2111 "parser.c" /* yacc.c:1652  */
    break;


#line 2115 "parser.c" /* yacc.c:1652  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 293 "codeb.y" /* yacc.c:1918  */

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



