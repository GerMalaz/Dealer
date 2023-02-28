/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "defs.y"

#include <stdio.h>
#include <string.h>

#ifdef WIN32

// void * _alloca( size_t ) ;
#define alloca _alloca

#endif /* WIN32 */

#include <stdlib.h>
#include "tree.h"
#include "dealer.h"

int   yylex();
int   d2n(char s[4]);
void  yyerror (char*);
void  setshapebit (int, int, int, int, int, int);
void  predeal (int, card);
card  make_card(char,char);
void  clearpointcount(void);
void  clearpointcount_alt(int);
void  pointcount(int,int);
void* mycalloc(int,size_t);
int   make_contract (char, char);

int predeal_compass;     /* global variable for predeal communication */

int pointcount_index;    /* global variable for pointcount communication */

int shapeno ;

struct tree *var_lookup(char *s, int mustbethere) ;
struct action *newaction(int type, struct tree * p1, char * s1, int, struct tree * ) ;
struct tree *newtree (int, struct tree*, struct tree*, int, int);
struct expr  *newexpr(struct tree* tr1, char* ch1, struct expr* ex1);
void bias_deal(int suit, int compass, int length) ;
void predeal_holding(int compass, char *holding) ;
void insertshape(char s[4], int any, int neg_shape) ;
void new_var(char *s, struct tree *t) ;

