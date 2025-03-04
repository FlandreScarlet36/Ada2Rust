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

/* "%code top" blocks.  */
#line 1 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"

    #include <cstring>
    #include <stack>
    #include <vector>
    #include <iostream>
    #include <assert.h>
    #include <algorithm>
    #include "parser.h"
    extern int yylineno;
    extern char* yytext;
    extern Ast ast;

    std::vector<bool> whileIters;
    std::vector<ProcedureSpec*> procedureIters;

    #define DEBUG_SWITCH_TYPE_CHECK 0
    #if DEBUG_SWITCH_TYPE_CHECK
    #define DEBUG_YACC(str) std::cerr<<"[YACC INFO]:"<<str<<"\n";
    #else
    #define DEBUG_YACC(str) //
    #endif

    int yylex();
    int yyerror(char const*);

#line 94 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"




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

#include "parser.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_TIC = 3,                        /* TIC  */
  YYSYMBOL_ONEDOT = 4,                     /* ONEDOT  */
  YYSYMBOL_DOTDOT = 5,                     /* DOTDOT  */
  YYSYMBOL_LTLT = 6,                       /* LTLT  */
  YYSYMBOL_BOX = 7,                        /* BOX  */
  YYSYMBOL_LTEQ = 8,                       /* LTEQ  */
  YYSYMBOL_GTEQ = 9,                       /* GTEQ  */
  YYSYMBOL_EXPON = 10,                     /* EXPON  */
  YYSYMBOL_NE = 11,                        /* NE  */
  YYSYMBOL_GTGT = 12,                      /* GTGT  */
  YYSYMBOL_GE = 13,                        /* GE  */
  YYSYMBOL_LE = 14,                        /* LE  */
  YYSYMBOL_EQ = 15,                        /* EQ  */
  YYSYMBOL_ASSIGN = 16,                    /* ASSIGN  */
  YYSYMBOL_RIGHTSHAFT = 17,                /* RIGHTSHAFT  */
  YYSYMBOL_ABORT = 18,                     /* ABORT  */
  YYSYMBOL_ABS = 19,                       /* ABS  */
  YYSYMBOL_ABSTRACT = 20,                  /* ABSTRACT  */
  YYSYMBOL_ACCEPT = 21,                    /* ACCEPT  */
  YYSYMBOL_ACCESS = 22,                    /* ACCESS  */
  YYSYMBOL_ALIASED = 23,                   /* ALIASED  */
  YYSYMBOL_ALL = 24,                       /* ALL  */
  YYSYMBOL_AND = 25,                       /* AND  */
  YYSYMBOL_ARRAY = 26,                     /* ARRAY  */
  YYSYMBOL_AT = 27,                        /* AT  */
  YYSYMBOL_BEGiN = 28,                     /* BEGiN  */
  YYSYMBOL_BODY = 29,                      /* BODY  */
  YYSYMBOL_CASE = 30,                      /* CASE  */
  YYSYMBOL_CHARACTER = 31,                 /* CHARACTER  */
  YYSYMBOL_CONSTANT = 32,                  /* CONSTANT  */
  YYSYMBOL_DECLARE = 33,                   /* DECLARE  */
  YYSYMBOL_DELAY = 34,                     /* DELAY  */
  YYSYMBOL_DELTA = 35,                     /* DELTA  */
  YYSYMBOL_DIGITS = 36,                    /* DIGITS  */
  YYSYMBOL_DO = 37,                        /* DO  */
  YYSYMBOL_ELSE = 38,                      /* ELSE  */
  YYSYMBOL_ELSIF = 39,                     /* ELSIF  */
  YYSYMBOL_END = 40,                       /* END  */
  YYSYMBOL_ENTRY = 41,                     /* ENTRY  */
  YYSYMBOL_EXCEPTION = 42,                 /* EXCEPTION  */
  YYSYMBOL_EXIT = 43,                      /* EXIT  */
  YYSYMBOL_FOR = 44,                       /* FOR  */
  YYSYMBOL_FUNCTION = 45,                  /* FUNCTION  */
  YYSYMBOL_GENERIC = 46,                   /* GENERIC  */
  YYSYMBOL_GOTO = 47,                      /* GOTO  */
  YYSYMBOL_IF = 48,                        /* IF  */
  YYSYMBOL_IN = 49,                        /* IN  */
  YYSYMBOL_IS = 50,                        /* IS  */
  YYSYMBOL_LIMITED = 51,                   /* LIMITED  */
  YYSYMBOL_LOOP = 52,                      /* LOOP  */
  YYSYMBOL_MUL = 53,                       /* MUL  */
  YYSYMBOL_DIV = 54,                       /* DIV  */
  YYSYMBOL_MOD = 55,                       /* MOD  */
  YYSYMBOL_NEW = 56,                       /* NEW  */
  YYSYMBOL_NOT = 57,                       /* NOT  */
  YYSYMBOL_SUB = 58,                       /* SUB  */
  YYSYMBOL_ADD = 59,                       /* ADD  */
  YYSYMBOL_NuLL = 60,                      /* NuLL  */
  YYSYMBOL_OF = 61,                        /* OF  */
  YYSYMBOL_OR = 62,                        /* OR  */
  YYSYMBOL_OTHERS = 63,                    /* OTHERS  */
  YYSYMBOL_OUT = 64,                       /* OUT  */
  YYSYMBOL_PACKAGE = 65,                   /* PACKAGE  */
  YYSYMBOL_PRAGMA = 66,                    /* PRAGMA  */
  YYSYMBOL_PRIVATE = 67,                   /* PRIVATE  */
  YYSYMBOL_PROCEDURE = 68,                 /* PROCEDURE  */
  YYSYMBOL_PROTECTED = 69,                 /* PROTECTED  */
  YYSYMBOL_RAISE = 70,                     /* RAISE  */
  YYSYMBOL_RANGE = 71,                     /* RANGE  */
  YYSYMBOL_RECORD = 72,                    /* RECORD  */
  YYSYMBOL_REM = 73,                       /* REM  */
  YYSYMBOL_RENAMES = 74,                   /* RENAMES  */
  YYSYMBOL_REQUEUE = 75,                   /* REQUEUE  */
  YYSYMBOL_RETURN = 76,                    /* RETURN  */
  YYSYMBOL_REVERSE = 77,                   /* REVERSE  */
  YYSYMBOL_SELECT = 78,                    /* SELECT  */
  YYSYMBOL_SEPARATE = 79,                  /* SEPARATE  */
  YYSYMBOL_SUBTYPE = 80,                   /* SUBTYPE  */
  YYSYMBOL_TAGGED = 81,                    /* TAGGED  */
  YYSYMBOL_TASK = 82,                      /* TASK  */
  YYSYMBOL_TERMINATE = 83,                 /* TERMINATE  */
  YYSYMBOL_THEN = 84,                      /* THEN  */
  YYSYMBOL_TYPE = 85,                      /* TYPE  */
  YYSYMBOL_UNTIL = 86,                     /* UNTIL  */
  YYSYMBOL_USE = 87,                       /* USE  */
  YYSYMBOL_WHEN = 88,                      /* WHEN  */
  YYSYMBOL_WHILE = 89,                     /* WHILE  */
  YYSYMBOL_WITH = 90,                      /* WITH  */
  YYSYMBOL_XOR = 91,                       /* XOR  */
  YYSYMBOL_PUT_LINE = 92,                  /* PUT_LINE  */
  YYSYMBOL_PUT = 93,                       /* PUT  */
  YYSYMBOL_GET = 94,                       /* GET  */
  YYSYMBOL_TRuE = 95,                      /* TRuE  */
  YYSYMBOL_FALsE = 96,                     /* FALsE  */
  YYSYMBOL_DECIMIAL = 97,                  /* DECIMIAL  */
  YYSYMBOL_SINGLECHAR = 98,                /* SINGLECHAR  */
  YYSYMBOL_Identifier = 99,                /* Identifier  */
  YYSYMBOL_STRINGLITERAL = 100,            /* STRINGLITERAL  */
  YYSYMBOL_PACKAGEID = 101,                /* PACKAGEID  */
  YYSYMBOL_INTEGER = 102,                  /* INTEGER  */
  YYSYMBOL_STRING = 103,                   /* STRING  */
  YYSYMBOL_NATURAL = 104,                  /* NATURAL  */
  YYSYMBOL_BOOLEAN = 105,                  /* BOOLEAN  */
  YYSYMBOL_COLON = 106,                    /* COLON  */
  YYSYMBOL_SEMICOLON = 107,                /* SEMICOLON  */
  YYSYMBOL_LPAREN = 108,                   /* LPAREN  */
  YYSYMBOL_RPAREN = 109,                   /* RPAREN  */
  YYSYMBOL_COMMA = 110,                    /* COMMA  */
  YYSYMBOL_SINGLEAND = 111,                /* SINGLEAND  */
  YYSYMBOL_SINGLEOR = 112,                 /* SINGLEOR  */
  YYSYMBOL_YYACCEPT = 113,                 /* $accept  */
  YYSYMBOL_Program = 114,                  /* Program  */
  YYSYMBOL_CompUnit = 115,                 /* CompUnit  */
  YYSYMBOL_Unit = 116,                     /* Unit  */
  YYSYMBOL_PackageCall = 117,              /* PackageCall  */
  YYSYMBOL_SubprogDecl = 118,              /* SubprogDecl  */
  YYSYMBOL_SubprogSpec = 119,              /* SubprogSpec  */
  YYSYMBOL_120_1 = 120,                    /* $@1  */
  YYSYMBOL_121_2 = 121,                    /* $@2  */
  YYSYMBOL_FormalPartOpt = 122,            /* FormalPartOpt  */
  YYSYMBOL_FormalPart = 123,               /* FormalPart  */
  YYSYMBOL_Params = 124,                   /* Params  */
  YYSYMBOL_Param = 125,                    /* Param  */
  YYSYMBOL_Type = 126,                     /* Type  */
  YYSYMBOL_InitOpt = 127,                  /* InitOpt  */
  YYSYMBOL_SubprogBody = 128,              /* SubprogBody  */
  YYSYMBOL_129_3 = 129,                    /* $@3  */
  YYSYMBOL_DeclPart = 130,                 /* DeclPart  */
  YYSYMBOL_Decl = 131,                     /* Decl  */
  YYSYMBOL_ObjectDecl = 132,               /* ObjectDecl  */
  YYSYMBOL_DefIds = 133,                   /* DefIds  */
  YYSYMBOL_DefId = 134,                    /* DefId  */
  YYSYMBOL_DeclItemOrBodys = 135,          /* DeclItemOrBodys  */
  YYSYMBOL_DeclItemOrBody = 136,           /* DeclItemOrBody  */
  YYSYMBOL_Statements = 137,               /* Statements  */
  YYSYMBOL_Statement = 138,                /* Statement  */
  YYSYMBOL_SimpleStmt = 139,               /* SimpleStmt  */
  YYSYMBOL_PutStmt = 140,                  /* PutStmt  */
  YYSYMBOL_PutlineStmt = 141,              /* PutlineStmt  */
  YYSYMBOL_GetStmt = 142,                  /* GetStmt  */
  YYSYMBOL_CompoundStmt = 143,             /* CompoundStmt  */
  YYSYMBOL_NullStmt = 144,                 /* NullStmt  */
  YYSYMBOL_AssignStmt = 145,               /* AssignStmt  */
  YYSYMBOL_ReturnStmt = 146,               /* ReturnStmt  */
  YYSYMBOL_ProcedureCall = 147,            /* ProcedureCall  */
  YYSYMBOL_ExitStmt = 148,                 /* ExitStmt  */
  YYSYMBOL_WhenOpt = 149,                  /* WhenOpt  */
  YYSYMBOL_IfStmt = 150,                   /* IfStmt  */
  YYSYMBOL_CondClauses = 151,              /* CondClauses  */
  YYSYMBOL_CondClause = 152,               /* CondClause  */
  YYSYMBOL_CondPart = 153,                 /* CondPart  */
  YYSYMBOL_Condition = 154,                /* Condition  */
  YYSYMBOL_ElseOpt = 155,                  /* ElseOpt  */
  YYSYMBOL_CaseStmt = 156,                 /* CaseStmt  */
  YYSYMBOL_Alternatives = 157,             /* Alternatives  */
  YYSYMBOL_Alternative = 158,              /* Alternative  */
  YYSYMBOL_Choices = 159,                  /* Choices  */
  YYSYMBOL_Choice = 160,                   /* Choice  */
  YYSYMBOL_DiscreteWithRange = 161,        /* DiscreteWithRange  */
  YYSYMBOL_LoopStmt = 162,                 /* LoopStmt  */
  YYSYMBOL_LabelOpt = 163,                 /* LabelOpt  */
  YYSYMBOL_Iteration = 164,                /* Iteration  */
  YYSYMBOL_IterPart = 165,                 /* IterPart  */
  YYSYMBOL_ReverseOpt = 166,               /* ReverseOpt  */
  YYSYMBOL_BasicLoop = 167,                /* BasicLoop  */
  YYSYMBOL_IdOpt = 168,                    /* IdOpt  */
  YYSYMBOL_DiscreteRange = 169,            /* DiscreteRange  */
  YYSYMBOL_RangeConstrOpt = 170,           /* RangeConstrOpt  */
  YYSYMBOL_Range = 171,                    /* Range  */
  YYSYMBOL_Block = 172,                    /* Block  */
  YYSYMBOL_BlockDecl = 173,                /* BlockDecl  */
  YYSYMBOL_BlockBody = 174,                /* BlockBody  */
  YYSYMBOL_Expression = 175,               /* Expression  */
  YYSYMBOL_Logical = 176,                  /* Logical  */
  YYSYMBOL_ShortCircuit = 177,             /* ShortCircuit  */
  YYSYMBOL_Relation = 178,                 /* Relation  */
  YYSYMBOL_Relational = 179,               /* Relational  */
  YYSYMBOL_Membership = 180,               /* Membership  */
  YYSYMBOL_SimpleExpression = 181,         /* SimpleExpression  */
  YYSYMBOL_Unary = 182,                    /* Unary  */
  YYSYMBOL_Adding = 183,                   /* Adding  */
  YYSYMBOL_Term = 184,                     /* Term  */
  YYSYMBOL_Multiplying = 185,              /* Multiplying  */
  YYSYMBOL_Factor = 186,                   /* Factor  */
  YYSYMBOL_Primary = 187,                  /* Primary  */
  YYSYMBOL_Name = 188,                     /* Name  */
  YYSYMBOL_IndexedComp = 189,              /* IndexedComp  */
  YYSYMBOL_Values = 190,                   /* Values  */
  YYSYMBOL_Value = 191,                    /* Value  */
  YYSYMBOL_Attribute = 192,                /* Attribute  */
  YYSYMBOL_AttributeId = 193,              /* AttributeId  */
  YYSYMBOL_ParenthesizedPrimary = 194,     /* ParenthesizedPrimary  */
  YYSYMBOL_Literal = 195                   /* Literal  */
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
#define YYFINAL  16
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   470

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  113
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  83
/* YYNRULES -- Number of rules.  */
#define YYNRULES  167
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  272

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   367


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
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   153,   153,   159,   162,   168,   171,   174,   181,   186,
     194,   206,   206,   237,   237,   273,   274,   280,   286,   289,
     295,   303,   306,   309,   312,   315,   320,   321,   327,   327,
     346,   347,   354,   357,   363,   374,   389,   392,   399,   407,
     410,   417,   420,   426,   429,   436,   439,   445,   448,   451,
     454,   457,   460,   463,   466,   472,   479,   485,   495,   498,
     501,   504,   510,   516,   528,   531,   537,   543,   549,   550,
     556,   562,   565,   572,   578,   584,   589,   590,   596,   602,
     603,   614,   620,   623,   630,   633,   636,   642,   647,   653,
     664,   665,   672,   676,   680,   687,   695,   696,   702,   708,
     709,   716,   721,   726,   727,   733,   739,   744,   745,   751,
     760,   763,   766,   772,   775,   778,   784,   787,   793,   796,
     799,   802,   809,   812,   815,   818,   821,   824,   830,   833,
     839,   842,   845,   851,   854,   860,   863,   866,   872,   875,
     881,   884,   887,   890,   896,   899,   902,   905,   911,   914,
     917,   923,   930,   933,   936,   944,   950,   953,   960,   966,
     972,   978,   984,   988,   992,   996,   999,  1003
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
  "\"end of file\"", "error", "\"invalid token\"", "TIC", "ONEDOT",
  "DOTDOT", "LTLT", "BOX", "LTEQ", "GTEQ", "EXPON", "NE", "GTGT", "GE",
  "LE", "EQ", "ASSIGN", "RIGHTSHAFT", "ABORT", "ABS", "ABSTRACT", "ACCEPT",
  "ACCESS", "ALIASED", "ALL", "AND", "ARRAY", "AT", "BEGiN", "BODY",
  "CASE", "CHARACTER", "CONSTANT", "DECLARE", "DELAY", "DELTA", "DIGITS",
  "DO", "ELSE", "ELSIF", "END", "ENTRY", "EXCEPTION", "EXIT", "FOR",
  "FUNCTION", "GENERIC", "GOTO", "IF", "IN", "IS", "LIMITED", "LOOP",
  "MUL", "DIV", "MOD", "NEW", "NOT", "SUB", "ADD", "NuLL", "OF", "OR",
  "OTHERS", "OUT", "PACKAGE", "PRAGMA", "PRIVATE", "PROCEDURE",
  "PROTECTED", "RAISE", "RANGE", "RECORD", "REM", "RENAMES", "REQUEUE",
  "RETURN", "REVERSE", "SELECT", "SEPARATE", "SUBTYPE", "TAGGED", "TASK",
  "TERMINATE", "THEN", "TYPE", "UNTIL", "USE", "WHEN", "WHILE", "WITH",
  "XOR", "PUT_LINE", "PUT", "GET", "TRuE", "FALsE", "DECIMIAL",
  "SINGLECHAR", "Identifier", "STRINGLITERAL", "PACKAGEID", "INTEGER",
  "STRING", "NATURAL", "BOOLEAN", "COLON", "SEMICOLON", "LPAREN", "RPAREN",
  "COMMA", "SINGLEAND", "SINGLEOR", "$accept", "Program", "CompUnit",
  "Unit", "PackageCall", "SubprogDecl", "SubprogSpec", "$@1", "$@2",
  "FormalPartOpt", "FormalPart", "Params", "Param", "Type", "InitOpt",
  "SubprogBody", "$@3", "DeclPart", "Decl", "ObjectDecl", "DefIds",
  "DefId", "DeclItemOrBodys", "DeclItemOrBody", "Statements", "Statement",
  "SimpleStmt", "PutStmt", "PutlineStmt", "GetStmt", "CompoundStmt",
  "NullStmt", "AssignStmt", "ReturnStmt", "ProcedureCall", "ExitStmt",
  "WhenOpt", "IfStmt", "CondClauses", "CondClause", "CondPart",
  "Condition", "ElseOpt", "CaseStmt", "Alternatives", "Alternative",
  "Choices", "Choice", "DiscreteWithRange", "LoopStmt", "LabelOpt",
  "Iteration", "IterPart", "ReverseOpt", "BasicLoop", "IdOpt",
  "DiscreteRange", "RangeConstrOpt", "Range", "Block", "BlockDecl",
  "BlockBody", "Expression", "Logical", "ShortCircuit", "Relation",
  "Relational", "Membership", "SimpleExpression", "Unary", "Adding",
  "Term", "Multiplying", "Factor", "Primary", "Name", "IndexedComp",
  "Values", "Value", "Attribute", "AttributeId", "ParenthesizedPrimary",
  "Literal", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-139)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-152)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      94,   -67,   -55,   -63,   -48,    92,    94,  -139,  -139,  -139,
     -36,  -139,  -139,  -139,   -25,     7,  -139,  -139,  -139,  -139,
      19,    19,  -139,  -139,   -14,    42,    56,  -139,  -139,  -139,
    -139,  -139,   118,  -139,  -139,    68,  -139,   -14,  -139,    43,
     -72,  -139,    -2,   368,   121,    -6,    67,  -139,    -2,    42,
    -139,  -139,  -139,  -139,  -139,  -139,  -139,   171,    70,   171,
      65,    99,    72,    75,    81,    11,  -139,   248,  -139,  -139,
    -139,  -139,  -139,  -139,  -139,  -139,  -139,  -139,  -139,  -139,
    -139,  -139,    40,  -139,     3,  -139,  -139,    70,    -2,   159,
    -139,   159,  -139,   355,   355,  -139,  -139,  -139,  -139,  -139,
    -139,  -139,  -139,  -139,   171,    45,  -139,    32,   217,   179,
    -139,   183,     4,  -139,  -139,  -139,   112,   148,  -139,   368,
     129,    80,  -139,  -139,    31,   171,   171,   117,   171,  -139,
    -139,   -14,   120,   171,   169,   146,   118,   126,  -139,   171,
     119,   159,   171,   128,  -139,  -139,  -139,    44,   153,  -139,
     200,  -139,   171,   171,  -139,  -139,  -139,  -139,  -139,  -139,
    -139,   190,  -139,  -139,  -139,   171,   185,   217,   179,  -139,
    -139,  -139,  -139,   217,   355,   171,   133,   368,   171,   201,
     288,  -139,  -139,   106,   109,   145,    69,  -139,   206,  -139,
     368,    70,  -139,   203,   216,  -139,  -139,    80,    82,  -139,
    -139,   150,    80,  -139,  -139,  -139,    35,  -139,  -139,  -139,
    -139,    62,     5,  -139,    29,   179,  -139,  -139,  -139,  -139,
     325,  -139,   210,   157,   158,   165,  -139,  -139,   346,   168,
      73,  -139,  -139,    70,  -139,   171,  -139,   246,   151,  -139,
     171,   182,  -139,  -139,  -139,   234,  -139,   171,  -139,   187,
    -139,   188,  -139,   219,    -8,  -139,  -139,  -139,    80,     8,
      62,  -139,  -139,  -139,  -139,  -139,   171,   368,   151,  -139,
     303,  -139
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     2,     3,     7,     5,
       0,     6,    13,    11,     0,     0,     1,     4,    28,    10,
      15,    15,     9,     8,    30,     0,     0,    16,    12,    38,
      33,    41,     0,    42,    32,     0,    36,    31,    39,     0,
       0,    18,     0,    90,     0,     0,     0,    40,     0,     0,
      17,    23,    21,    24,    25,    22,    14,     0,    99,     0,
       0,     0,     0,     0,     0,   151,   154,    90,    43,    45,
      52,    53,    54,    46,    47,    48,    49,    50,    51,    58,
      59,    60,    92,    61,     0,   152,   153,    99,     0,    26,
      37,    26,    19,     0,     0,   134,   133,   165,   166,   167,
     162,   163,   151,   164,     0,     0,   110,   118,     0,   131,
     138,   144,   149,   150,   148,   100,    68,    76,    71,    90,
       0,    75,    62,    64,     0,     0,     0,     0,     0,    91,
      44,    30,     0,     0,     0,    96,     0,     0,    66,     0,
       0,    26,     0,     0,    20,   146,   145,     0,   113,    79,
     114,   115,     0,     0,   125,   127,   123,   126,   124,   122,
     128,     0,   136,   135,   137,     0,     0,     0,   130,   140,
     141,   142,   143,     0,     0,     0,     0,    90,     0,     0,
      90,    74,    65,     0,     0,     0,     0,   108,     0,    93,
      90,    99,    97,     0,     0,   160,   159,   158,     0,   156,
      29,     0,    27,    34,   161,   116,     0,   117,   111,   112,
     129,   119,   121,   120,     0,   132,   139,   147,    69,    67,
      90,    72,     0,     0,     0,     0,    63,    95,    90,     0,
     151,    94,   102,    99,   155,     0,    35,     0,     0,    80,
       0,     0,    56,    55,    57,     0,    89,     0,   101,     0,
     157,     0,    86,   151,     0,    82,    85,    88,    84,   118,
     105,    70,    98,   104,   106,    78,     0,    90,     0,    87,
      90,    83
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -139,  -139,  -139,   286,  -139,    33,  -139,  -139,  -139,   276,
    -139,  -139,   255,   100,   -61,    36,  -139,   175,  -139,  -139,
    -139,   261,  -139,   272,  -116,   -65,  -139,  -139,  -139,  -139,
    -139,  -139,  -139,  -139,  -139,  -139,  -139,  -139,  -139,   132,
    -139,  -113,  -139,  -139,  -139,  -139,  -139,    52,  -139,  -139,
    -139,  -139,  -139,  -139,  -139,   -83,  -139,  -139,  -138,  -139,
    -139,   186,   -56,  -139,  -139,    50,  -139,  -139,  -114,  -139,
    -139,   -90,  -139,   156,   -44,   -43,  -139,  -139,    86,  -139,
    -139,  -139,  -139
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     5,     6,     7,     8,    30,    10,    21,    20,    26,
      27,    40,    41,    56,   143,    31,    24,    32,    33,    34,
      35,    36,    37,    38,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,   176,    79,   117,   118,
     119,   120,   179,    80,   206,   239,   254,   255,   256,    81,
      82,   134,   135,   193,   191,   116,   231,   248,   257,    83,
     136,    44,   121,   152,   153,   106,   165,   166,   107,   108,
     167,   109,   173,   110,   111,   112,    85,   198,   199,    86,
     196,   113,   114
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      84,   105,   130,   180,   140,   124,   137,   137,  -151,   267,
    -151,   183,   184,   240,    18,  -151,   154,   155,   168,   156,
     189,   157,   158,   159,    84,    51,    88,   128,   213,    51,
     144,     1,    12,     9,   240,    49,    11,    50,    14,     9,
     154,   155,    11,   156,    13,   157,   158,   159,   147,   145,
     146,   211,   214,    15,     2,   232,   148,   160,  -151,  -151,
    -151,   220,   218,  -151,  -151,   161,   162,   163,  -107,   148,
     148,    19,   186,   131,   228,   237,    84,   215,  -151,   214,
     201,   160,    22,   197,   132,    29,   202,   162,   163,   161,
     162,   163,    16,   150,   148,   149,    52,    53,    54,    55,
      52,    53,    54,    55,   268,   148,   150,   150,   229,   263,
     138,   139,   139,  -151,    23,   130,  -151,   129,    93,   164,
     162,   163,   151,   238,   259,  -103,   260,    25,   269,   133,
     217,   150,    42,   214,    84,   151,   151,    84,   182,     1,
     164,    39,   150,   164,   247,    89,    43,    84,    91,    48,
     249,   270,   214,   204,   259,   130,    94,    95,    96,    97,
     151,    87,     2,   130,   162,   163,    29,   162,   163,   115,
      93,   151,   122,   164,    45,   142,   226,    84,    46,   197,
     125,     3,   258,   126,     4,    84,   177,   178,   141,   127,
      93,   234,   235,   174,    98,    99,   100,   101,   102,   103,
     175,    66,   208,   209,    93,   130,   123,   104,    94,    95,
      96,    97,   258,   181,   252,   223,   185,   164,   224,   188,
     164,   190,    93,   192,    84,   195,   200,    84,    94,    95,
      96,    97,   169,   170,   171,   203,    93,   205,   207,   210,
     219,   222,    94,    95,    96,    97,    98,    99,   100,   101,
     253,   103,   172,    66,   225,   227,   233,   236,   241,   104,
      94,    95,    96,    97,   242,   243,    98,    99,   100,   101,
     102,   103,   244,    66,    94,   246,   251,    97,    57,   104,
      98,    99,   100,   101,   212,   103,   262,    66,  -109,   261,
     266,    58,    17,   104,   264,   265,    59,    28,    98,    99,
     100,   101,   230,   103,    92,    66,   187,    90,    60,    47,
     221,   104,    98,    99,   100,   101,   102,   103,    57,    66,
     271,   250,   194,     0,    61,   104,   -73,   -73,   -73,   216,
       0,    58,     0,    57,     0,     0,    59,     0,     0,     0,
      62,    63,    64,   -81,     0,     0,    58,    65,    60,     0,
      66,    59,     0,     0,     0,    57,     0,     0,     0,     0,
       0,     0,     0,    60,    61,   -77,     0,     0,    58,     0,
       0,     0,     0,    59,     0,     0,    57,     0,     0,    61,
      62,    63,    64,     0,     0,    60,   245,    65,     0,    58,
      66,   -81,     0,     0,    59,    62,    63,    64,    57,     0,
       0,    61,    65,     0,     0,    66,    60,     0,     0,     0,
       0,    58,     0,     0,     0,    97,    59,    62,    63,    64,
       0,     0,    61,     0,    65,     0,     0,    66,    60,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    62,    63,
      64,     0,     0,     0,    61,    65,     0,     0,    66,     0,
      98,    99,   100,   101,   102,   103,     0,    66,     0,     0,
      62,    63,    64,   104,     0,     0,     0,    65,     0,     0,
      66
};

static const yytype_int16 yycheck[] =
{
      43,    57,    67,   119,    87,    61,     3,     3,     3,    17,
       5,   125,   126,     5,    50,    10,     8,     9,   108,    11,
     133,    13,    14,    15,    67,    31,    32,    16,   166,    31,
      91,    45,    99,     0,     5,   107,     0,   109,   101,     6,
       8,     9,     6,    11,    99,    13,    14,    15,   104,    93,
      94,   165,   166,   101,    68,   193,    25,    49,    53,    54,
      55,   177,   175,    58,    59,    57,    58,    59,    28,    25,
      25,   107,   128,    33,   190,    40,   119,   167,    73,   193,
     141,    49,   107,   139,    44,    99,   142,    58,    59,    57,
      58,    59,     0,    62,    25,    50,   102,   103,   104,   105,
     102,   103,   104,   105,   112,    25,    62,    62,   191,   247,
     107,   108,   108,   108,   107,   180,   111,   106,    19,   111,
      58,    59,    91,    88,   238,    52,   240,   108,   266,    89,
     174,    62,    76,   247,   177,    91,    91,   180,   107,    45,
     111,    99,    62,   111,    71,    45,    28,   190,    48,   106,
     233,   267,   266,   109,   268,   220,    57,    58,    59,    60,
      91,    40,    68,   228,    58,    59,    99,    58,    59,    99,
      19,    91,   107,   111,   106,    16,   107,   220,   110,   235,
     108,    87,   238,   108,    90,   228,    38,    39,    88,   108,
      19,   109,   110,    10,    95,    96,    97,    98,    99,   100,
      88,   102,   152,   153,    19,   270,   107,   108,    57,    58,
      59,    60,   268,    84,    63,   109,    99,   111,   109,    99,
     111,    52,    19,    77,   267,    99,   107,   270,    57,    58,
      59,    60,    53,    54,    55,   107,    19,    84,    38,    49,
     107,    40,    57,    58,    59,    60,    95,    96,    97,    98,
      99,   100,    73,   102,   109,    49,    40,   107,    48,   108,
      57,    58,    59,    60,   107,   107,    95,    96,    97,    98,
      99,   100,   107,   102,    57,   107,    30,    60,    30,   108,
      95,    96,    97,    98,    99,   100,    52,   102,    40,   107,
      71,    43,     6,   108,   107,   107,    48,    21,    95,    96,
      97,    98,    99,   100,    49,   102,   131,    46,    60,    37,
     178,   108,    95,    96,    97,    98,    99,   100,    30,   102,
     268,   235,   136,    -1,    76,   108,    38,    39,    40,   173,
      -1,    43,    -1,    30,    -1,    -1,    48,    -1,    -1,    -1,
      92,    93,    94,    40,    -1,    -1,    43,    99,    60,    -1,
     102,    48,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    60,    76,    40,    -1,    -1,    43,    -1,
      -1,    -1,    -1,    48,    -1,    -1,    30,    -1,    -1,    76,
      92,    93,    94,    -1,    -1,    60,    40,    99,    -1,    43,
     102,    88,    -1,    -1,    48,    92,    93,    94,    30,    -1,
      -1,    76,    99,    -1,    -1,   102,    60,    -1,    -1,    -1,
      -1,    43,    -1,    -1,    -1,    60,    48,    92,    93,    94,
      -1,    -1,    76,    -1,    99,    -1,    -1,   102,    60,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    93,
      94,    -1,    -1,    -1,    76,    99,    -1,    -1,   102,    -1,
      95,    96,    97,    98,    99,   100,    -1,   102,    -1,    -1,
      92,    93,    94,   108,    -1,    -1,    -1,    99,    -1,    -1,
     102
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    45,    68,    87,    90,   114,   115,   116,   117,   118,
     119,   128,    99,    99,   101,   101,     0,   116,    50,   107,
     121,   120,   107,   107,   129,   108,   122,   123,   122,    99,
     118,   128,   130,   131,   132,   133,   134,   135,   136,    99,
     124,   125,    76,    28,   174,   106,   110,   136,   106,   107,
     109,    31,   102,   103,   104,   105,   126,    30,    43,    48,
      60,    76,    92,    93,    94,    99,   102,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   150,
     156,   162,   163,   172,   188,   189,   192,    40,    32,   126,
     134,   126,   125,    19,    57,    58,    59,    60,    95,    96,
      97,    98,    99,   100,   108,   175,   178,   181,   182,   184,
     186,   187,   188,   194,   195,    99,   168,   151,   152,   153,
     154,   175,   107,   107,   175,   108,   108,   108,    16,   106,
     138,    33,    44,    89,   164,   165,   173,     3,   107,   108,
     168,   126,    16,   127,   127,   187,   187,   175,    25,    50,
      62,    91,   176,   177,     8,     9,    11,    13,    14,    15,
      49,    57,    58,    59,   111,   179,   180,   183,   184,    53,
      54,    55,    73,   185,    10,    88,   149,    38,    39,   155,
     137,    84,   107,   181,   181,    99,   175,   130,    99,   154,
      52,   167,    77,   166,   174,    99,   193,   175,   190,   191,
     107,   127,   175,   107,   109,    84,   157,    38,   178,   178,
      49,   181,    99,   171,   181,   184,   186,   187,   154,   107,
     137,   152,    40,   109,   109,   109,   107,    49,   137,   168,
      99,   169,   171,    40,   109,   110,   107,    40,    88,   158,
       5,    48,   107,   107,   107,    40,   107,    71,   170,   168,
     191,    30,    63,    99,   159,   160,   161,   171,   175,   181,
     181,   107,    52,   171,   107,   107,    71,    17,   112,   171,
     137,   160
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,   113,   114,   115,   115,   116,   116,   116,   117,   117,
     118,   120,   119,   121,   119,   122,   122,   123,   124,   124,
     125,   126,   126,   126,   126,   126,   127,   127,   129,   128,
     130,   130,   131,   131,   132,   132,   133,   133,   134,   135,
     135,   136,   136,   137,   137,   138,   138,   139,   139,   139,
     139,   139,   139,   139,   139,   140,   141,   142,   143,   143,
     143,   143,   144,   145,   146,   146,   147,   148,   149,   149,
     150,   151,   151,   152,   153,   154,   155,   155,   156,   157,
     157,   158,   159,   159,   160,   160,   160,   161,   161,   162,
     163,   163,   164,   164,   164,   165,   166,   166,   167,   168,
     168,   169,   169,   170,   170,   171,   172,   173,   173,   174,
     175,   175,   175,   176,   176,   176,   177,   177,   178,   178,
     178,   178,   179,   179,   179,   179,   179,   179,   180,   180,
     181,   181,   181,   182,   182,   183,   183,   183,   184,   184,
     185,   185,   185,   185,   186,   186,   186,   186,   187,   187,
     187,   188,   188,   188,   188,   189,   190,   190,   191,   192,
     193,   194,   195,   195,   195,   195,   195,   195
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     1,     3,     3,
       2,     0,     4,     0,     6,     0,     1,     3,     1,     3,
       4,     1,     1,     1,     1,     1,     0,     2,     0,     8,
       0,     1,     1,     1,     5,     6,     1,     3,     1,     1,
       2,     1,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     5,     5,     5,     1,     1,
       1,     1,     2,     4,     2,     3,     2,     4,     0,     2,
       6,     1,     3,     2,     2,     1,     0,     2,     7,     0,
       2,     4,     1,     3,     1,     1,     1,     3,     1,     5,
       0,     2,     0,     2,     3,     3,     0,     1,     4,     0,
       1,     2,     1,     0,     2,     3,     6,     0,     2,     2,
       1,     3,     3,     1,     1,     1,     2,     2,     1,     3,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     1,     3,     1,     1,     1,     1,     1,     1,     3,
       1,     1,     1,     1,     1,     2,     2,     3,     1,     1,
       1,     1,     1,     1,     1,     4,     1,     3,     1,     3,
       1,     3,     1,     1,     1,     1,     1,     1
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
  case 2: /* Program: CompUnit  */
#line 153 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
               {
        ast.setRoot((yyvsp[0].StmtType));
    }
#line 1547 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 3: /* CompUnit: Unit  */
#line 159 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
           {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 1555 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 4: /* CompUnit: CompUnit Unit  */
#line 162 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                    {
        (yyval.StmtType) = new SeqNode((yyvsp[-1].StmtType), (yyvsp[0].StmtType));
    }
#line 1563 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 5: /* Unit: SubprogDecl  */
#line 168 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                  {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 1571 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 6: /* Unit: SubprogBody  */
#line 171 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                      {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 1579 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 7: /* Unit: PackageCall  */
#line 174 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                  {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 1587 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 8: /* PackageCall: WITH PACKAGEID SEMICOLON  */
#line 181 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                               {
        DEBUG_YACC("================Enter PackageCall=================");
        (yyval.StmtType) = new PackageCall((yyvsp[-1].StrType));
        DEBUG_YACC("================Leave PackageCall=================");
    }