#line 114 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
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


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    QUERY = 258,                   /* QUERY  */
    COLON = 259,                   /* COLON  */
    OR2 = 260,                     /* OR2  */
    AND2 = 261,                    /* AND2  */
    CMPEQ = 262,                   /* CMPEQ  */
    CMPNE = 263,                   /* CMPNE  */
    CMPLT = 264,                   /* CMPLT  */
    CMPLE = 265,                   /* CMPLE  */
    CMPGT = 266,                   /* CMPGT  */
    CMPGE = 267,                   /* CMPGE  */
    ARPLUS = 268,                  /* ARPLUS  */
    ARMINUS = 269,                 /* ARMINUS  */
    ARTIMES = 270,                 /* ARTIMES  */
    ARDIVIDE = 271,                /* ARDIVIDE  */
    ARMOD = 272,                   /* ARMOD  */
    NOT = 273,                     /* NOT  */
    GENERATE = 274,                /* GENERATE  */
    PRODUCE = 275,                 /* PRODUCE  */
    HCP = 276,                     /* HCP  */
    SHAPE = 277,                   /* SHAPE  */
    ANY = 278,                     /* ANY  */
    EXCEPT = 279,                  /* EXCEPT  */
    CONDITION = 280,               /* CONDITION  */
    ACTION = 281,                  /* ACTION  */
    PRINT = 282,                   /* PRINT  */
    PRINTALL = 283,                /* PRINTALL  */
    PRINTEW = 284,                 /* PRINTEW  */
    PRINTPBN = 285,                /* PRINTPBN  */
    PRINTCOMPACT = 286,            /* PRINTCOMPACT  */
    PRINTONELINE = 287,            /* PRINTONELINE  */
    AVERAGE = 288,                 /* AVERAGE  */
    HASCARD = 289,                 /* HASCARD  */
    FREQUENCY = 290,               /* FREQUENCY  */
    PREDEAL = 291,                 /* PREDEAL  */
    POINTCOUNT = 292,              /* POINTCOUNT  */
    ALTCOUNT = 293,                /* ALTCOUNT  */
    CONTROL = 294,                 /* CONTROL  */
    LOSER = 295,                   /* LOSER  */
    DEALER = 296,                  /* DEALER  */
    QUALITY = 297,                 /* QUALITY  */
    CCCC = 298,                    /* CCCC  */
    TRICKS = 299,                  /* TRICKS  */
    NOTRUMPS = 300,                /* NOTRUMPS  */
    NORTHSOUTH = 301,              /* NORTHSOUTH  */
    EASTWEST = 302,                /* EASTWEST  */
    EVALCONTRACT = 303,            /* EVALCONTRACT  */
    ALL = 304,                     /* ALL  */
    NONE = 305,                    /* NONE  */
    SCORE = 306,                   /* SCORE  */
    IMPS = 307,                    /* IMPS  */
    RND = 308,                     /* RND  */
    PT0 = 309,                     /* PT0  */
    PT1 = 310,                     /* PT1  */
    PT2 = 311,                     /* PT2  */
    PT3 = 312,                     /* PT3  */
    PT4 = 313,                     /* PT4  */
    PT5 = 314,                     /* PT5  */
    PT6 = 315,                     /* PT6  */
    PT7 = 316,                     /* PT7  */
    PT8 = 317,                     /* PT8  */
    PT9 = 318,                     /* PT9  */
    PRINTES = 319,                 /* PRINTES  */
    NUMBER = 320,                  /* NUMBER  */
    HOLDING = 321,                 /* HOLDING  */
    STRING = 322,                  /* STRING  */
    IDENT = 323,                   /* IDENT  */
    COMPASS = 324,                 /* COMPASS  */
    VULNERABLE = 325,              /* VULNERABLE  */
    VULN = 326,                    /* VULN  */
    SUIT = 327,                    /* SUIT  */
    CARD = 328,                    /* CARD  */
    CONTRACT = 329,                /* CONTRACT  */
    DISTR = 330,                   /* DISTR  */
    DISTR_OR_NUMBER = 331          /* DISTR_OR_NUMBER  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define QUERY 258
#define COLON 259
#define OR2 260
#define AND2 261
#define CMPEQ 262
#define CMPNE 263
#define CMPLT 264
#define CMPLE 265
#define CMPGT 266
#define CMPGE 267
#define ARPLUS 268
#define ARMINUS 269
#define ARTIMES 270
#define ARDIVIDE 271
#define ARMOD 272
#define NOT 273
#define GENERATE 274
#define PRODUCE 275
#define HCP 276
#define SHAPE 277
#define ANY 278
#define EXCEPT 279
#define CONDITION 280
#define ACTION 281
#define PRINT 282
#define PRINTALL 283
#define PRINTEW 284
#define PRINTPBN 285
#define PRINTCOMPACT 286
#define PRINTONELINE 287
#define AVERAGE 288
#define HASCARD 289
#define FREQUENCY 290
#define PREDEAL 291
#define POINTCOUNT 292
#define ALTCOUNT 293
#define CONTROL 294
#define LOSER 295
#define DEALER 296
#define QUALITY 297
#define CCCC 298
#define TRICKS 299
#define NOTRUMPS 300
#define NORTHSOUTH 301
#define EASTWEST 302
#define EVALCONTRACT 303
#define ALL 304
#define NONE 305
#define SCORE 306
#define IMPS 307
#define RND 308
#define PT0 309
#define PT1 310
#define PT2 311
#define PT3 312
#define PT4 313
#define PT5 314
#define PT6 315
#define PT7 316
#define PT8 317
#define PT9 318
#define PRINTES 319
#define NUMBER 320
#define HOLDING 321
#define STRING 322
#define IDENT 323
#define COMPASS 324
#define VULNERABLE 325
#define VULN 326
#define SUIT 327
#define CARD 328
#define CONTRACT 329
#define DISTR 330
#define DISTR_OR_NUMBER 331

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 45 "defs.y"

        int     y_int;
        char    *y_str;
        struct tree *y_tree;
        struct action *y_action;
        struct expr   *y_expr;
        char    y_distr[4];

#line 325 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);



/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_QUERY = 3,                      /* QUERY  */
  YYSYMBOL_COLON = 4,                      /* COLON  */
  YYSYMBOL_OR2 = 5,                        /* OR2  */
  YYSYMBOL_AND2 = 6,                       /* AND2  */
  YYSYMBOL_CMPEQ = 7,                      /* CMPEQ  */
  YYSYMBOL_CMPNE = 8,                      /* CMPNE  */
  YYSYMBOL_CMPLT = 9,                      /* CMPLT  */
  YYSYMBOL_CMPLE = 10,                     /* CMPLE  */
  YYSYMBOL_CMPGT = 11,                     /* CMPGT  */
  YYSYMBOL_CMPGE = 12,                     /* CMPGE  */
  YYSYMBOL_ARPLUS = 13,                    /* ARPLUS  */
  YYSYMBOL_ARMINUS = 14,                   /* ARMINUS  */
  YYSYMBOL_ARTIMES = 15,                   /* ARTIMES  */
  YYSYMBOL_ARDIVIDE = 16,                  /* ARDIVIDE  */
  YYSYMBOL_ARMOD = 17,                     /* ARMOD  */
  YYSYMBOL_NOT = 18,                       /* NOT  */
  YYSYMBOL_GENERATE = 19,                  /* GENERATE  */
  YYSYMBOL_PRODUCE = 20,                   /* PRODUCE  */
  YYSYMBOL_HCP = 21,                       /* HCP  */
  YYSYMBOL_SHAPE = 22,                     /* SHAPE  */
  YYSYMBOL_ANY = 23,                       /* ANY  */
  YYSYMBOL_EXCEPT = 24,                    /* EXCEPT  */
  YYSYMBOL_CONDITION = 25,                 /* CONDITION  */
  YYSYMBOL_ACTION = 26,                    /* ACTION  */
  YYSYMBOL_PRINT = 27,                     /* PRINT  */
  YYSYMBOL_PRINTALL = 28,                  /* PRINTALL  */
  YYSYMBOL_PRINTEW = 29,                   /* PRINTEW  */
  YYSYMBOL_PRINTPBN = 30,                  /* PRINTPBN  */
  YYSYMBOL_PRINTCOMPACT = 31,              /* PRINTCOMPACT  */
  YYSYMBOL_PRINTONELINE = 32,              /* PRINTONELINE  */
  YYSYMBOL_AVERAGE = 33,                   /* AVERAGE  */
  YYSYMBOL_HASCARD = 34,                   /* HASCARD  */
  YYSYMBOL_FREQUENCY = 35,                 /* FREQUENCY  */
  YYSYMBOL_PREDEAL = 36,                   /* PREDEAL  */
  YYSYMBOL_POINTCOUNT = 37,                /* POINTCOUNT  */
  YYSYMBOL_ALTCOUNT = 38,                  /* ALTCOUNT  */
  YYSYMBOL_CONTROL = 39,                   /* CONTROL  */
  YYSYMBOL_LOSER = 40,                     /* LOSER  */
  YYSYMBOL_DEALER = 41,                    /* DEALER  */
  YYSYMBOL_QUALITY = 42,                   /* QUALITY  */
  YYSYMBOL_CCCC = 43,                      /* CCCC  */
  YYSYMBOL_TRICKS = 44,                    /* TRICKS  */
  YYSYMBOL_NOTRUMPS = 45,                  /* NOTRUMPS  */
  YYSYMBOL_NORTHSOUTH = 46,                /* NORTHSOUTH  */
  YYSYMBOL_EASTWEST = 47,                  /* EASTWEST  */
  YYSYMBOL_EVALCONTRACT = 48,              /* EVALCONTRACT  */
  YYSYMBOL_ALL = 49,                       /* ALL  */
  YYSYMBOL_NONE = 50,                      /* NONE  */
  YYSYMBOL_SCORE = 51,                     /* SCORE  */
  YYSYMBOL_IMPS = 52,                      /* IMPS  */
  YYSYMBOL_RND = 53,                       /* RND  */
  YYSYMBOL_PT0 = 54,                       /* PT0  */
  YYSYMBOL_PT1 = 55,                       /* PT1  */
  YYSYMBOL_PT2 = 56,                       /* PT2  */
  YYSYMBOL_PT3 = 57,                       /* PT3  */
  YYSYMBOL_PT4 = 58,                       /* PT4  */
  YYSYMBOL_PT5 = 59,                       /* PT5  */
  YYSYMBOL_PT6 = 60,                       /* PT6  */
  YYSYMBOL_PT7 = 61,                       /* PT7  */
  YYSYMBOL_PT8 = 62,                       /* PT8  */
  YYSYMBOL_PT9 = 63,                       /* PT9  */
  YYSYMBOL_PRINTES = 64,                   /* PRINTES  */
  YYSYMBOL_NUMBER = 65,                    /* NUMBER  */
  YYSYMBOL_HOLDING = 66,                   /* HOLDING  */
  YYSYMBOL_STRING = 67,                    /* STRING  */
  YYSYMBOL_IDENT = 68,                     /* IDENT  */
  YYSYMBOL_COMPASS = 69,                   /* COMPASS  */
  YYSYMBOL_VULNERABLE = 70,                /* VULNERABLE  */
  YYSYMBOL_VULN = 71,                      /* VULN  */
  YYSYMBOL_SUIT = 72,                      /* SUIT  */
  YYSYMBOL_CARD = 73,                      /* CARD  */
  YYSYMBOL_CONTRACT = 74,                  /* CONTRACT  */
  YYSYMBOL_DISTR = 75,                     /* DISTR  */
  YYSYMBOL_DISTR_OR_NUMBER = 76,           /* DISTR_OR_NUMBER  */
  YYSYMBOL_77_ = 77,                       /* '='  */
  YYSYMBOL_78_ = 78,                       /* '('  */
  YYSYMBOL_79_ = 79,                       /* ')'  */
  YYSYMBOL_80_ = 80,                       /* ','  */
  YYSYMBOL_YYACCEPT = 81,                  /* $accept  */
  YYSYMBOL_defs = 82,                      /* defs  */
  YYSYMBOL_def = 83,                       /* def  */
  YYSYMBOL_84_1 = 84,                      /* $@1  */
  YYSYMBOL_85_2 = 85,                      /* $@2  */
  YYSYMBOL_predealargs = 86,               /* predealargs  */
  YYSYMBOL_predealarg = 87,                /* predealarg  */
  YYSYMBOL_88_3 = 88,                      /* $@3  */
  YYSYMBOL_holdings = 89,                  /* holdings  */
  YYSYMBOL_pointcountargs = 90,            /* pointcountargs  */
  YYSYMBOL_91_4 = 91,                      /* $@4  */
  YYSYMBOL_compass = 92,                   /* compass  */
  YYSYMBOL_vulnerable = 93,                /* vulnerable  */
  YYSYMBOL_shlprefix = 94,                 /* shlprefix  */
  YYSYMBOL_any = 95,                       /* any  */
  YYSYMBOL_number = 96,                    /* number  */
  YYSYMBOL_shape = 97,                     /* shape  */
  YYSYMBOL_shapelistel = 98,               /* shapelistel  */
  YYSYMBOL_shapelist = 99,                 /* shapelist  */
  YYSYMBOL_expr = 100,                     /* expr  */
  YYSYMBOL_exprlist = 101,                 /* exprlist  */
  YYSYMBOL_actionlist = 102,               /* actionlist  */
  YYSYMBOL_action = 103,                   /* action  */
  YYSYMBOL_optstring = 104,                /* optstring  */
  YYSYMBOL_printlist = 105                 /* printlist  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   558

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  81
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  25
/* YYNRULES -- Number of rules.  */
#define YYNRULES  120
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  292

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   331


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      78,    79,     2,     2,    80,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    77,     2,     2,     2,     2,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   140,   140,   141,   145,   147,   149,   153,   157,   158,
     158,   160,   159,   161,   163,   165,   167,   172,   173,   177,
     177,   178,   182,   184,   189,   191,   190,   198,   203,   208,
     210,   213,   214,   220,   221,   227,   228,   230,   235,   236,
     239,   244,   245,   249,   251,   253,   255,   257,   259,   261,
     263,   265,   267,   269,   271,   273,   275,   277,   279,   281,
     283,   285,   287,   289,   291,   293,   295,   297,   299,   301,
     303,   305,   307,   309,   311,   319,   321,   323,   325,   327,
     329,   331,   333,   335,   337,   339,   341,   343,   345,   347,
     349,   351,   353,   355,   357,   359,   361,   366,   368,   370,
     372,   377,   379,   382,   385,   389,   393,   397,   400,   403,
     406,   409,   412,   415,   418,   420,   424,   435,   436,   440,
     442
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "QUERY", "COLON",
  "OR2", "AND2", "CMPEQ", "CMPNE", "CMPLT", "CMPLE", "CMPGT", "CMPGE",
  "ARPLUS", "ARMINUS", "ARTIMES", "ARDIVIDE", "ARMOD", "NOT", "GENERATE",
  "PRODUCE", "HCP", "SHAPE", "ANY", "EXCEPT", "CONDITION", "ACTION",
  "PRINT", "PRINTALL", "PRINTEW", "PRINTPBN", "PRINTCOMPACT",
  "PRINTONELINE", "AVERAGE", "HASCARD", "FREQUENCY", "PREDEAL",
  "POINTCOUNT", "ALTCOUNT", "CONTROL", "LOSER", "DEALER", "QUALITY",
  "CCCC", "TRICKS", "NOTRUMPS", "NORTHSOUTH", "EASTWEST", "EVALCONTRACT",
  "ALL", "NONE", "SCORE", "IMPS", "RND", "PT0", "PT1", "PT2", "PT3", "PT4",
  "PT5", "PT6", "PT7", "PT8", "PT9", "PRINTES", "NUMBER", "HOLDING",
  "STRING", "IDENT", "COMPASS", "VULNERABLE", "VULN", "SUIT", "CARD",
  "CONTRACT", "DISTR", "DISTR_OR_NUMBER", "'='", "'('", "')'", "','",
  "$accept", "defs", "def", "$@1", "$@2", "predealargs", "predealarg",
  "$@3", "holdings", "pointcountargs", "$@4", "compass", "vulnerable",
  "shlprefix", "any", "number", "shape", "shapelistel", "shapelist",
  "expr", "exprlist", "actionlist", "action", "optstring", "printlist", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-101)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -101,   138,  -101,   -27,   453,    10,    10,   -38,    -7,   453,
     326,     9,   -46,  -101,    10,    14,    31,    -1,    34,    41,
      58,    77,   124,   126,   127,   129,   133,   137,   139,   140,
     141,   142,   143,   159,  -101,    12,    44,   160,  -101,   453,
    -101,  -101,   541,  -101,  -101,  -101,  -101,  -101,    -1,    -1,
     541,   161,  -101,  -101,  -101,   162,   163,   145,   145,  -101,
     164,  -101,   165,   174,  -101,   166,   -46,  -101,    10,  -101,
      -1,    -1,  -101,  -101,    -1,    -1,    -1,   175,   453,   453,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     453,  -101,  -101,    -1,   134,   453,   453,   453,   453,   453,
     453,   453,   453,   453,   453,   453,   453,   453,   453,   -15,
     195,   208,   453,   453,  -101,   453,   200,   349,   326,   199,
     214,   212,  -101,  -101,  -101,    10,   -13,    -6,   216,   233,
     234,   235,   219,   244,     0,     2,     4,    11,    28,    38,
      74,    82,    86,    89,   541,   237,  -101,   118,   257,   278,
      19,    19,    42,    42,    42,    42,    45,    45,  -101,  -101,
    -101,  -101,   241,    -8,  -101,    91,   294,   319,   541,   453,
    -101,   541,   104,  -101,   245,  -101,   239,   238,    10,  -101,
    -101,   248,  -101,   249,   266,  -101,   -18,   286,  -101,  -101,
    -101,   280,  -101,   290,  -101,   292,  -101,   293,  -101,   296,
    -101,   297,  -101,   300,  -101,   303,  -101,   304,  -101,   305,
    -101,   453,   287,  -101,  -101,  -101,   355,  -101,   -10,  -101,
     310,  -101,  -101,     5,  -101,   401,   301,   315,   375,  -101,
     306,   307,   308,   316,   317,   314,   318,   320,   339,   341,
     345,   347,   350,   351,   352,   353,   541,  -101,  -101,   110,
    -101,  -101,  -101,    10,  -101,   541,  -101,  -101,   363,  -101,
    -101,  -101,  -101,  -101,   453,  -101,  -101,  -101,  -101,  -101,
    -101,  -101,  -101,  -101,  -101,  -101,  -101,  -101,   354,  -101,
     334,    10,  -101,   108,  -101,   453,    36,    10,   356,    10,
     358,  -101
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,     1,     0,     0,     0,     0,     0,     0,     0,
     103,     0,     0,     9,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    35,    44,     0,     0,    37,     0,
       3,    43,    14,    36,    44,    95,     4,     5,     0,     0,
      13,     0,   104,   105,   109,   107,   108,   117,   117,   111,
       0,    16,   101,     0,    19,     0,     8,    17,    24,    11,
       0,     0,    27,     6,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    28,     7,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   118,     0,     0,     0,   103,     0,
       0,     0,    18,    10,    25,    24,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    15,     0,    80,     0,    88,    87,
      81,    82,    83,    84,    85,    86,    89,    90,    91,    92,
      93,    46,     0,    31,   119,     0,     0,     0,   114,     0,
      98,    97,     0,   102,     0,    22,    20,     0,    24,    12,
      70,     0,    68,     0,     0,    72,     0,     0,    79,    96,
      48,     0,    50,     0,    52,     0,    54,     0,    56,     0,
      58,     0,    60,     0,    62,     0,    64,     0,    66,     0,
      45,     0,     0,    30,    32,    29,    33,    41,    31,   106,
       0,   112,   113,     0,   110,     0,     0,     0,     0,    26,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    94,    47,    34,     0,
      74,    42,   120,     0,   100,    99,    75,    23,     0,    71,
      69,    73,    77,    76,     0,    49,    51,    53,    55,    57,
      59,    61,    63,    65,    67,    38,    39,    40,     0,    21,
       0,     0,    78,     0,   115,     0,     0,     0,     0,     0,
       0,   116
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -101,  -101,  -101,  -101,  -101,  -101,   367,  -101,  -101,  -100,
    -101,   452,  -101,  -101,  -101,    -5,  -101,   220,  -101,    -2,
    -101,   321,  -101,   384,  -101
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     1,    40,    68,   125,    66,    67,   120,   176,   123,
     178,    73,    92,   216,   249,    41,   277,   217,   218,    42,
     172,    61,    62,   115,   165
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      46,    47,    45,   213,   214,   213,   214,    50,    95,    69,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,    64,     3,   179,    65,   233,   100,   101,
     102,   103,   104,   105,   106,   107,   108,    94,    43,    95,
      48,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   234,   104,   105,   106,   107,   108,
     106,   107,   108,   124,   161,   162,   180,   181,    72,   250,
     215,    49,   215,   182,   183,    34,   132,   133,   229,   190,
     191,   192,   193,   194,   195,   253,    38,    63,   144,    90,
     196,   197,    70,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   198,   199,    71,
     166,   167,    74,   168,    91,   171,   287,   200,   201,    75,
     124,    95,   211,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,    76,    95,     2,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,     3,   202,   203,    77,     4,     5,     6,     7,
       8,   204,   205,     9,    10,   206,   207,   223,   208,   209,
     219,   220,    11,   124,    12,    13,    14,    15,    16,    17,
      18,    19,    20,   224,   225,   275,   276,   284,   285,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    78,    34,    79,    80,    35,    81,    36,   246,
      37,    82,   114,   146,    38,    83,    39,    84,    85,    86,
      87,    88,    95,   255,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,    89,    93,   111,
     112,   113,   117,   119,   121,   118,   131,    95,   278,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   280,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   163,   283,   164,   169,   174,
     175,   177,   288,   286,   290,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   184,    95,   188,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   185,   212,   186,   187,   210,   228,   226,   227,
     230,   231,    95,   189,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,    95,   232,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   236,    51,    52,    53,    54,    55,    56,    57,
     235,    58,   237,     3,   238,   239,   247,     4,   240,   241,
       7,     8,   242,   221,    59,   243,   244,   245,   248,   252,
     256,   257,   258,    11,     0,   259,   260,   261,    15,    16,
      60,    18,    19,    20,   264,   262,   263,   265,   222,   266,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,   282,    34,     3,   170,    44,   267,     4,
     268,    37,     7,     8,   269,    38,   270,    39,   279,   271,
     272,   273,   274,   122,   281,    11,   289,   291,   251,   173,
      15,    16,   116,    18,    19,    20,     0,     0,     0,     0,
       0,     0,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,     0,    34,     3,   254,    44,
       0,     4,     0,    37,     7,     8,     0,    38,     0,    39,
       0,     0,     0,     0,     0,     0,     0,    11,     0,     0,
       0,     0,    15,    16,     0,    18,    19,    20,     0,     0,
     109,   110,     0,     0,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,     0,    34,     0,
       0,    44,   126,   127,     0,    37,   128,   129,   130,    38,
       0,    39,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,     0,     0,    95,   145,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108
};