#line 1597 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 9: /* PackageCall: USE PACKAGEID SEMICOLON  */
#line 186 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                              {
        DEBUG_YACC("================Enter PackageCall=================");
        (yyval.StmtType) = new PackageCall((yyvsp[-1].StrType));
        DEBUG_YACC("================Leave PackageCall=================");
    }
#line 1607 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 10: /* SubprogDecl: SubprogSpec SEMICOLON  */
#line 194 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                            {
        DEBUG_YACC("================Enter SubprogDecl=================");
        (yyval.StmtType) = new ProcedureDecl(dynamic_cast<ProcedureSpec*>((yyvsp[-1].StmtType)));

        SymbolTable* ScopeTable = identifiers;
        identifiers = identifiers->getPrev();
        delete ScopeTable;
        DEBUG_YACC("================Leave SubprogDecl=================");
    }
#line 1621 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 11: /* $@1: %empty  */
#line 206 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                           {
        DEBUG_YACC("================Enter SubprogSpec=================");
        // Register procedure name into symbol table.
        Type* proType = new ProcedureType();
        SymbolEntry *se = identifiers->lookup((yyvsp[0].StrType));
        if(!se) {
            se = new IdentifierSymbolEntry(proType, (yyvsp[0].StrType), identifiers->getLevel());
            identifiers->install((yyvsp[0].StrType), se);
        }
        identifiers = new SymbolTable(identifiers);
    }