static const yytype_int16 yycheck[] =
{
       5,     6,     4,    13,    14,    13,    14,     9,     3,    14,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    69,    14,   125,    72,    45,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    39,    65,     3,
      78,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    72,    13,    14,    15,    16,    17,
      15,    16,    17,    68,    79,    80,    79,    80,    69,    79,
      80,    78,    80,    79,    80,    65,    78,    79,   178,    79,
      80,    79,    80,    79,    80,    80,    76,    78,    90,    77,
      79,    80,    78,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,    79,    80,    78,
     112,   113,    78,   115,    70,   117,    80,    79,    80,    78,
     125,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    78,     3,     0,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    14,    79,    80,    78,    18,    19,    20,    21,
      22,    79,    80,    25,    26,    79,    80,   169,    79,    80,
      79,    80,    34,   178,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    79,    80,    75,    76,    79,    80,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    78,    65,    78,    78,    68,    78,    70,   211,
      72,    78,    67,    79,    76,    78,    78,    78,    78,    78,
      78,    78,     3,   225,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    78,    78,    78,
      78,    78,    78,    69,    78,    80,    71,     3,   253,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,   264,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    80,   281,    69,    78,    80,
      66,    69,   287,   285,   289,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    80,     3,    79,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    79,    72,    80,    80,    79,    79,    73,    80,
      72,    72,     3,    79,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,     3,    72,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    72,    27,    28,    29,    30,    31,    32,    33,
      74,    35,    72,    14,    72,    72,    79,    18,    72,    72,
      21,    22,    72,    79,    48,    72,    72,    72,    23,    69,
      79,    66,     7,    34,    -1,    79,    79,    79,    39,    40,
      64,    42,    43,    44,    80,    79,    79,    79,    79,    79,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    79,    65,    14,    67,    68,    79,    18,
      79,    72,    21,    22,    79,    76,    79,    78,    65,    79,
      79,    79,    79,    66,    80,    34,    80,    79,   218,   118,
      39,    40,    58,    42,    43,    44,    -1,    -1,    -1,    -1,
      -1,    -1,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    -1,    65,    14,    67,    68,
      -1,    18,    -1,    72,    21,    22,    -1,    76,    -1,    78,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    -1,
      -1,    -1,    39,    40,    -1,    42,    43,    44,    -1,    -1,
      48,    49,    -1,    -1,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    -1,    65,    -1,
      -1,    68,    70,    71,    -1,    72,    74,    75,    76,    76,
      -1,    78,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    -1,    -1,     3,    93,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    82,     0,    14,    18,    19,    20,    21,    22,    25,
      26,    34,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    65,    68,    70,    72,    76,    78,
      83,    96,   100,    65,    68,   100,    96,    96,    78,    78,
     100,    27,    28,    29,    30,    31,    32,    33,    35,    48,
      64,   102,   103,    78,    69,    72,    86,    87,    84,    96,
      78,    78,    69,    92,    78,    78,    78,    78,    78,    78,
      78,    78,    78,    78,    78,    78,    78,    78,    78,    78,
      77,    70,    93,    78,   100,     3,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    92,
      92,    78,    78,    78,    67,   104,   104,    78,    80,    69,
      88,    78,    87,    90,    96,    85,    92,    92,    92,    92,
      92,    71,   100,   100,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92,   100,    92,    79,   100,   100,   100,
     100,   100,   100,   100,   100,   100,   100,   100,   100,   100,
     100,    79,    80,    80,    69,   105,   100,   100,   100,    78,
      67,   100,   101,   102,    80,    66,    89,    69,    91,    90,
      79,    80,    79,    80,    80,    79,    80,    80,    79,    79,
      79,    80,    79,    80,    79,    80,    79,    80,    79,    80,
      79,    80,    79,    80,    79,    80,    79,    80,    79,    80,
      79,     4,    72,    13,    14,    80,    94,    98,    99,    79,
      80,    79,    79,   100,    79,    80,    73,    80,    79,    90,
      72,    72,    72,    45,    72,    74,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,   100,    79,    23,    95,
      79,    98,    69,    80,    67,   100,    79,    66,     7,    79,
      79,    79,    79,    79,    80,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    75,    76,    97,    96,    65,
     100,    80,    79,    96,    79,    80,   100,    80,    96,    80,
      96,    79
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    81,    82,    82,    83,    83,    83,    83,    83,    84,
      83,    85,    83,    83,    83,    83,    83,    86,    86,    88,
      87,    87,    89,    89,    90,    91,    90,    92,    93,    94,
      94,    94,    94,    95,    95,    96,    96,    96,    97,    97,
      98,    99,    99,   100,   100,   100,   100,   100,   100,   100,
     100,   100,   100,   100,   100,   100,   100,   100,   100,   100,
     100,   100,   100,   100,   100,   100,   100,   100,   100,   100,
     100,   100,   100,   100,   100,   100,   100,   100,   100,   100,
     100,   100,   100,   100,   100,   100,   100,   100,   100,   100,
     100,   100,   100,   100,   100,   100,   100,   101,   101,   101,
     101,   102,   102,   102,   103,   103,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   103,   103,   104,   104,   105,
     105
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     2,     2,     2,     2,     2,     0,
       3,     0,     4,     2,     1,     3,     2,     1,     2,     0,
       3,     6,     1,     3,     0,     0,     3,     1,     1,     1,
       1,     0,     1,     0,     1,     1,     2,     1,     1,     1,
       3,     1,     2,     1,     1,     4,     4,     6,     4,     6,
       4,     6,     4,     6,     4,     6,     4,     6,     4,     6,
       4,     6,     4,     6,     4,     6,     4,     6,     4,     6,
       4,     6,     4,     6,     6,     6,     6,     6,     8,     4,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     5,     2,     4,     1,     1,     3,
       3,     1,     3,     0,     1,     1,     4,     1,     1,     1,
       4,     1,     4,     4,     3,     9,    15,     0,     1,     1,
       3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

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
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
  case 4: /* def: GENERATE number  */
#line 146 "defs.y"
                { extern int maxgenerate; if(!maxgenerate) maxgenerate = (yyvsp[0].y_int); }
#line 1654 "y.tab.c"
    break;

  case 5: /* def: PRODUCE number  */
#line 148 "defs.y"
                { extern int maxproduce; if(!maxproduce) maxproduce = (yyvsp[0].y_int); }
#line 1660 "y.tab.c"
    break;

  case 6: /* def: DEALER compass  */
#line 150 "defs.y"
                { extern int maxdealer;
                  maxdealer = (yyvsp[0].y_int);
                }
#line 1668 "y.tab.c"
    break;

  case 7: /* def: VULNERABLE vulnerable  */
#line 154 "defs.y"
                { extern int maxvuln;
                  maxvuln = (yyvsp[0].y_int);
                }
#line 1676 "y.tab.c"
    break;

  case 9: /* $@1: %empty  */
#line 158 "defs.y"
                     { clearpointcount(); pointcount_index=12;}
#line 1682 "y.tab.c"
    break;

  case 11: /* $@2: %empty  */
#line 160 "defs.y"
                { clearpointcount_alt((yyvsp[0].y_int)); pointcount_index=12;}
#line 1688 "y.tab.c"
    break;

  case 13: /* def: CONDITION expr  */
#line 162 "defs.y"
                { extern struct tree *decisiontree; decisiontree = (yyvsp[0].y_tree); }
#line 1694 "y.tab.c"
    break;

  case 14: /* def: expr  */
#line 164 "defs.y"
                { extern struct tree *decisiontree; decisiontree = (yyvsp[0].y_tree); }
#line 1700 "y.tab.c"
    break;

  case 15: /* def: IDENT '=' expr  */
#line 166 "defs.y"
                { new_var((yyvsp[-2].y_str), (yyvsp[0].y_tree)); }
#line 1706 "y.tab.c"
    break;

  case 16: /* def: ACTION actionlist  */
#line 168 "defs.y"
                { extern struct action *actionlist; actionlist = (yyvsp[0].y_action); }
#line 1712 "y.tab.c"
    break;

  case 19: /* $@3: %empty  */
#line 177 "defs.y"
                   { predeal_compass = (yyvsp[0].y_int);}
#line 1718 "y.tab.c"
    break;

  case 21: /* predealarg: SUIT '(' COMPASS ')' CMPEQ NUMBER  */
#line 178 "defs.y"
                                             {bias_deal((yyvsp[-5].y_int),(yyvsp[-3].y_int),(yyvsp[0].y_int));}
#line 1724 "y.tab.c"
    break;

  case 22: /* holdings: HOLDING  */
#line 183 "defs.y"
                { predeal_holding(predeal_compass, (yyvsp[0].y_str)); }
#line 1730 "y.tab.c"
    break;

  case 23: /* holdings: holdings ',' HOLDING  */
#line 185 "defs.y"
                { predeal_holding(predeal_compass, (yyvsp[0].y_str)); }
#line 1736 "y.tab.c"
    break;

  case 25: /* $@4: %empty  */
#line 191 "defs.y"
                { pointcount(pointcount_index, (yyvsp[0].y_int));
                  pointcount_index--;
                }
#line 1744 "y.tab.c"
    break;

  case 27: /* compass: COMPASS  */
#line 199 "defs.y"
                { extern int use_compass[NSUITS]; use_compass[(yyvsp[0].y_int)] = 1; (yyval.y_int)= (yyvsp[0].y_int); }
#line 1750 "y.tab.c"
    break;

  case 28: /* vulnerable: VULNERABLE  */
#line 204 "defs.y"
                { extern int use_vulnerable[NSUITS]; use_vulnerable[(yyvsp[0].y_int)] = 1; (yyval.y_int)= (yyvsp[0].y_int); }
#line 1756 "y.tab.c"
    break;

  case 29: /* shlprefix: ','  */
#line 209 "defs.y"
                { (yyval.y_int) = 0; }
#line 1762 "y.tab.c"
    break;

  case 30: /* shlprefix: ARPLUS  */
#line 211 "defs.y"
                { (yyval.y_int) = 0; }
#line 1768 "y.tab.c"
    break;

  case 31: /* shlprefix: %empty  */
#line 213 "defs.y"
                { (yyval.y_int) = 0; }
#line 1774 "y.tab.c"
    break;

  case 32: /* shlprefix: ARMINUS  */
#line 215 "defs.y"
                { (yyval.y_int) = 1; }
#line 1780 "y.tab.c"
    break;

  case 33: /* any: %empty  */
#line 220 "defs.y"
                { (yyval.y_int) = 0; }
#line 1786 "y.tab.c"
    break;

  case 34: /* any: ANY  */
#line 222 "defs.y"
                { (yyval.y_int) = 1; }
#line 1792 "y.tab.c"
    break;

  case 36: /* number: ARMINUS NUMBER  */
#line 229 "defs.y"
                { (yyval.y_int) = - (yyvsp[0].y_int); }
#line 1798 "y.tab.c"
    break;

  case 37: /* number: DISTR_OR_NUMBER  */
#line 231 "defs.y"
                { (yyval.y_int) = d2n((yyvsp[0].y_distr)); }
#line 1804 "y.tab.c"
    break;

  case 40: /* shapelistel: shlprefix any shape  */
#line 240 "defs.y"
                { insertshape((yyvsp[0].y_distr), (yyvsp[-1].y_int), (yyvsp[-2].y_int)); }
#line 1810 "y.tab.c"
    break;

  case 43: /* expr: number  */
#line 250 "defs.y"
                { (yyval.y_tree) = newtree(TRT_NUMBER, NIL, NIL, (yyvsp[0].y_int), 0); }
#line 1816 "y.tab.c"
    break;

  case 44: /* expr: IDENT  */
#line 252 "defs.y"
                { (yyval.y_tree) = var_lookup((yyvsp[0].y_str), 1); }
#line 1822 "y.tab.c"
    break;

  case 45: /* expr: SUIT '(' compass ')'  */
#line 254 "defs.y"
                { (yyval.y_tree) = newtree(TRT_LENGTH, NIL, NIL, (yyvsp[-3].y_int), (yyvsp[-1].y_int)); }
#line 1828 "y.tab.c"
    break;

  case 46: /* expr: HCP '(' compass ')'  */
#line 256 "defs.y"
                { (yyval.y_tree) = newtree(TRT_HCPTOTAL, NIL, NIL, (yyvsp[-1].y_int), 0); }
#line 1834 "y.tab.c"
    break;

  case 47: /* expr: HCP '(' compass ',' SUIT ')'  */
#line 258 "defs.y"
                { (yyval.y_tree) = newtree(TRT_HCP, NIL, NIL, (yyvsp[-3].y_int), (yyvsp[-1].y_int)); }
#line 1840 "y.tab.c"
    break;

  case 48: /* expr: PT0 '(' compass ')'  */
#line 260 "defs.y"
                { (yyval.y_tree) = newtree(TRT_PT0TOTAL, NIL, NIL, (yyvsp[-1].y_int), 0); }
#line 1846 "y.tab.c"
    break;

  case 49: /* expr: PT0 '(' compass ',' SUIT ')'  */
#line 262 "defs.y"
                { (yyval.y_tree) = newtree(TRT_PT0, NIL, NIL, (yyvsp[-3].y_int), (yyvsp[-1].y_int)); }
#line 1852 "y.tab.c"
    break;

  case 50: /* expr: PT1 '(' compass ')'  */
#line 264 "defs.y"
                { (yyval.y_tree) = newtree(TRT_PT1TOTAL, NIL, NIL, (yyvsp[-1].y_int), 0); }
#line 1858 "y.tab.c"
    break;

  case 51: /* expr: PT1 '(' compass ',' SUIT ')'  */
#line 266 "defs.y"
                { (yyval.y_tree) = newtree(TRT_PT1, NIL, NIL, (yyvsp[-3].y_int), (yyvsp[-1].y_int)); }
#line 1864 "y.tab.c"
    break;

  case 52: /* expr: PT2 '(' compass ')'  */
#line 268 "defs.y"
                { (yyval.y_tree) = newtree(TRT_PT2TOTAL, NIL, NIL, (yyvsp[-1].y_int), 0); }
#line 1870 "y.tab.c"
    break;

  case 53: /* expr: PT2 '(' compass ',' SUIT ')'  */
#line 270 "defs.y"
                { (yyval.y_tree) = newtree(TRT_PT2, NIL, NIL, (yyvsp[-3].y_int), (yyvsp[-1].y_int)); }
#line 1876 "y.tab.c"
    break;

  case 54: /* expr: PT3 '(' compass ')'  */
#line 272 "defs.y"
                { (yyval.y_tree) = newtree(TRT_PT3TOTAL, NIL, NIL, (yyvsp[-1].y_int), 0); }
#line 1882 "y.tab.c"
    break;

  case 55: /* expr: PT3 '(' compass ',' SUIT ')'  */
#line 274 "defs.y"
                { (yyval.y_tree) = newtree(TRT_PT3, NIL, NIL, (yyvsp[-3].y_int), (yyvsp[-1].y_int)); }
#line 1888 "y.tab.c"
    break;

  case 56: /* expr: PT4 '(' compass ')'  */
#line 276 "defs.y"
                { (yyval.y_tree) = newtree(TRT_PT4TOTAL, NIL, NIL, (yyvsp[-1].y_int), 0); }
#line 1894 "y.tab.c"
    break;

  case 57: /* expr: PT4 '(' compass ',' SUIT ')'  */
#line 278 "defs.y"
                { (yyval.y_tree) = newtree(TRT_PT4, NIL, NIL, (yyvsp[-3].y_int), (yyvsp[-1].y_int)); }
#line 1900 "y.tab.c"
    break;

  case 58: /* expr: PT5 '(' compass ')'  */
#line 280 "defs.y"
                { (yyval.y_tree) = newtree(TRT_PT5TOTAL, NIL, NIL, (yyvsp[-1].y_int), 0); }
#line 1906 "y.tab.c"
    break;

  case 59: /* expr: PT5 '(' compass ',' SUIT ')'  */
#line 282 "defs.y"
                { (yyval.y_tree) = newtree(TRT_PT5, NIL, NIL, (yyvsp[-3].y_int), (yyvsp[-1].y_int)); }
#line 1912 "y.tab.c"
    break;

  case 60: /* expr: PT6 '(' compass ')'  */
#line 284 "defs.y"
                { (yyval.y_tree) = newtree(TRT_PT6TOTAL, NIL, NIL, (yyvsp[-1].y_int), 0); }
#line 1918 "y.tab.c"
    break;

  case 61: /* expr: PT6 '(' compass ',' SUIT ')'  */
#line 286 "defs.y"
                { (yyval.y_tree) = newtree(TRT_PT6, NIL, NIL, (yyvsp[-3].y_int), (yyvsp[-1].y_int)); }
#line 1924 "y.tab.c"
    break;

  case 62: /* expr: PT7 '(' compass ')'  */
#line 288 "defs.y"
                { (yyval.y_tree) = newtree(TRT_PT7TOTAL, NIL, NIL, (yyvsp[-1].y_int), 0); }
#line 1930 "y.tab.c"
    break;

  case 63: /* expr: PT7 '(' compass ',' SUIT ')'  */
#line 290 "defs.y"
                { (yyval.y_tree) = newtree(TRT_PT7, NIL, NIL, (yyvsp[-3].y_int), (yyvsp[-1].y_int)); }
#line 1936 "y.tab.c"
    break;

  case 64: /* expr: PT8 '(' compass ')'  */
#line 292 "defs.y"
                { (yyval.y_tree) = newtree(TRT_PT8TOTAL, NIL, NIL, (yyvsp[-1].y_int), 0); }
#line 1942 "y.tab.c"
    break;

  case 65: /* expr: PT8 '(' compass ',' SUIT ')'  */
#line 294 "defs.y"
                { (yyval.y_tree) = newtree(TRT_PT8, NIL, NIL, (yyvsp[-3].y_int), (yyvsp[-1].y_int)); }
#line 1948 "y.tab.c"
    break;

  case 66: /* expr: PT9 '(' compass ')'  */
#line 296 "defs.y"
                { (yyval.y_tree) = newtree(TRT_PT9TOTAL, NIL, NIL, (yyvsp[-1].y_int), 0); }
#line 1954 "y.tab.c"
    break;

  case 67: /* expr: PT9 '(' compass ',' SUIT ')'  */
#line 298 "defs.y"
                { (yyval.y_tree) = newtree(TRT_PT9, NIL, NIL, (yyvsp[-3].y_int), (yyvsp[-1].y_int)); }
#line 1960 "y.tab.c"
    break;

  case 68: /* expr: LOSER '(' compass ')'  */
#line 300 "defs.y"
                { (yyval.y_tree) = newtree(TRT_LOSERTOTAL, NIL, NIL, (yyvsp[-1].y_int), 0); }
#line 1966 "y.tab.c"
    break;

  case 69: /* expr: LOSER '(' compass ',' SUIT ')'  */
#line 302 "defs.y"
                { (yyval.y_tree) = newtree(TRT_LOSER, NIL, NIL, (yyvsp[-3].y_int), (yyvsp[-1].y_int)); }
#line 1972 "y.tab.c"
    break;

  case 70: /* expr: CONTROL '(' compass ')'  */
#line 304 "defs.y"
                { (yyval.y_tree) = newtree(TRT_CONTROLTOTAL, NIL, NIL, (yyvsp[-1].y_int), 0); }
#line 1978 "y.tab.c"
    break;

  case 71: /* expr: CONTROL '(' compass ',' SUIT ')'  */
#line 306 "defs.y"
                { (yyval.y_tree) = newtree(TRT_CONTROL, NIL, NIL, (yyvsp[-3].y_int), (yyvsp[-1].y_int)); }
#line 1984 "y.tab.c"
    break;

  case 72: /* expr: CCCC '(' compass ')'  */
#line 308 "defs.y"
                { (yyval.y_tree) = newtree(TRT_CCCC, NIL, NIL, (yyvsp[-1].y_int), 0); }
#line 1990 "y.tab.c"
    break;

  case 73: /* expr: QUALITY '(' compass ',' SUIT ')'  */
#line 310 "defs.y"
                { (yyval.y_tree) = newtree(TRT_QUALITY, NIL, NIL, (yyvsp[-3].y_int), (yyvsp[-1].y_int)); }
#line 1996 "y.tab.c"
    break;

  case 74: /* expr: SHAPE '(' compass ',' shapelist ')'  */
#line 312 "defs.y"
                {
		  (yyval.y_tree) = newtree(TRT_SHAPE, NIL, NIL, (yyvsp[-3].y_int), 1<<(shapeno++));
		  if (shapeno >= 32) {
		    yyerror("Too many shapes -- only 32 allowed!\n");
		    YYERROR;
		  }
		}
#line 2008 "y.tab.c"
    break;

  case 75: /* expr: HASCARD '(' COMPASS ',' CARD ')'  */
#line 320 "defs.y"
                { (yyval.y_tree) = newtree(TRT_HASCARD, NIL, NIL, (yyvsp[-3].y_int), (yyvsp[-1].y_int)); }
#line 2014 "y.tab.c"
    break;

  case 76: /* expr: TRICKS '(' compass ',' SUIT ')'  */
#line 322 "defs.y"
                { (yyval.y_tree) = newtree(TRT_TRICKS, NIL, NIL, (yyvsp[-3].y_int), (yyvsp[-1].y_int)); }
#line 2020 "y.tab.c"
    break;

  case 77: /* expr: TRICKS '(' compass ',' NOTRUMPS ')'  */
#line 324 "defs.y"
                { (yyval.y_tree) = newtree(TRT_TRICKS, NIL, NIL, (yyvsp[-3].y_int), 4); }
#line 2026 "y.tab.c"
    break;

  case 78: /* expr: SCORE '(' VULN ',' CONTRACT ',' expr ')'  */
#line 326 "defs.y"
                { (yyval.y_tree) = newtree(TRT_SCORE, (yyvsp[-1].y_tree), NIL, (yyvsp[-5].y_int), (yyvsp[-3].y_int)); }
#line 2032 "y.tab.c"
    break;

  case 79: /* expr: IMPS '(' expr ')'  */
#line 328 "defs.y"
                { (yyval.y_tree) = newtree(TRT_IMPS, (yyvsp[-1].y_tree), NIL, 0, 0); }
#line 2038 "y.tab.c"
    break;

  case 80: /* expr: '(' expr ')'  */
#line 330 "defs.y"
                { (yyval.y_tree) = (yyvsp[-1].y_tree); }
#line 2044 "y.tab.c"
    break;

  case 81: /* expr: expr CMPEQ expr  */
#line 332 "defs.y"
                { (yyval.y_tree) = newtree(TRT_CMPEQ, (yyvsp[-2].y_tree), (yyvsp[0].y_tree), 0, 0); }
#line 2050 "y.tab.c"
    break;

  case 82: /* expr: expr CMPNE expr  */
#line 334 "defs.y"
                { (yyval.y_tree) = newtree(TRT_CMPNE, (yyvsp[-2].y_tree), (yyvsp[0].y_tree), 0, 0); }
#line 2056 "y.tab.c"
    break;

  case 83: /* expr: expr CMPLT expr  */
#line 336 "defs.y"
                { (yyval.y_tree) = newtree(TRT_CMPLT, (yyvsp[-2].y_tree), (yyvsp[0].y_tree), 0, 0); }
#line 2062 "y.tab.c"
    break;

  case 84: /* expr: expr CMPLE expr  */
#line 338 "defs.y"
                { (yyval.y_tree) = newtree(TRT_CMPLE, (yyvsp[-2].y_tree), (yyvsp[0].y_tree), 0, 0); }
#line 2068 "y.tab.c"
    break;

  case 85: /* expr: expr CMPGT expr  */
#line 340 "defs.y"
                { (yyval.y_tree) = newtree(TRT_CMPGT, (yyvsp[-2].y_tree), (yyvsp[0].y_tree), 0, 0); }
#line 2074 "y.tab.c"
    break;

  case 86: /* expr: expr CMPGE expr  */
#line 342 "defs.y"
                { (yyval.y_tree) = newtree(TRT_CMPGE, (yyvsp[-2].y_tree), (yyvsp[0].y_tree), 0, 0); }
#line 2080 "y.tab.c"
    break;

  case 87: /* expr: expr AND2 expr  */
#line 344 "defs.y"
                { (yyval.y_tree) = newtree(TRT_AND2, (yyvsp[-2].y_tree), (yyvsp[0].y_tree), 0, 0); }
#line 2086 "y.tab.c"
    break;

  case 88: /* expr: expr OR2 expr  */
#line 346 "defs.y"
                { (yyval.y_tree) = newtree(TRT_OR2, (yyvsp[-2].y_tree), (yyvsp[0].y_tree), 0, 0); }
#line 2092 "y.tab.c"
    break;

  case 89: /* expr: expr ARPLUS expr  */
#line 348 "defs.y"
                { (yyval.y_tree) = newtree(TRT_ARPLUS, (yyvsp[-2].y_tree), (yyvsp[0].y_tree), 0, 0); }
#line 2098 "y.tab.c"
    break;

  case 90: /* expr: expr ARMINUS expr  */
#line 350 "defs.y"
                { (yyval.y_tree) = newtree(TRT_ARMINUS, (yyvsp[-2].y_tree), (yyvsp[0].y_tree), 0, 0); }
#line 2104 "y.tab.c"
    break;

  case 91: /* expr: expr ARTIMES expr  */
#line 352 "defs.y"
                { (yyval.y_tree) = newtree(TRT_ARTIMES, (yyvsp[-2].y_tree), (yyvsp[0].y_tree), 0, 0); }
#line 2110 "y.tab.c"
    break;

  case 92: /* expr: expr ARDIVIDE expr  */
#line 354 "defs.y"
                { (yyval.y_tree) = newtree(TRT_ARDIVIDE, (yyvsp[-2].y_tree), (yyvsp[0].y_tree), 0, 0); }
#line 2116 "y.tab.c"
    break;

  case 93: /* expr: expr ARMOD expr  */
#line 356 "defs.y"
                { (yyval.y_tree) = newtree(TRT_ARMOD, (yyvsp[-2].y_tree), (yyvsp[0].y_tree), 0, 0); }
#line 2122 "y.tab.c"
    break;

  case 94: /* expr: expr QUERY expr COLON expr  */
#line 358 "defs.y"
                { (yyval.y_tree) = newtree(TRT_IF, (yyvsp[-4].y_tree), newtree(TRT_THENELSE, (yyvsp[-2].y_tree), (yyvsp[0].y_tree), 0, 0), 0, 0); }
#line 2128 "y.tab.c"
    break;

  case 95: /* expr: NOT expr  */
#line 360 "defs.y"
                { (yyval.y_tree) = newtree(TRT_NOT, (yyvsp[0].y_tree), NIL, 0, 0); }
#line 2134 "y.tab.c"
    break;

  case 96: /* expr: RND '(' expr ')'  */
#line 362 "defs.y"
                { (yyval.y_tree) = newtree(TRT_RND, (yyvsp[-1].y_tree), NIL, 0, 0); }
#line 2140 "y.tab.c"
    break;

  case 97: /* exprlist: expr  */
#line 367 "defs.y"
                { (yyval.y_expr) = newexpr((yyvsp[0].y_tree), 0, 0); }
#line 2146 "y.tab.c"
    break;

  case 98: /* exprlist: STRING  */
#line 369 "defs.y"
                { (yyval.y_expr) = newexpr(0, (yyvsp[0].y_str), 0); }
#line 2152 "y.tab.c"
    break;

  case 99: /* exprlist: exprlist ',' expr  */
#line 371 "defs.y"
                { (yyval.y_expr) = newexpr((yyvsp[0].y_tree), 0, (yyvsp[-2].y_expr)); }
#line 2158 "y.tab.c"
    break;

  case 100: /* exprlist: exprlist ',' STRING  */
#line 373 "defs.y"
                { (yyval.y_expr) = newexpr(0, (yyvsp[0].y_str), (yyvsp[-2].y_expr)); }
#line 2164 "y.tab.c"
    break;

  case 101: /* actionlist: action  */
#line 378 "defs.y"
                { (yyval.y_action) = (yyvsp[0].y_action); }
#line 2170 "y.tab.c"
    break;

  case 102: /* actionlist: action ',' actionlist  */
#line 380 "defs.y"
                { (yyval.y_action) = (yyvsp[-2].y_action); (yyval.y_action)->ac_next = (yyvsp[0].y_action); }
#line 2176 "y.tab.c"
    break;

  case 103: /* actionlist: %empty  */
#line 382 "defs.y"
                { (yyval.y_action) = 0; }
#line 2182 "y.tab.c"
    break;

  case 104: /* action: PRINTALL  */
#line 386 "defs.y"
                { will_print++;
                  (yyval.y_action) = newaction(ACT_PRINTALL, NIL, (char *) 0, 0, NIL);
                }
#line 2190 "y.tab.c"
    break;

  case 105: /* action: PRINTEW  */
#line 390 "defs.y"
                { will_print++;
                  (yyval.y_action) = newaction(ACT_PRINTEW, NIL, (char *) 0, 0, NIL);
                }
#line 2198 "y.tab.c"
    break;

  case 106: /* action: PRINT '(' printlist ')'  */
#line 394 "defs.y"
                { will_print++;
                  (yyval.y_action) = newaction(ACT_PRINT, NIL, (char *) 0, (yyvsp[-1].y_int), NIL);
                }
#line 2206 "y.tab.c"
    break;

  case 107: /* action: PRINTCOMPACT  */
#line 398 "defs.y"
                { will_print++;
                  (yyval.y_action)=newaction(ACT_PRINTCOMPACT,NIL,0,0, NIL);}
#line 2213 "y.tab.c"
    break;

  case 108: /* action: PRINTONELINE  */
#line 401 "defs.y"
                { will_print++;
                  (yyval.y_action) = newaction(ACT_PRINTONELINE, NIL, 0, 0, NIL);}
#line 2220 "y.tab.c"
    break;

  case 109: /* action: PRINTPBN  */
#line 404 "defs.y"
                { will_print++;
                  (yyval.y_action)=newaction(ACT_PRINTPBN,NIL,0,0, NIL);}
#line 2227 "y.tab.c"
    break;

  case 110: /* action: PRINTES '(' exprlist ')'  */
#line 407 "defs.y"
                { will_print++;
                  (yyval.y_action)=newaction(ACT_PRINTES,(struct tree*)(yyvsp[-1].y_expr),0,0, NIL); }
#line 2234 "y.tab.c"
    break;

  case 111: /* action: EVALCONTRACT  */
#line 410 "defs.y"
                { will_print++;
                  (yyval.y_action)=newaction(ACT_EVALCONTRACT,0,0,0, NIL);}
#line 2241 "y.tab.c"
    break;

  case 112: /* action: PRINTCOMPACT '(' expr ')'  */
#line 413 "defs.y"
                { will_print++; 
                  (yyval.y_action)=newaction(ACT_PRINTCOMPACT,(yyvsp[-1].y_tree),0,0, NIL);}
#line 2248 "y.tab.c"
    break;

  case 113: /* action: PRINTONELINE '(' expr ')'  */
#line 416 "defs.y"
                { will_print++;
                  (yyval.y_action)=newaction(ACT_PRINTONELINE,(yyvsp[-1].y_tree),0,0, NIL);}
#line 2255 "y.tab.c"
    break;

  case 114: /* action: AVERAGE optstring expr  */
#line 419 "defs.y"
                { (yyval.y_action) = newaction(ACT_AVERAGE, (yyvsp[0].y_tree), (yyvsp[-1].y_str), 0, NIL); }
#line 2261 "y.tab.c"
    break;

  case 115: /* action: FREQUENCY optstring '(' expr ',' number ',' number ')'  */
#line 421 "defs.y"
                { (yyval.y_action) = newaction(ACT_FREQUENCY, (yyvsp[-5].y_tree), (yyvsp[-7].y_str), 0, NIL);
                  (yyval.y_action)->ac_u.acu_f.acuf_lowbnd = (yyvsp[-3].y_int);
                  (yyval.y_action)->ac_u.acu_f.acuf_highbnd = (yyvsp[-1].y_int);}
#line 2269 "y.tab.c"
    break;

  case 116: /* action: FREQUENCY optstring '(' expr ',' number ',' number ',' expr ',' number ',' number ')'  */
#line 425 "defs.y"
                                                                             {
             (yyval.y_action) = newaction(ACT_FREQUENCY2D, (yyvsp[-11].y_tree), (yyvsp[-13].y_str), 0, (yyvsp[-5].y_tree));
             (yyval.y_action)->ac_u.acu_f2d.acuf_lowbnd_expr1 = (yyvsp[-9].y_int);
             (yyval.y_action)->ac_u.acu_f2d.acuf_highbnd_expr1 = (yyvsp[-7].y_int);
             (yyval.y_action)->ac_u.acu_f2d.acuf_lowbnd_expr2 = (yyvsp[-3].y_int);
             (yyval.y_action)->ac_u.acu_f2d.acuf_highbnd_expr2 = (yyvsp[-1].y_int);
                }
#line 2281 "y.tab.c"
    break;

  case 117: /* optstring: %empty  */
#line 435 "defs.y"
                { (yyval.y_str) = (char *) 0; }
#line 2287 "y.tab.c"
    break;

  case 118: /* optstring: STRING  */
#line 437 "defs.y"
                { (yyval.y_str) = (yyvsp[0].y_str); }
#line 2293 "y.tab.c"
    break;

  case 119: /* printlist: COMPASS  */
#line 441 "defs.y"
                { (yyval.y_int) = (1<<(yyvsp[0].y_int)); }
#line 2299 "y.tab.c"
    break;

  case 120: /* printlist: printlist ',' COMPASS  */
#line 443 "defs.y"
                { (yyval.y_int) = (yyvsp[-2].y_int)|(1<<(yyvsp[0].y_int)); }
#line 2305 "y.tab.c"
    break;


#line 2309 "y.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 445 "defs.y"


struct var {
        struct var *v_next;
        char *v_ident;
        struct tree *v_tree;
} *vars=0;

struct tree *var_lookup(char *s, int mustbethere)
{
        struct var *v;

        for(v=vars; v!=0; v = v->v_next)
                if (strcmp(s, v->v_ident)==0)
                        return v->v_tree;
        if (mustbethere)
                yyerror("unknown variable");
        return 0;
}

void new_var(char *s, struct tree *t)
{
        struct var *v;
        /* char *mycalloc(); */

        if (var_lookup(s, 0)!=0)
                yyerror("redefined variable");
        v = (struct var *) mycalloc(1, sizeof(*v));
        v->v_next = vars;
        v->v_ident = s;
        v->v_tree = t;
        vars = v;
}

int lino=1;

void yyerror( char *s) {
        fprintf(stderr, "line %d: %s\n", lino, s);
        exit(-1);
}

int perm[24][4] = {
        {       0,      1,      2,      3       },
        {       0,      1,      3,      2       },
        {       0,      2,      1,      3       },
        {       0,      2,      3,      1       },
        {       0,      3,      1,      2       },
        {       0,      3,      2,      1       },
        {       1,      0,      2,      3       },
        {       1,      0,      3,      2       },
        {       1,      2,      0,      3       },
        {       1,      2,      3,      0       },
        {       1,      3,      0,      2       },
        {       1,      3,      2,      0       },
        {       2,      0,      1,      3       },
        {       2,      0,      3,      1       },
        {       2,      1,      0,      3       },
        {       2,      1,      3,      0       },
        {       2,      3,      0,      1       },
        {       2,      3,      1,      0       },
        {       3,      0,      1,      2       },
        {       3,      0,      2,      1       },
        {       3,      1,      0,      2       },
        {       3,      1,      2,      0       },
        {       3,      2,      0,      1       },
        {       3,      2,      1,      0       },
};

int shapeno;
void insertshape(s, any, neg_shape)
char s[4];
{
        int i,j,p;
        int xcount=0, ccount=0;
        char copy_s[4];

        for (i=0;i<4;i++) {
		if (s[i]=='x')
                        xcount++;
                else
                        ccount += s[i]-'0';
        }
        switch(xcount) {
        case 0:
                if (ccount!=13)
                        yyerror("wrong number of cards in shape");
                for (p=0; p<(any? 24 : 1); p++)
                        setshapebit(s[perm[p][3]]-'0', s[perm[p][2]]-'0',
                                s[perm[p][1]]-'0', s[perm[p][0]]-'0',
                                1<<shapeno, neg_shape);
                break;
        default:
                if (ccount>13)
                        yyerror("too many cards in ambiguous shape");
                bcopy(s, copy_s, 4);
                for(i=0; copy_s[i] != 'x'; i++)
                        ;
                if (xcount==1) {
                        copy_s[i] = 13-ccount+'0';      /* could go above '9' */
                        insertshape(copy_s, any, neg_shape);
                } else {
                        for (j=0; j<=13-ccount; j++) {
                                copy_s[i] = j+'0';
                                insertshape(copy_s, any, neg_shape);
                        }
                }
                break;
        }
}

int d2n(char s[4]) {
        static char copys[5];

        strncpy(copys, s, 4);
        return atoi(copys);
}

struct tree *newtree(type, p1, p2, i1, i2)
int type;
struct tree *p1, *p2;
int i1,i2;
{
        /* char *mycalloc(); */
        struct tree *p;

        p = (struct tree *) mycalloc(1, sizeof(*p));
        p->tr_type = type;
        p->tr_leaf1 = p1;
        p->tr_leaf2 = p2;
        p->tr_int1 = i1;
        p->tr_int2 = i2;
        return p;
}

struct action *newaction(type, p1, s1, i1, p2)
int type;
struct tree *p1;
char *s1;
int i1;
struct tree *p2;
{
        /* char *mycalloc(); */
        struct action *a;

        a = (struct action *) mycalloc(1, sizeof(*a));
        a->ac_type = type;
        a->ac_expr1 = p1;
        a->ac_str1 = s1;
        a->ac_int1 = i1;
        a->ac_expr2 = p2;
        return a;
}

struct expr *newexpr(struct tree* tr1, char* ch1, struct expr* ex1)
{
    struct expr* e;
    e=(struct expr*) mycalloc(1, sizeof(*e));
    e->ex_tr = tr1;
    e->ex_ch = ch1;
    e->next  = 0;
    if(ex1) {
        struct expr* exau = ex1;
            /* AM990705: the while's body had mysteriously disappeared, reinserted it */
            while(exau->next)
              exau = exau->next;
            exau->next = e;
            return ex1;
    } else {
        return e;
    }
}

char *mystrcpy(s)
char *s;
{
        char *cs;
        /* char *mycalloc(); */

        cs = mycalloc(strlen(s)+1, sizeof(char));
        strcpy(cs, s);
        return cs;
}

void predeal_holding(compass, holding)
char *holding;
{
        char suit;

        suit = *holding++;
        while (*holding) {
                predeal(compass, make_card(*holding, suit));
                holding++;
        }
}


#define TRUNCZ(x) ((x)<0?0:(x))

extern int biasdeal[4][4];
extern char*player_name[4];
static char *suit_name[] = {"Club", "Diamond", "Heart", "Spade"};


int bias_len(int compass){
  return
    TRUNCZ(biasdeal[compass][0])+
    TRUNCZ(biasdeal[compass][1])+
    TRUNCZ(biasdeal[compass][2])+
    TRUNCZ(biasdeal[compass][3]);
}

int bias_totsuit(int suit){
  return
    TRUNCZ(biasdeal[0][suit])+
    TRUNCZ(biasdeal[1][suit])+
    TRUNCZ(biasdeal[2][suit])+
    TRUNCZ(biasdeal[3][suit]);
}

void bias_deal(int suit, int compass, int length){
  if(biasdeal[compass][suit]!=-1){
    char s[256];
    sprintf(s,"%s's %s suit has length already set to %d",
      player_name[compass],suit_name[suit],
      biasdeal[compass][suit]);
    yyerror(s);
  }
  biasdeal[compass][suit]=length;
  if(bias_len(compass)>13){
      char s[256];
    sprintf(s,"Suit lengths too long for %s",
      player_name[compass]);
    yyerror(s);
  }
  if(bias_totsuit(suit)>13){
    char s[256];
    sprintf(s,"Too many %ss",suit_name[suit]);
    yyerror(s);
  }
}


#define YY_USE_PROTOS

#ifdef WIN32
#pragma warning( disable : 4127 )
#endif

#include "scan.c"

#ifdef WIN32
#pragma warning( default : 4127 )
#endif