#line 1637 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 12: /* SubprogSpec: PROCEDURE Identifier $@1 FormalPartOpt  */
#line 216 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                    {
        SymbolEntry *se = identifiers->lookup((yyvsp[-2].StrType));
        ProcedureType* proType = dynamic_cast<ProcedureType*>(se->getType());
        // Define procedure type.
        ParamNode* param = nullptr;
        if((yyvsp[0].StmtType)) {
            param = dynamic_cast<ParamNode*>((yyvsp[0].StmtType));
            std::vector<Type*> paramTypes;
            std::vector<SymbolEntry*> paramIds;
            while (param) {
                SymbolEntry* paramSe = param->getParamSymbol();
                paramTypes.push_back(paramSe->getType());
                paramIds.push_back(paramSe);
                param = dynamic_cast<ParamNode*>(param->getNext());
            }
            proType->setParams(paramTypes, paramIds);
        }
        // Define SubprogSpec with ast node.
        (yyval.StmtType) = new ProcedureSpec(se, param);
        DEBUG_YACC("================Leave SubprogSpec=================");
    }
#line 1663 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 13: /* $@2: %empty  */
#line 237 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                          {
        DEBUG_YACC("================Enter SubprogSpec=================");
        // Register procedure name into symbol table.
        Type* proType = new ProcedureType();
        SymbolEntry *se = identifiers->lookup((yyvsp[0].StrType));
        if(!se) {
            se = new IdentifierSymbolEntry(proType, (yyvsp[0].StrType), identifiers->getLevel());
            identifiers->install((yyvsp[0].StrType), se);
        }
        identifiers = new SymbolTable(identifiers);
    }
#line 1679 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 14: /* SubprogSpec: FUNCTION Identifier $@2 FormalPartOpt RETURN Type  */
#line 247 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                               {
        SymbolEntry *se = identifiers->lookup((yyvsp[-4].StrType));
        ProcedureType* proType = dynamic_cast<ProcedureType*>(se->getType());
        // Define procedure type.
        ParamNode* param = nullptr;
        if((yyvsp[-2].StmtType)) {
            param = dynamic_cast<ParamNode*>((yyvsp[-2].StmtType));
            std::vector<Type*> paramTypes;
            std::vector<SymbolEntry*> paramIds;
            while (param) {
                SymbolEntry* paramSe = param->getParamSymbol();
                paramTypes.push_back(paramSe->getType());
                paramIds.push_back(paramSe);
                param = dynamic_cast<ParamNode*>(param->getNext());
            }
            proType->setParams(paramTypes, paramIds);
        }
        if((yyvsp[0].type))
        proType->setReturnType((yyvsp[0].type));
        // Define SubprogSpec with ast node.
        (yyval.StmtType) = new ProcedureSpec(se, param);
        DEBUG_YACC("================Leave SubprogSpec=================");
    }
#line 1707 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 15: /* FormalPartOpt: %empty  */
#line 273 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
             { (yyval.StmtType) = nullptr; }
#line 1713 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 16: /* FormalPartOpt: FormalPart  */
#line 274 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                     {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 1721 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 17: /* FormalPart: LPAREN Params RPAREN  */
#line 280 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                           {
        (yyval.StmtType) = (yyvsp[-1].StmtType);
    }
#line 1729 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 18: /* Params: Param  */
#line 286 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
            {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 1737 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 19: /* Params: Params SEMICOLON Param  */
#line 289 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                 {
        (yyval.StmtType) = (yyvsp[-2].StmtType);
        (yyvsp[-2].StmtType)->setNext((yyvsp[0].StmtType));
    }
#line 1746 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 20: /* Param: Identifier COLON Type InitOpt  */
#line 295 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                      {
        SymbolEntry *se = new IdentifierSymbolEntry((yyvsp[-1].type), (yyvsp[-3].StrType), IdentifierSymbolEntry::PARAM);
        identifiers->install((yyvsp[-3].StrType), se);
        (yyval.StmtType) = new ParamNode(se, dynamic_cast<InitOptStmt*>((yyvsp[0].StmtType)));
    }
#line 1756 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 21: /* Type: INTEGER  */
#line 303 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
              {
        (yyval.type) = TypeSystem::integerType;
    }
#line 1764 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 22: /* Type: BOOLEAN  */
#line 306 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
              {
        (yyval.type) = TypeSystem::boolType;
    }
#line 1772 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 23: /* Type: CHARACTER  */
#line 309 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                {
         (yyval.type) = TypeSystem::characterType;
    }
#line 1780 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 24: /* Type: STRING  */
#line 312 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
             {
        (yyval.type) = TypeSystem::stringType;
    }
#line 1788 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 25: /* Type: NATURAL  */
#line 315 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
              {
        (yyval.type) = TypeSystem::naturalType;
    }
#line 1796 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 26: /* InitOpt: %empty  */
#line 320 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                 { (yyval.StmtType) = nullptr; }
#line 1802 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 27: /* InitOpt: ASSIGN Expression  */
#line 321 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                            {
        (yyval.StmtType) = new InitOptStmt((yyvsp[0].ExprType));
    }
#line 1810 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 28: /* $@3: %empty  */
#line 327 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                     {
        DEBUG_YACC("================Enter SubprogBody=================");
        // Enter into new scope.
        identifiers = new SymbolTable(identifiers);
        procedureIters.push_back(dynamic_cast<ProcedureSpec*>((yyvsp[-1].StmtType)));
    }
#line 1821 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 29: /* SubprogBody: SubprogSpec IS $@3 DeclPart BlockBody END IdOpt SEMICOLON  */
#line 332 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                             {
        procedureIters.pop_back();
        ProcedureSpec* prev = procedureIters.empty()? nullptr : procedureIters.back();
        (yyval.StmtType) = new ProcedureDef(dynamic_cast<ProcedureSpec*>((yyvsp[-7].StmtType)), dynamic_cast<DeclItemOrBodyStmt*>((yyvsp[-4].StmtType)), dynamic_cast<Stmt*>((yyvsp[-3].StmtType)), prev);
        // Leave the scope.
        SymbolTable* ScopeTable = identifiers;
        SymbolTable* PrevTable = identifiers->getPrev();
        identifiers = PrevTable->getPrev();
        delete ScopeTable;
        delete PrevTable;
        DEBUG_YACC("================Leave SubprogBody=================");
    }
#line 1838 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 30: /* DeclPart: %empty  */
#line 346 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                 { (yyval.StmtType) = nullptr; }
#line 1844 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 31: /* DeclPart: DeclItemOrBodys  */
#line 347 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                          {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 1852 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 32: /* Decl: ObjectDecl  */
#line 354 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
               {
        (yyval.StmtType) = new DeclStmt(dynamic_cast<ObjectDeclStmt*>((yyvsp[0].StmtType)));
    }
#line 1860 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 33: /* Decl: SubprogDecl  */
#line 357 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                  {
        (yyval.StmtType) = new DeclStmt(dynamic_cast<ProcedureDecl*>((yyvsp[0].StmtType)));
    }
#line 1868 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 34: /* ObjectDecl: DefIds COLON Type InitOpt SEMICOLON  */
#line 363 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                          {
        DEBUG_YACC("================Enter ObjectDecl=================");
        // Reset the type of id
        DefId* id = dynamic_cast<DefId*>((yyvsp[-4].StmtType));
        while(id) {
            id->setType((yyvsp[-2].type));
            id = dynamic_cast<DefId*>(id->getNext());
        }
        (yyval.StmtType) = new ObjectDeclStmt(dynamic_cast<DefId*>((yyvsp[-4].StmtType)), dynamic_cast<InitOptStmt*>((yyvsp[-1].StmtType)));
        DEBUG_YACC("================Leave ObjectDecl=================");
    }
#line 1884 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 35: /* ObjectDecl: DefIds COLON CONSTANT Type InitOpt SEMICOLON  */
#line 374 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                                   {
        DEBUG_YACC("================Enter CONSTANT ObjectDecl=================");
        DefId* id = dynamic_cast<DefId*>((yyvsp[-5].StmtType));
        // InitOptStmt* init = dynamic_cast<InitOptStmt*>($5);
        while(id) {
            id->setType((yyvsp[-2].type));
            id->setConst();
            id = dynamic_cast<DefId*>(id->getNext());
        }
        (yyval.StmtType) = new ObjectDeclStmt(dynamic_cast<DefId*>((yyvsp[-5].StmtType)), dynamic_cast<InitOptStmt*>((yyvsp[-1].StmtType)));
        DEBUG_YACC("================Leave CONSTANT ObjectDecl=================");
    }
#line 1901 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 36: /* DefIds: DefId  */
#line 389 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
            {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 1909 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 37: /* DefIds: DefIds COMMA DefId  */
#line 392 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                         {
        (yyval.StmtType) = (yyvsp[-2].StmtType);
        (yyvsp[-2].StmtType)->setNext((yyvsp[0].StmtType));
    }
#line 1918 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 38: /* DefId: Identifier  */
#line 399 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                 {
        IdentifierSymbolEntry *se = new IdentifierSymbolEntry((yyvsp[0].StrType), identifiers->getLevel());
        identifiers->install((yyvsp[0].StrType), se);
        (yyval.StmtType) = new DefId(se);
    }
#line 1928 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 39: /* DeclItemOrBodys: DeclItemOrBody  */
#line 407 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                     {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 1936 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 40: /* DeclItemOrBodys: DeclItemOrBodys DeclItemOrBody  */
#line 410 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                         {
        (yyval.StmtType) = (yyvsp[-1].StmtType);
        (yyvsp[-1].StmtType)->setNext((yyvsp[0].StmtType));
    }
#line 1945 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 41: /* DeclItemOrBody: SubprogBody  */
#line 417 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                  {
        (yyval.StmtType) = new DeclItemOrBodyStmt(dynamic_cast<ProcedureDef*>((yyvsp[0].StmtType)));
    }
#line 1953 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 42: /* DeclItemOrBody: Decl  */
#line 420 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
               {
        (yyval.StmtType) = new DeclItemOrBodyStmt(dynamic_cast<DeclStmt*>((yyvsp[0].StmtType)));
    }
#line 1961 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 43: /* Statements: Statement  */
#line 426 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 1969 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 44: /* Statements: Statements Statement  */
#line 429 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                               {
        (yyval.StmtType) = (yyvsp[-1].StmtType);
        (yyvsp[-1].StmtType)->setNext((yyvsp[0].StmtType));
    }
#line 1978 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 45: /* Statement: SimpleStmt  */
#line 436 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                 {
        (yyval.StmtType) = new Stmt((yyvsp[0].StmtType));
    }
#line 1986 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 46: /* Statement: CompoundStmt  */
#line 439 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                       {
        (yyval.StmtType) = new Stmt((yyvsp[0].StmtType));
    }
#line 1994 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 47: /* SimpleStmt: NullStmt  */
#line 445 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
               {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 2002 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 48: /* SimpleStmt: AssignStmt  */
#line 448 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                     {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 2010 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 49: /* SimpleStmt: ReturnStmt  */
#line 451 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                     {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 2018 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 50: /* SimpleStmt: ProcedureCall  */
#line 454 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                        {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 2026 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 51: /* SimpleStmt: ExitStmt  */
#line 457 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
               {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 2034 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 52: /* SimpleStmt: PutStmt  */
#line 460 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
              {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 2042 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 53: /* SimpleStmt: PutlineStmt  */
#line 463 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                  {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 2050 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 54: /* SimpleStmt: GetStmt  */
#line 466 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
              {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 2058 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 55: /* PutStmt: PUT LPAREN SimpleExpression RPAREN SEMICOLON  */
#line 472 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                                   {
        (yyval.StmtType) = new PutStmt((yyvsp[-2].ExprType));
    }
#line 2066 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 56: /* PutlineStmt: PUT_LINE LPAREN SimpleExpression RPAREN SEMICOLON  */
#line 479 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                                        {
        (yyval.StmtType) = new PutlineStmt((yyvsp[-2].ExprType));
    }
#line 2074 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 57: /* GetStmt: GET LPAREN Identifier RPAREN SEMICOLON  */
#line 485 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                             {
        IdentifierSymbolEntry *se = dynamic_cast<IdentifierSymbolEntry*>(identifiers->lookup((yyvsp[-2].StrType)));            
        if(!se) {
            std::cerr << "[YACC ERROR]: Can't not get symbolEntry: "<< (yyvsp[-2].StrType) << "\n";
        }
        (yyval.StmtType) = new GetStmt(se);
    }
#line 2086 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 58: /* CompoundStmt: IfStmt  */
#line 495 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
             {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 2094 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 59: /* CompoundStmt: CaseStmt  */
#line 498 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                   {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 2102 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 60: /* CompoundStmt: LoopStmt  */
#line 501 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                   {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 2110 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 61: /* CompoundStmt: Block  */
#line 504 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 2118 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 62: /* NullStmt: NuLL SEMICOLON  */
#line 510 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                     {
        (yyval.StmtType) = new NullStmt();
    }
#line 2126 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 63: /* AssignStmt: Identifier ASSIGN Expression SEMICOLON  */
#line 516 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                             {
        DEBUG_YACC("================Enter AssignStmt=================");
        SymbolEntry *se = identifiers->lookup((yyvsp[-3].StrType));
        if(!se) {
            std::cerr << "[YACC ERROR]: Can't not get symbolEntry: "<< (yyvsp[-3].StrType) << "\n";
        }
        (yyval.StmtType) = new AssignStmt(se, (yyvsp[-1].ExprType));
        DEBUG_YACC("================Leave AssignStmt=================");
    }
#line 2140 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 64: /* ReturnStmt: RETURN SEMICOLON  */
#line 528 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                       {
        (yyval.StmtType) = new ReturnStmt(nullptr);
    }
#line 2148 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 65: /* ReturnStmt: RETURN Expression SEMICOLON  */
#line 531 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                      {
        (yyval.StmtType) = new ReturnStmt((yyvsp[-1].ExprType));
    }
#line 2156 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 66: /* ProcedureCall: Name SEMICOLON  */
#line 537 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                     {
        (yyval.StmtType) = new CallStmt(dynamic_cast<Id*>((yyvsp[-1].ExprType)));
    }
#line 2164 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 67: /* ExitStmt: EXIT IdOpt WhenOpt SEMICOLON  */
#line 543 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                   {
        (yyval.StmtType) = new ExitStmt((yyvsp[-1].ExprType));
    }
#line 2172 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 68: /* WhenOpt: %empty  */
#line 549 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
             { (yyval.ExprType) = nullptr; }
#line 2178 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 69: /* WhenOpt: WHEN Condition  */
#line 550 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                         {
        (yyval.ExprType) = (yyvsp[0].ExprType);
    }
#line 2186 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 70: /* IfStmt: IF CondClauses ElseOpt END IF SEMICOLON  */
#line 556 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                              {
        (yyval.StmtType) = new IfStmt(dynamic_cast<CondClause*>((yyvsp[-4].StmtType)), dynamic_cast<Stmt*>((yyvsp[-3].StmtType)));
    }
#line 2194 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 71: /* CondClauses: CondClause  */
#line 562 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                 {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 2202 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 72: /* CondClauses: CondClauses ELSIF CondClause  */
#line 565 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                       {
        (yyval.StmtType) = (yyvsp[-2].StmtType);
        (yyvsp[-2].StmtType)->setNext((yyvsp[0].StmtType));
    }
#line 2211 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 73: /* CondClause: CondPart Statements  */
#line 572 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                          {
        (yyval.StmtType) = new CondClause((yyvsp[-1].ExprType), dynamic_cast<Stmt*>((yyvsp[0].StmtType)));
    }
#line 2219 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 74: /* CondPart: Condition THEN  */
#line 578 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                     {
        (yyval.ExprType) = (yyvsp[-1].ExprType);
    }
#line 2227 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 75: /* Condition: Expression  */
#line 584 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                 {
        (yyval.ExprType) = (yyvsp[0].ExprType); 
    }
#line 2235 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 76: /* ElseOpt: %empty  */
#line 589 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                 { (yyval.StmtType) = nullptr; }
#line 2241 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 77: /* ElseOpt: ELSE Statements  */
#line 590 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                          {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 2249 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 78: /* CaseStmt: CASE Expression IS Alternatives END CASE SEMICOLON  */
#line 596 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                                         {
        (yyval.StmtType) = new CaseStmt((yyvsp[-5].ExprType), dynamic_cast<Alternative*>((yyvsp[-3].StmtType)));
    }
#line 2257 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 79: /* Alternatives: %empty  */
#line 602 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
             { (yyval.StmtType) = nullptr; }
#line 2263 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 80: /* Alternatives: Alternatives Alternative  */
#line 603 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                   {
        if((yyvsp[-1].StmtType)) {
            (yyval.StmtType) = (yyvsp[-1].StmtType);
            (yyvsp[-1].StmtType)->setNext((yyvsp[0].StmtType));
        } else {
            (yyval.StmtType) = (yyvsp[0].StmtType);
        }
    }
#line 2276 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 81: /* Alternative: WHEN Choices RIGHTSHAFT Statements  */
#line 614 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                         {
        (yyval.StmtType) = new Alternative(dynamic_cast<Choice*>((yyvsp[-2].StmtType)), dynamic_cast<Stmt*>((yyvsp[0].StmtType)));
    }
#line 2284 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 82: /* Choices: Choice  */
#line 620 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
             {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 2292 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 83: /* Choices: Choices SINGLEOR Choice  */
#line 623 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                  {
        (yyval.StmtType) = (yyvsp[-2].StmtType);
        (yyvsp[-2].StmtType)->setNext((yyvsp[0].StmtType));
    }
#line 2301 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 84: /* Choice: Expression  */
#line 630 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                 {
        (yyval.StmtType) = new Choice((yyvsp[0].ExprType));
    }
#line 2309 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 85: /* Choice: DiscreteWithRange  */
#line 633 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                            {
        (yyval.StmtType) = new Choice(dynamic_cast<DiscreteRange*>((yyvsp[0].StmtType)));
    }
#line 2317 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 86: /* Choice: OTHERS  */
#line 636 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                 {
        (yyval.StmtType) = new Choice(true);
    }
#line 2325 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 87: /* DiscreteWithRange: Identifier RANGE Range  */
#line 642 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                             {
        Type* type = dynamic_cast<Range*>((yyvsp[0].StmtType))->getType();
        SymbolEntry* se = new IdentifierSymbolEntry(type, (yyvsp[-2].StrType), identifiers->getLevel());
        (yyval.StmtType) = new DiscreteRange(se, dynamic_cast<Range*>((yyvsp[0].StmtType)));
    }
#line 2335 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 88: /* DiscreteWithRange: Range  */
#line 647 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                {
        (yyval.StmtType) = new DiscreteRange(dynamic_cast<Range*>((yyvsp[0].StmtType)));
    }
#line 2343 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 89: /* LoopStmt: LabelOpt Iteration BasicLoop IdOpt SEMICOLON  */
#line 653 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                                   {
        (yyval.StmtType) = new LoopStmt(dynamic_cast<LabelOpt*>((yyvsp[-4].StmtType)), dynamic_cast<Iteration*>((yyvsp[-3].StmtType)), dynamic_cast<BasicLoopStmt*>((yyvsp[-2].StmtType)));
        if(!whileIters.empty() && whileIters.back()) {
            SymbolTable* ScopeTable = identifiers;
            identifiers = identifiers->getPrev();
            delete ScopeTable;
        }
        whileIters.pop_back();
    }
#line 2357 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 90: /* LabelOpt: %empty  */
#line 664 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                  { (yyval.StmtType) = nullptr; }
#line 2363 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 91: /* LabelOpt: Identifier COLON  */
#line 665 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                           {
        SymbolEntry *se = new IdentifierSymbolEntry(TypeSystem::integerType, (yyvsp[-1].StrType), identifiers->getLevel());
        identifiers->install((yyvsp[-1].StrType), se);
        (yyval.StmtType) = new LabelOpt(se);
    }
#line 2373 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 92: /* Iteration: %empty  */
#line 672 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                   {
        whileIters.push_back(false);
        (yyval.StmtType) = nullptr; 
    }
#line 2382 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 93: /* Iteration: WHILE Condition  */
#line 676 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                          {
        (yyval.StmtType) = new Iteration((yyvsp[0].ExprType));
        whileIters.push_back(false);
    }
#line 2391 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 94: /* Iteration: IterPart ReverseOpt DiscreteRange  */
#line 680 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                            {
        (yyval.StmtType) = new Iteration(dynamic_cast<IterPart*>((yyvsp[-2].StmtType)), (yyvsp[-1].SignType), dynamic_cast<DiscreteRange*>((yyvsp[0].StmtType)));
        whileIters.push_back(true);
    }
#line 2400 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 95: /* IterPart: FOR Identifier IN  */
#line 687 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                        {
        identifiers = new SymbolTable(identifiers);
        SymbolEntry *se = new IdentifierSymbolEntry(TypeSystem::integerType, (yyvsp[-1].StrType), identifiers->getLevel());
        identifiers->install((yyvsp[-1].StrType), se);
        (yyval.StmtType) = new IterPart(se);
    }
#line 2411 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 96: /* ReverseOpt: %empty  */
#line 695 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                    { (yyval.SignType) = nullptr; }
#line 2417 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 97: /* ReverseOpt: REVERSE  */
#line 696 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                  {
        (yyval.SignType) = new OpSignNode(OpSignNode::REVERSE);
    }
#line 2425 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 98: /* BasicLoop: LOOP Statements END LOOP  */
#line 702 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                               {
        (yyval.StmtType) = new BasicLoopStmt(dynamic_cast<Stmt*>((yyvsp[-2].StmtType)));
    }
#line 2433 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 99: /* IdOpt: %empty  */
#line 708 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                 { (yyval.ExprType) = nullptr; }
#line 2439 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 100: /* IdOpt: Identifier  */
#line 709 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                     {
        SymbolEntry* se = identifiers->lookup((yyvsp[0].StrType));
        (yyval.ExprType) = new Id(se);
    }
#line 2448 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 101: /* DiscreteRange: Identifier RangeConstrOpt  */
#line 716 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                {
        SymbolEntry *se = new IdentifierSymbolEntry(TypeSystem::integerType, (yyvsp[-1].StrType), identifiers->getLevel());
        identifiers->install((yyvsp[-1].StrType), se);
        (yyval.StmtType) = new DiscreteRange(se, dynamic_cast<Range*>((yyvsp[0].StmtType)));
    }
#line 2458 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 102: /* DiscreteRange: Range  */
#line 721 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                {
        (yyval.StmtType) = new DiscreteRange(dynamic_cast<Range*>((yyvsp[0].StmtType)));
    }
#line 2466 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 103: /* RangeConstrOpt: %empty  */
#line 726 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                        { (yyval.StmtType) = nullptr; }
#line 2472 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 104: /* RangeConstrOpt: RANGE Range  */
#line 727 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                      {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 2480 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 105: /* Range: SimpleExpression DOTDOT SimpleExpression  */
#line 733 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                               {
        (yyval.StmtType) = new Range((yyvsp[-2].ExprType), (yyvsp[0].ExprType));
    }
#line 2488 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 106: /* Block: LabelOpt BlockDecl BlockBody END IdOpt SEMICOLON  */
#line 739 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                                       {
        (yyval.StmtType) = new Block(dynamic_cast<LabelOpt*>((yyvsp[-5].StmtType)), dynamic_cast<DeclItemOrBodyStmt*>((yyvsp[-4].StmtType)), dynamic_cast<Stmt*>((yyvsp[-3].StmtType)));
    }
#line 2496 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 107: /* BlockDecl: %empty  */
#line 744 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                   { (yyval.StmtType) = nullptr; }
#line 2502 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 108: /* BlockDecl: DECLARE DeclPart  */
#line 745 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                           {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 2510 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 109: /* BlockBody: BEGiN Statements  */
#line 751 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                       {
        DEBUG_YACC("================Enter BlockBody=================");
        (yyval.StmtType) = (yyvsp[0].StmtType);
        DEBUG_YACC("================Enter BlockBody=================");

    }
#line 2521 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 110: /* Expression: Relation  */
#line 760 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
               {
        (yyval.ExprType) = (yyvsp[0].ExprType);
    }
#line 2529 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 111: /* Expression: Expression Logical Relation  */
#line 763 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                      {
        (yyval.ExprType) = new BinaryExpr((yyvsp[-2].ExprType), (yyvsp[0].ExprType), (yyvsp[-1].SignType));
    }
#line 2537 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 112: /* Expression: Expression ShortCircuit Relation  */
#line 766 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                           {
        (yyval.ExprType) = new BinaryExpr((yyvsp[-2].ExprType), (yyvsp[0].ExprType), (yyvsp[-1].SignType));
    }
#line 2545 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 113: /* Logical: AND  */
#line 772 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
          {
        (yyval.SignType) = new OpSignNode(OpSignNode::AND);
    }
#line 2553 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 114: /* Logical: OR  */
#line 775 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
             {
        (yyval.SignType) = new OpSignNode(OpSignNode::OR);
    }
#line 2561 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 115: /* Logical: XOR  */
#line 778 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
              {
        (yyval.SignType) = new OpSignNode(OpSignNode::XOR);
    }
#line 2569 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 116: /* ShortCircuit: AND THEN  */
#line 784 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
               {
        (yyval.SignType) = new OpSignNode(OpSignNode::ANDTHEN);
    }
#line 2577 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 117: /* ShortCircuit: OR ELSE  */
#line 787 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                  {
        (yyval.SignType) = new OpSignNode(OpSignNode::ORELSE);
    }
#line 2585 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 118: /* Relation: SimpleExpression  */
#line 793 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                       {
        (yyval.ExprType) = (yyvsp[0].ExprType);
    }
#line 2593 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 119: /* Relation: SimpleExpression Relational SimpleExpression  */
#line 796 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                                       {
        (yyval.ExprType) = new BinaryExpr((yyvsp[-2].ExprType), (yyvsp[0].ExprType), (yyvsp[-1].SignType));
    }
#line 2601 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 120: /* Relation: SimpleExpression Membership Range  */
#line 799 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                            {
        (yyval.ExprType) = new BinaryExpr((yyvsp[-2].ExprType), dynamic_cast<Range*>((yyvsp[0].StmtType)), (yyvsp[-1].SignType));
    }
#line 2609 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 121: /* Relation: SimpleExpression Membership Identifier  */
#line 802 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                                 {
        SymbolEntry* se = new IdentifierSymbolEntry(TypeSystem::integerType, (yyvsp[0].StrType), identifiers->getLevel());
        (yyval.ExprType) = new BinaryExpr((yyvsp[-2].ExprType), se, (yyvsp[-1].SignType));
    }
#line 2618 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 122: /* Relational: EQ  */
#line 809 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
         {
        (yyval.SignType) = new OpSignNode(OpSignNode::EQ);
    }
#line 2626 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 123: /* Relational: NE  */
#line 812 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
             {
        (yyval.SignType) = new OpSignNode(OpSignNode::NE);
    }
#line 2634 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 124: /* Relational: LE  */
#line 815 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
             {
        (yyval.SignType) = new OpSignNode(OpSignNode::LE);
    }
#line 2642 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 125: /* Relational: LTEQ  */
#line 818 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
               {
        (yyval.SignType) = new OpSignNode(OpSignNode::LTEQ);
    }
#line 2650 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 126: /* Relational: GE  */
#line 821 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
             {
        (yyval.SignType) = new OpSignNode(OpSignNode::GE);
    }
#line 2658 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 127: /* Relational: GTEQ  */
#line 824 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
               {
        (yyval.SignType) = new OpSignNode(OpSignNode::GTEQ);
    }
#line 2666 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 128: /* Membership: IN  */
#line 830 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
         {
        (yyval.SignType) = new OpSignNode(OpSignNode::IN);
    }
#line 2674 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 129: /* Membership: NOT IN  */
#line 833 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                 {
        (yyval.SignType) = new OpSignNode(OpSignNode::NOTIN);
    }
#line 2682 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 130: /* SimpleExpression: Unary Term  */
#line 839 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                 {
        (yyval.ExprType) = new BinaryExpr((yyvsp[0].ExprType), (yyvsp[-1].SignType));
    }
#line 2690 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 131: /* SimpleExpression: Term  */
#line 842 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
               {
        (yyval.ExprType) = (yyvsp[0].ExprType);
    }
#line 2698 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 132: /* SimpleExpression: SimpleExpression Adding Term  */
#line 845 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                       {
        (yyval.ExprType) = new BinaryExpr((yyvsp[-2].ExprType), (yyvsp[0].ExprType), (yyvsp[-1].SignType));
    }
#line 2706 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 133: /* Unary: ADD  */
#line 851 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
          {
        (yyval.SignType) = new OpSignNode(OpSignNode::ADD);
    }
#line 2714 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 134: /* Unary: SUB  */
#line 854 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
              {
        (yyval.SignType) = new OpSignNode(OpSignNode::SUB);
    }
#line 2722 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 135: /* Adding: ADD  */
#line 860 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
          {
        (yyval.SignType) = new OpSignNode(OpSignNode::ADD);
    }
#line 2730 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 136: /* Adding: SUB  */
#line 863 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
              {
        (yyval.SignType) = new OpSignNode(OpSignNode::SUB);
    }
#line 2738 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 137: /* Adding: SINGLEAND  */
#line 866 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                    {
        (yyval.SignType) = new OpSignNode(OpSignNode::SINGLEAND);
    }
#line 2746 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 138: /* Term: Factor  */
#line 872 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
             {
        (yyval.ExprType) = (yyvsp[0].ExprType);
    }
#line 2754 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 139: /* Term: Term Multiplying Factor  */
#line 875 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                  {
        (yyval.ExprType) = new BinaryExpr((yyvsp[-2].ExprType), (yyvsp[0].ExprType), (yyvsp[-1].SignType));
    }
#line 2762 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 140: /* Multiplying: MUL  */
#line 881 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
          {
        (yyval.SignType) = new OpSignNode(OpSignNode::MUL);
    }
#line 2770 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 141: /* Multiplying: DIV  */
#line 884 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
              {
        (yyval.SignType) = new OpSignNode(OpSignNode::DIV);
    }
#line 2778 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 142: /* Multiplying: MOD  */
#line 887 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
              {
        (yyval.SignType) = new OpSignNode(OpSignNode::MOD);
    }
#line 2786 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 143: /* Multiplying: REM  */
#line 890 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
              {
        (yyval.SignType) = new OpSignNode(OpSignNode::REM);
    }
#line 2794 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 144: /* Factor: Primary  */
#line 896 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
              {
        (yyval.ExprType) = (yyvsp[0].ExprType);
    }
#line 2802 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 145: /* Factor: NOT Primary  */
#line 899 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                      {
        (yyval.ExprType) = new FactorExpr((yyvsp[0].ExprType), FactorExpr::NOT);
    }
#line 2810 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 146: /* Factor: ABS Primary  */
#line 902 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                      {
        (yyval.ExprType) = new FactorExpr((yyvsp[0].ExprType), FactorExpr::ABS);
    }
#line 2818 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 147: /* Factor: Primary EXPON Primary  */
#line 905 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                {
        (yyval.ExprType) = new BinaryExpr((yyvsp[-2].ExprType), (yyvsp[0].ExprType), new OpSignNode(OpSignNode::EXPON));
    }
#line 2826 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 148: /* Primary: Literal  */
#line 911 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
              {
        (yyval.ExprType) = (yyvsp[0].ExprType);
    }
#line 2834 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 149: /* Primary: Name  */
#line 914 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
               {
        (yyval.ExprType) = (yyvsp[0].ExprType);
    }
#line 2842 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 150: /* Primary: ParenthesizedPrimary  */
#line 917 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                               {
        (yyval.ExprType) = (yyvsp[0].ExprType);
    }
#line 2850 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 151: /* Name: Identifier  */
#line 923 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                 {
        SymbolEntry* se = identifiers->lookup((yyvsp[0].StrType));
        if(!se) {
            std::cerr << "[YACC ERROR]: Can't not get SymbolEntry "<< (yyvsp[0].StrType) << " !\n";
        }
        (yyval.ExprType) = new Id(se);
    }
#line 2862 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 152: /* Name: IndexedComp  */
#line 930 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                  {
        (yyval.ExprType) = (yyvsp[0].ExprType);
    }
#line 2870 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 153: /* Name: Attribute  */
#line 933 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                {
        (yyval.ExprType) = (yyvsp[0].ExprType);
    }
#line 2878 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 154: /* Name: INTEGER  */
#line 936 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
              {
        SymbolEntry *se = new IdentifierSymbolEntry(TypeSystem::integerType, "Integer", 0);
        globals->install("Integer", se);
        (yyval.ExprType) = new Id(se);
    }
#line 2888 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 155: /* IndexedComp: Name LPAREN Values RPAREN  */
#line 944 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                {
        (yyval.ExprType) = new Id(dynamic_cast<Id*>((yyvsp[-3].ExprType)), (yyvsp[-1].ExprType));
    }
#line 2896 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 156: /* Values: Value  */
#line 950 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
            {
        (yyval.ExprType) = (yyvsp[0].ExprType);
    }
#line 2904 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 157: /* Values: Values COMMA Value  */
#line 953 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                             {
        (yyval.ExprType) = (yyvsp[-2].ExprType);
        (yyvsp[-2].ExprType)->setNext((yyvsp[0].ExprType));
    }
#line 2913 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 158: /* Value: Expression  */
#line 960 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                 {
        (yyval.ExprType) = (yyvsp[0].ExprType);
    }
#line 2921 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 159: /* Attribute: Name TIC AttributeId  */
#line 966 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                           {
        (yyval.ExprType) = new Id(dynamic_cast<Id*>((yyvsp[-2].ExprType)), (yyvsp[0].StrType));
    }
#line 2929 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 160: /* AttributeId: Identifier  */
#line 972 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                 {
        (yyval.StrType) = (yyvsp[0].StrType);
    }
#line 2937 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 161: /* ParenthesizedPrimary: LPAREN Expression RPAREN  */
#line 978 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                               {
        (yyval.ExprType) = (yyvsp[-1].ExprType);
    }
#line 2945 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 162: /* Literal: DECIMIAL  */
#line 984 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
               {
        SymbolEntry* se = new ConstantSymbolEntry(TypeSystem::integerType, (yyvsp[0].IntType));
        (yyval.ExprType) = new Constant(se);
    }
#line 2954 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 163: /* Literal: SINGLECHAR  */
#line 988 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                 {
        SymbolEntry* se = new ConstantSymbolEntry(TypeSystem::characterType, (yyvsp[0].CharType));
        (yyval.ExprType) = new Constant(se);
    }
#line 2963 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 164: /* Literal: STRINGLITERAL  */
#line 992 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                        {
        SymbolEntry* se = new ConstantSymbolEntry(TypeSystem::stringType, (yyvsp[0].StrType));
        (yyval.ExprType) = new Constant(se);
    }
#line 2972 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 165: /* Literal: NuLL  */
#line 996 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
               {
        (yyval.ExprType) = nullptr;
    }
#line 2980 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 166: /* Literal: TRuE  */
#line 999 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
           {
        SymbolEntry* se = new ConstantSymbolEntry(TypeSystem::boolType, true);
        (yyval.ExprType) = new Constant(se);
    }
#line 2989 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 167: /* Literal: FALsE  */
#line 1003 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
            {
        SymbolEntry* se = new ConstantSymbolEntry(TypeSystem::boolType, false);
        (yyval.ExprType) = new Constant(se);
    }
#line 2998 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;


#line 3002 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"

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

#line 1008 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"


int yyerror(char const* message)
{
    std::cerr<<message<<std::endl;
    return -1;
}
