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
  YYSYMBOL_CONSTANT = 31,                  /* CONSTANT  */
  YYSYMBOL_DECLARE = 32,                   /* DECLARE  */
  YYSYMBOL_DELAY = 33,                     /* DELAY  */
  YYSYMBOL_DELTA = 34,                     /* DELTA  */
  YYSYMBOL_DIGITS = 35,                    /* DIGITS  */
  YYSYMBOL_DO = 36,                        /* DO  */
  YYSYMBOL_ELSE = 37,                      /* ELSE  */
  YYSYMBOL_ELSIF = 38,                     /* ELSIF  */
  YYSYMBOL_END = 39,                       /* END  */
  YYSYMBOL_ENTRY = 40,                     /* ENTRY  */
  YYSYMBOL_EXCEPTION = 41,                 /* EXCEPTION  */
  YYSYMBOL_EXIT = 42,                      /* EXIT  */
  YYSYMBOL_FOR = 43,                       /* FOR  */
  YYSYMBOL_FUNCTION = 44,                  /* FUNCTION  */
  YYSYMBOL_GENERIC = 45,                   /* GENERIC  */
  YYSYMBOL_GOTO = 46,                      /* GOTO  */
  YYSYMBOL_IF = 47,                        /* IF  */
  YYSYMBOL_IN = 48,                        /* IN  */
  YYSYMBOL_IS = 49,                        /* IS  */
  YYSYMBOL_LIMITED = 50,                   /* LIMITED  */
  YYSYMBOL_LOOP = 51,                      /* LOOP  */
  YYSYMBOL_MUL = 52,                       /* MUL  */
  YYSYMBOL_DIV = 53,                       /* DIV  */
  YYSYMBOL_MOD = 54,                       /* MOD  */
  YYSYMBOL_NEW = 55,                       /* NEW  */
  YYSYMBOL_NOT = 56,                       /* NOT  */
  YYSYMBOL_SUB = 57,                       /* SUB  */
  YYSYMBOL_ADD = 58,                       /* ADD  */
  YYSYMBOL_NuLL = 59,                      /* NuLL  */
  YYSYMBOL_OF = 60,                        /* OF  */
  YYSYMBOL_OR = 61,                        /* OR  */
  YYSYMBOL_OTHERS = 62,                    /* OTHERS  */
  YYSYMBOL_OUT = 63,                       /* OUT  */
  YYSYMBOL_PACKAGE = 64,                   /* PACKAGE  */
  YYSYMBOL_PRAGMA = 65,                    /* PRAGMA  */
  YYSYMBOL_PRIVATE = 66,                   /* PRIVATE  */
  YYSYMBOL_PROCEDURE = 67,                 /* PROCEDURE  */
  YYSYMBOL_PROTECTED = 68,                 /* PROTECTED  */
  YYSYMBOL_RAISE = 69,                     /* RAISE  */
  YYSYMBOL_RANGE = 70,                     /* RANGE  */
  YYSYMBOL_RECORD = 71,                    /* RECORD  */
  YYSYMBOL_REM = 72,                       /* REM  */
  YYSYMBOL_RENAMES = 73,                   /* RENAMES  */
  YYSYMBOL_REQUEUE = 74,                   /* REQUEUE  */
  YYSYMBOL_RETURN = 75,                    /* RETURN  */
  YYSYMBOL_REVERSE = 76,                   /* REVERSE  */
  YYSYMBOL_SELECT = 77,                    /* SELECT  */
  YYSYMBOL_SEPARATE = 78,                  /* SEPARATE  */
  YYSYMBOL_SUBTYPE = 79,                   /* SUBTYPE  */
  YYSYMBOL_TAGGED = 80,                    /* TAGGED  */
  YYSYMBOL_TASK = 81,                      /* TASK  */
  YYSYMBOL_TERMINATE = 82,                 /* TERMINATE  */
  YYSYMBOL_THEN = 83,                      /* THEN  */
  YYSYMBOL_TYPE = 84,                      /* TYPE  */
  YYSYMBOL_UNTIL = 85,                     /* UNTIL  */
  YYSYMBOL_USE = 86,                       /* USE  */
  YYSYMBOL_WHEN = 87,                      /* WHEN  */
  YYSYMBOL_WHILE = 88,                     /* WHILE  */
  YYSYMBOL_WITH = 89,                      /* WITH  */
  YYSYMBOL_XOR = 90,                       /* XOR  */
  YYSYMBOL_PUT_LINE = 91,                  /* PUT_LINE  */
  YYSYMBOL_PUT = 92,                       /* PUT  */
  YYSYMBOL_GET = 93,                       /* GET  */
  YYSYMBOL_TRuE = 94,                      /* TRuE  */
  YYSYMBOL_FALsE = 95,                     /* FALsE  */
  YYSYMBOL_DECIMAL = 96,                   /* DECIMAL  */
  YYSYMBOL_FLOATNUM = 97,                  /* FLOATNUM  */
  YYSYMBOL_SINGLECHAR = 98,                /* SINGLECHAR  */
  YYSYMBOL_Identifier = 99,                /* Identifier  */
  YYSYMBOL_STRINGLITERAL = 100,            /* STRINGLITERAL  */
  YYSYMBOL_PACKAGEID = 101,                /* PACKAGEID  */
  YYSYMBOL_INTEGER = 102,                  /* INTEGER  */
  YYSYMBOL_STRING = 103,                   /* STRING  */
  YYSYMBOL_NATURAL = 104,                  /* NATURAL  */
  YYSYMBOL_BOOLEAN = 105,                  /* BOOLEAN  */
  YYSYMBOL_CHARACTER = 106,                /* CHARACTER  */
  YYSYMBOL_FLOAT = 107,                    /* FLOAT  */
  YYSYMBOL_COLON = 108,                    /* COLON  */
  YYSYMBOL_SEMICOLON = 109,                /* SEMICOLON  */
  YYSYMBOL_LPAREN = 110,                   /* LPAREN  */
  YYSYMBOL_RPAREN = 111,                   /* RPAREN  */
  YYSYMBOL_COMMA = 112,                    /* COMMA  */
  YYSYMBOL_SINGLEAND = 113,                /* SINGLEAND  */
  YYSYMBOL_SINGLEOR = 114,                 /* SINGLEOR  */
  YYSYMBOL_YYACCEPT = 115,                 /* $accept  */
  YYSYMBOL_Program = 116,                  /* Program  */
  YYSYMBOL_CompUnit = 117,                 /* CompUnit  */
  YYSYMBOL_Unit = 118,                     /* Unit  */
  YYSYMBOL_PackageCall = 119,              /* PackageCall  */
  YYSYMBOL_SubprogDecl = 120,              /* SubprogDecl  */
  YYSYMBOL_SubprogSpec = 121,              /* SubprogSpec  */
  YYSYMBOL_122_1 = 122,                    /* $@1  */
  YYSYMBOL_123_2 = 123,                    /* $@2  */
  YYSYMBOL_FormalPartOpt = 124,            /* FormalPartOpt  */
  YYSYMBOL_FormalPart = 125,               /* FormalPart  */
  YYSYMBOL_Params = 126,                   /* Params  */
  YYSYMBOL_Param = 127,                    /* Param  */
  YYSYMBOL_Type = 128,                     /* Type  */
  YYSYMBOL_InitOpt = 129,                  /* InitOpt  */
  YYSYMBOL_SubprogBody = 130,              /* SubprogBody  */
  YYSYMBOL_131_3 = 131,                    /* $@3  */
  YYSYMBOL_DeclPart = 132,                 /* DeclPart  */
  YYSYMBOL_Decl = 133,                     /* Decl  */
  YYSYMBOL_TypeDecl = 134,                 /* TypeDecl  */
  YYSYMBOL_ArrayDef = 135,                 /* ArrayDef  */
  YYSYMBOL_ArrayDecl = 136,                /* ArrayDecl  */
  YYSYMBOL_ArrayInit = 137,                /* ArrayInit  */
  YYSYMBOL_ObjectDecl = 138,               /* ObjectDecl  */
  YYSYMBOL_DefIds = 139,                   /* DefIds  */
  YYSYMBOL_DefId = 140,                    /* DefId  */
  YYSYMBOL_DeclItemOrBodys = 141,          /* DeclItemOrBodys  */
  YYSYMBOL_DeclItemOrBody = 142,           /* DeclItemOrBody  */
  YYSYMBOL_Statements = 143,               /* Statements  */
  YYSYMBOL_Statement = 144,                /* Statement  */
  YYSYMBOL_SimpleStmt = 145,               /* SimpleStmt  */
  YYSYMBOL_PutStmt = 146,                  /* PutStmt  */
  YYSYMBOL_PutlineStmt = 147,              /* PutlineStmt  */
  YYSYMBOL_GetStmt = 148,                  /* GetStmt  */
  YYSYMBOL_CompoundStmt = 149,             /* CompoundStmt  */
  YYSYMBOL_NullStmt = 150,                 /* NullStmt  */
  YYSYMBOL_AssignStmt = 151,               /* AssignStmt  */
  YYSYMBOL_ReturnStmt = 152,               /* ReturnStmt  */
  YYSYMBOL_ProcedureCall = 153,            /* ProcedureCall  */
  YYSYMBOL_ExitStmt = 154,                 /* ExitStmt  */
  YYSYMBOL_WhenOpt = 155,                  /* WhenOpt  */
  YYSYMBOL_IfStmt = 156,                   /* IfStmt  */
  YYSYMBOL_CondClauses = 157,              /* CondClauses  */
  YYSYMBOL_CondClause = 158,               /* CondClause  */
  YYSYMBOL_CondPart = 159,                 /* CondPart  */
  YYSYMBOL_Condition = 160,                /* Condition  */
  YYSYMBOL_ElseOpt = 161,                  /* ElseOpt  */
  YYSYMBOL_CaseStmt = 162,                 /* CaseStmt  */
  YYSYMBOL_Alternatives = 163,             /* Alternatives  */
  YYSYMBOL_Alternative = 164,              /* Alternative  */
  YYSYMBOL_Choices = 165,                  /* Choices  */
  YYSYMBOL_Choice = 166,                   /* Choice  */
  YYSYMBOL_DiscreteWithRange = 167,        /* DiscreteWithRange  */
  YYSYMBOL_LoopStmt = 168,                 /* LoopStmt  */
  YYSYMBOL_LabelOpt = 169,                 /* LabelOpt  */
  YYSYMBOL_Iteration = 170,                /* Iteration  */
  YYSYMBOL_IterPart = 171,                 /* IterPart  */
  YYSYMBOL_ReverseOpt = 172,               /* ReverseOpt  */
  YYSYMBOL_BasicLoop = 173,                /* BasicLoop  */
  YYSYMBOL_IdOpt = 174,                    /* IdOpt  */
  YYSYMBOL_DiscreteRange = 175,            /* DiscreteRange  */
  YYSYMBOL_RangeConstrOpt = 176,           /* RangeConstrOpt  */
  YYSYMBOL_Range = 177,                    /* Range  */
  YYSYMBOL_Block = 178,                    /* Block  */
  YYSYMBOL_BlockDecl = 179,                /* BlockDecl  */
  YYSYMBOL_BlockBody = 180,                /* BlockBody  */
  YYSYMBOL_Expression = 181,               /* Expression  */
  YYSYMBOL_Logical = 182,                  /* Logical  */
  YYSYMBOL_ShortCircuit = 183,             /* ShortCircuit  */
  YYSYMBOL_Relation = 184,                 /* Relation  */
  YYSYMBOL_Relational = 185,               /* Relational  */
  YYSYMBOL_Membership = 186,               /* Membership  */
  YYSYMBOL_SimpleExpression = 187,         /* SimpleExpression  */
  YYSYMBOL_Unary = 188,                    /* Unary  */
  YYSYMBOL_Adding = 189,                   /* Adding  */
  YYSYMBOL_Term = 190,                     /* Term  */
  YYSYMBOL_Multiplying = 191,              /* Multiplying  */
  YYSYMBOL_Factor = 192,                   /* Factor  */
  YYSYMBOL_Primary = 193,                  /* Primary  */
  YYSYMBOL_Name = 194,                     /* Name  */
  YYSYMBOL_IndexedComp = 195,              /* IndexedComp  */
  YYSYMBOL_Values = 196,                   /* Values  */
  YYSYMBOL_Value = 197,                    /* Value  */
  YYSYMBOL_Attribute = 198,                /* Attribute  */
  YYSYMBOL_AttributeId = 199,              /* AttributeId  */
  YYSYMBOL_ParenthesizedPrimary = 200,     /* ParenthesizedPrimary  */
  YYSYMBOL_Literal = 201                   /* Literal  */
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
#define YYLAST   541

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  115
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  87
/* YYNRULES -- Number of rules.  */
#define YYNRULES  176
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  295

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   369


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
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   154,   154,   160,   163,   169,   172,   175,   182,   187,
     195,   207,   207,   238,   238,   274,   275,   281,   287,   290,
     296,   304,   307,   310,   313,   316,   319,   324,   325,   331,
     331,   350,   351,   358,   361,   364,   367,   373,   385,   391,
     407,   413,   424,   439,   442,   449,   457,   460,   467,   470,
     476,   479,   486,   489,   495,   498,   501,   504,   507,   510,
     513,   516,   522,   529,   535,   545,   548,   551,   554,   560,
     566,   578,   581,   587,   593,   599,   600,   606,   612,   615,
     622,   628,   634,   639,   640,   646,   652,   653,   664,   670,
     673,   680,   683,   686,   692,   697,   703,   714,   715,   722,
     726,   730,   737,   745,   746,   752,   758,   759,   766,   771,
     776,   777,   783,   790,   795,   796,   802,   811,   814,   817,
     823,   826,   829,   835,   838,   844,   847,   850,   853,   860,
     863,   866,   869,   872,   875,   881,   884,   890,   893,   896,
     902,   905,   911,   914,   917,   923,   926,   932,   935,   938,
     941,   947,   950,   953,   956,   962,   965,   968,   974,   981,
     984,   987,   992,  1000,  1006,  1009,  1016,  1022,  1028,  1034,
    1040,  1044,  1048,  1052,  1056,  1059,  1063
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
  "CASE", "CONSTANT", "DECLARE", "DELAY", "DELTA", "DIGITS", "DO", "ELSE",
  "ELSIF", "END", "ENTRY", "EXCEPTION", "EXIT", "FOR", "FUNCTION",
  "GENERIC", "GOTO", "IF", "IN", "IS", "LIMITED", "LOOP", "MUL", "DIV",
  "MOD", "NEW", "NOT", "SUB", "ADD", "NuLL", "OF", "OR", "OTHERS", "OUT",
  "PACKAGE", "PRAGMA", "PRIVATE", "PROCEDURE", "PROTECTED", "RAISE",
  "RANGE", "RECORD", "REM", "RENAMES", "REQUEUE", "RETURN", "REVERSE",
  "SELECT", "SEPARATE", "SUBTYPE", "TAGGED", "TASK", "TERMINATE", "THEN",
  "TYPE", "UNTIL", "USE", "WHEN", "WHILE", "WITH", "XOR", "PUT_LINE",
  "PUT", "GET", "TRuE", "FALsE", "DECIMAL", "FLOATNUM", "SINGLECHAR",
  "Identifier", "STRINGLITERAL", "PACKAGEID", "INTEGER", "STRING",
  "NATURAL", "BOOLEAN", "CHARACTER", "FLOAT", "COLON", "SEMICOLON",
  "LPAREN", "RPAREN", "COMMA", "SINGLEAND", "SINGLEOR", "$accept",
  "Program", "CompUnit", "Unit", "PackageCall", "SubprogDecl",
  "SubprogSpec", "$@1", "$@2", "FormalPartOpt", "FormalPart", "Params",
  "Param", "Type", "InitOpt", "SubprogBody", "$@3", "DeclPart", "Decl",
  "TypeDecl", "ArrayDef", "ArrayDecl", "ArrayInit", "ObjectDecl", "DefIds",
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

#define YYPACT_NINF (-149)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-159)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     107,   -65,   -57,   -14,   -12,    53,   107,  -149,  -149,  -149,
     -13,  -149,  -149,  -149,   -32,   -17,  -149,  -149,  -149,  -149,
       0,     0,  -149,  -149,   -24,    15,    42,  -149,  -149,    26,
    -149,  -149,  -149,    93,  -149,  -149,  -149,  -149,   -71,  -149,
     -24,  -149,    34,   -55,  -149,   185,    87,   434,   104,   399,
      47,  -149,   185,    15,  -149,  -149,  -149,  -149,  -149,  -149,
    -149,  -149,   127,   200,    56,   200,    49,   153,    50,    52,
      54,    -4,  -149,  -149,   367,  -149,  -149,  -149,  -149,  -149,
    -149,  -149,  -149,  -149,  -149,  -149,  -149,  -149,  -149,   -10,
    -149,    14,  -149,  -149,    56,   185,   143,   147,  -149,   147,
    -149,    58,    61,   421,   421,  -149,  -149,  -149,  -149,  -149,
    -149,  -149,  -149,  -149,  -149,   200,    23,  -149,   169,   292,
     148,  -149,   161,    10,  -149,  -149,  -149,    88,    28,  -149,
     434,    96,    25,  -149,  -149,     3,   200,   200,    77,   200,
    -149,  -149,   -24,    82,   200,   135,   112,    93,    90,  -149,
     200,    85,   147,    81,   200,    94,  -149,   200,  -149,  -149,
    -149,    -9,   114,  -149,   167,  -149,   200,   200,  -149,  -149,
    -149,  -149,  -149,  -149,  -149,   158,  -149,  -149,  -149,   200,
     247,   292,   148,  -149,  -149,  -149,  -149,   292,   421,   200,
      98,   434,   200,   174,   278,  -149,  -149,    41,    74,    97,
      21,  -149,   166,  -149,   434,    56,  -149,   265,   177,  -149,
    -149,    25,    22,  -149,  -149,   106,   200,   109,    25,  -149,
     111,     5,  -149,  -149,   -16,  -149,  -149,  -149,  -149,   -18,
      16,  -149,   148,  -149,  -149,  -149,  -149,   380,  -149,   181,
     120,   121,   128,  -149,  -149,   393,   130,   -21,  -149,  -149,
      56,  -149,   200,  -149,    27,  -149,   163,   200,   206,   176,
    -149,   131,  -149,  -149,  -149,   190,  -149,   200,  -149,   133,
    -149,  -149,   185,   -18,   136,  -149,   184,    -6,  -149,  -149,
    -149,    25,    92,  -149,  -149,  -149,  -149,  -149,  -149,   200,
     434,   176,  -149,   354,  -149
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     2,     3,     7,     5,
       0,     6,    13,    11,     0,     0,     1,     4,    29,    10,
      15,    15,     9,     8,    31,     0,     0,    16,    12,     0,
      45,    34,    48,     0,    49,    35,    36,    33,     0,    43,
      32,    46,     0,     0,    18,     0,     0,    97,     0,     0,
       0,    47,     0,     0,    17,    21,    25,    26,    22,    23,
      24,    14,     0,     0,   106,     0,     0,     0,     0,     0,
       0,   158,   161,   162,    97,    50,    52,    59,    60,    61,
      53,    54,    55,    56,    57,    58,    65,    66,    67,    99,
      68,     0,   159,   160,   106,     0,     0,    27,    44,    27,
      19,     0,     0,     0,     0,   141,   140,   174,   175,   176,
     170,   173,   171,   158,   172,     0,     0,   117,   125,     0,
     138,   145,   151,   156,   157,   155,   107,    75,    83,    78,
      97,     0,    82,    69,    71,     0,     0,     0,     0,     0,
      98,    51,    31,     0,     0,     0,   103,     0,     0,    73,
       0,     0,    27,     0,     0,     0,    20,     0,    37,   153,
     152,     0,   120,    86,   121,   122,     0,     0,   132,   134,
     130,   133,   131,   129,   135,     0,   143,   142,   144,     0,
       0,     0,   137,   147,   148,   149,   150,     0,     0,     0,
       0,    97,     0,     0,    97,    81,    72,     0,     0,     0,
       0,   115,     0,   100,    97,   106,   104,     0,     0,   168,
     167,   166,     0,   164,    30,     0,     0,     0,    28,    41,
       0,     0,   169,   123,     0,   124,   118,   119,   136,   126,
     128,   127,   139,   146,   154,    76,    74,    97,    79,     0,
       0,     0,     0,    70,   102,    97,     0,   158,   101,   109,
     106,   163,     0,    42,     0,    39,     0,     0,     0,     0,
      87,     0,    63,    62,    64,     0,    96,     0,   108,     0,
     165,    40,     0,   112,     0,    93,   158,     0,    89,    92,
      95,    91,   125,    77,   105,   111,   113,    38,    85,     0,
      97,     0,    94,    97,    90
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -149,  -149,  -149,   238,  -149,    38,  -149,  -149,  -149,   240,
    -149,  -149,   211,   -48,   -91,    45,  -149,   123,  -149,  -149,
    -149,  -149,  -149,  -149,  -149,   217,  -149,   228,  -124,   -72,
    -149,  -149,  -149,  -149,  -149,  -149,  -149,  -149,  -149,  -149,
    -149,  -149,  -149,    89,  -149,  -113,  -149,  -149,  -149,  -149,
    -149,   -22,  -149,  -149,  -149,  -149,  -149,  -149,  -149,   -89,
    -149,  -149,  -148,  -149,  -149,   132,   -60,  -149,  -149,   -39,
    -149,  -149,  -122,  -149,  -149,   -90,  -149,   122,   -79,   -47,
    -149,    64,    33,  -149,  -149,  -149,  -149
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     5,     6,     7,     8,    31,    10,    21,    20,    26,
      27,    43,    44,    61,   155,    32,    24,    33,    34,    35,
     102,    36,   217,    37,    38,    39,    40,    41,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
     190,    86,   128,   129,   130,   131,   193,    87,   224,   260,
     277,   278,   279,    88,    89,   145,   146,   207,   205,   127,
     248,   268,   280,    90,   147,    48,   132,   166,   167,   117,
     179,   180,   118,   119,   181,   120,   187,   121,   122,   123,
      92,   212,   213,    93,   210,   124,   125
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      91,    97,   141,   116,    99,   151,   194,   135,   156,   220,
     257,   290,   139,   148,   197,   198,   162,   148,  -114,  -158,
       1,  -158,   142,   258,   159,   160,  -158,    91,   162,   182,
    -110,   203,   231,   143,    12,   221,    18,    49,     9,   176,
     177,    50,    13,     2,     9,    11,   162,   152,   162,   267,
     162,    11,   164,    16,    53,   161,    54,   229,   221,   249,
      29,   215,   176,   177,   164,   191,   192,   237,  -158,  -158,
    -158,   259,   163,  -158,  -158,    30,   235,    22,   144,   200,
     245,   165,   164,    91,   164,   221,   164,    14,  -158,    15,
     211,   232,    23,   165,   218,   178,    19,   257,   176,   177,
     168,   169,   222,   170,   140,   171,   172,   173,   291,   234,
      25,   165,   196,   165,    42,   165,   246,    45,   178,   285,
     150,    47,   141,   149,   150,    46,  -158,   226,   227,  -158,
     243,   176,   177,   251,   252,   273,    62,   282,   271,   252,
     174,   292,    52,    94,    91,   221,    30,    91,   175,   176,
     177,     1,   240,   101,   178,   126,   211,    91,   133,   153,
     136,   269,   137,   154,   138,   141,   293,   221,   157,   282,
     158,   188,   103,   141,     2,   189,   199,   168,   169,   195,
     170,   202,   171,   172,   173,   241,   204,   178,   206,   209,
      91,   216,   211,     3,   214,   103,     4,   223,    91,   281,
     183,   184,   185,   219,   225,   178,   228,   236,   242,   104,
     105,   106,   107,   239,   244,   253,   250,   174,   255,   103,
     186,   141,   256,   272,   287,   175,   176,   177,   261,   262,
     263,   281,   104,   105,   106,   107,   274,   264,   275,   266,
     283,   284,   286,    91,    17,   288,    91,   108,   109,   110,
     111,   112,   113,   114,   289,    72,   104,   105,   106,   107,
      73,    28,   134,   115,   100,   201,   103,    98,    51,   294,
     108,   109,   110,   111,   112,   276,   114,     0,    72,   208,
     254,   238,   178,    73,   103,   270,   115,    55,    56,    57,
      58,    59,    60,     0,   108,   109,   110,   111,   112,   113,
     114,     0,    72,   104,   105,   106,   107,    73,    63,   233,
     115,   103,     0,     0,     0,   -80,   -80,   -80,     0,     0,
      64,   104,   105,   106,   107,    65,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    66,     0,     0,
       0,   108,   109,   110,   111,   112,   230,   114,   104,    72,
       0,   107,     0,    67,    73,     0,     0,   115,     0,   108,
     109,   110,   111,   112,   247,   114,     0,    72,     0,    68,
      69,    70,    73,     0,     0,   115,     0,    71,     0,     0,
      72,     0,     0,     0,    63,    73,   108,   109,   110,   111,
     112,   113,   114,   -88,    72,     0,    64,    63,     0,    73,
       0,    65,   115,     0,     0,     0,  -116,     0,     0,    64,
      63,     0,     0,    66,    65,     0,     0,     0,     0,   -84,
       0,     0,    64,    63,     0,     0,    66,    65,     0,    67,
      95,     0,   265,     0,     0,    64,     0,     0,     0,    66,
      65,   -88,    67,     0,     0,    68,    69,    70,     0,     0,
       0,     0,    66,    71,     0,    67,    72,     0,    68,    69,
      70,    73,     0,     0,    63,     0,    71,     0,    67,    72,
       0,    68,    69,    70,    73,     0,    64,     0,     0,    71,
     107,    65,    72,     0,    68,    69,    70,    73,     0,     0,
       0,     0,    71,    66,     0,    72,     0,     0,    96,     0,
      73,    55,    56,    57,    58,    59,    60,     0,     0,    67,
       0,     0,     0,     0,     0,   108,   109,   110,   111,   112,
     113,   114,     0,    72,     0,    68,    69,    70,    73,     0,
       0,   115,     0,    71,     0,     0,    72,     0,     0,     0,
       0,    73
};

static const yytype_int16 yycheck[] =
{
      47,    49,    74,    63,    52,    94,   130,    67,    99,   157,
       5,    17,    16,     3,   136,   137,    25,     3,    28,     3,
      44,     5,    32,    39,   103,   104,    10,    74,    25,   119,
      51,   144,   180,    43,    99,   157,    49,   108,     0,    57,
      58,   112,    99,    67,     6,     0,    25,    95,    25,    70,
      25,     6,    61,     0,   109,   115,   111,   179,   180,   207,
      84,   152,    57,    58,    61,    37,    38,   191,    52,    53,
      54,    87,    49,    57,    58,    99,   189,   109,    88,   139,
     204,    90,    61,   130,    61,   207,    61,   101,    72,   101,
     150,   181,   109,    90,   154,   113,   109,     5,    57,    58,
       8,     9,   111,    11,   108,    13,    14,    15,   114,   188,
     110,    90,   109,    90,    99,    90,   205,    75,   113,   267,
     110,    28,   194,   109,   110,    99,   110,   166,   167,   113,
     109,    57,    58,   111,   112,   257,    49,   259,   111,   112,
      48,   289,   108,    39,   191,   267,    99,   194,    56,    57,
      58,    44,   111,    26,   113,    99,   216,   204,   109,    16,
     110,   250,   110,    16,   110,   237,   290,   289,   110,   291,
     109,    10,    19,   245,    67,    87,    99,     8,     9,    83,
      11,    99,    13,    14,    15,   111,    51,   113,    76,    99,
     237,   110,   252,    86,   109,    19,    89,    83,   245,   259,
      52,    53,    54,   109,    37,   113,    48,   109,   111,    56,
      57,    58,    59,    39,    48,   109,    39,    48,   109,    19,
      72,   293,   111,    60,   272,    56,    57,    58,    47,   109,
     109,   291,    56,    57,    58,    59,    30,   109,    62,   109,
     109,    51,   109,   290,     6,   109,   293,    94,    95,    96,
      97,    98,    99,   100,    70,   102,    56,    57,    58,    59,
     107,    21,   109,   110,    53,   142,    19,    50,    40,   291,
      94,    95,    96,    97,    98,    99,   100,    -1,   102,   147,
     216,   192,   113,   107,    19,   252,   110,   102,   103,   104,
     105,   106,   107,    -1,    94,    95,    96,    97,    98,    99,
     100,    -1,   102,    56,    57,    58,    59,   107,    30,   187,
     110,    19,    -1,    -1,    -1,    37,    38,    39,    -1,    -1,
      42,    56,    57,    58,    59,    47,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,    -1,    -1,
      -1,    94,    95,    96,    97,    98,    99,   100,    56,   102,
      -1,    59,    -1,    75,   107,    -1,    -1,   110,    -1,    94,
      95,    96,    97,    98,    99,   100,    -1,   102,    -1,    91,
      92,    93,   107,    -1,    -1,   110,    -1,    99,    -1,    -1,
     102,    -1,    -1,    -1,    30,   107,    94,    95,    96,    97,
      98,    99,   100,    39,   102,    -1,    42,    30,    -1,   107,
      -1,    47,   110,    -1,    -1,    -1,    39,    -1,    -1,    42,
      30,    -1,    -1,    59,    47,    -1,    -1,    -1,    -1,    39,
      -1,    -1,    42,    30,    -1,    -1,    59,    47,    -1,    75,
      31,    -1,    39,    -1,    -1,    42,    -1,    -1,    -1,    59,
      47,    87,    75,    -1,    -1,    91,    92,    93,    -1,    -1,
      -1,    -1,    59,    99,    -1,    75,   102,    -1,    91,    92,
      93,   107,    -1,    -1,    30,    -1,    99,    -1,    75,   102,
      -1,    91,    92,    93,   107,    -1,    42,    -1,    -1,    99,
      59,    47,   102,    -1,    91,    92,    93,   107,    -1,    -1,
      -1,    -1,    99,    59,    -1,   102,    -1,    -1,    99,    -1,
     107,   102,   103,   104,   105,   106,   107,    -1,    -1,    75,
      -1,    -1,    -1,    -1,    -1,    94,    95,    96,    97,    98,
      99,   100,    -1,   102,    -1,    91,    92,    93,   107,    -1,
      -1,   110,    -1,    99,    -1,    -1,   102,    -1,    -1,    -1,
      -1,   107
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    44,    67,    86,    89,   116,   117,   118,   119,   120,
     121,   130,    99,    99,   101,   101,     0,   118,    49,   109,
     123,   122,   109,   109,   131,   110,   124,   125,   124,    84,
      99,   120,   130,   132,   133,   134,   136,   138,   139,   140,
     141,   142,    99,   126,   127,    75,    99,    28,   180,   108,
     112,   142,   108,   109,   111,   102,   103,   104,   105,   106,
     107,   128,    49,    30,    42,    47,    59,    75,    91,    92,
      93,    99,   102,   107,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   156,   162,   168,   169,
     178,   194,   195,   198,    39,    31,    99,   128,   140,   128,
     127,    26,   135,    19,    56,    57,    58,    59,    94,    95,
      96,    97,    98,    99,   100,   110,   181,   184,   187,   188,
     190,   192,   193,   194,   200,   201,    99,   174,   157,   158,
     159,   160,   181,   109,   109,   181,   110,   110,   110,    16,
     108,   144,    32,    43,    88,   170,   171,   179,     3,   109,
     110,   174,   128,    16,    16,   129,   129,   110,   109,   193,
     193,   181,    25,    49,    61,    90,   182,   183,     8,     9,
      11,    13,    14,    15,    48,    56,    57,    58,   113,   185,
     186,   189,   190,    52,    53,    54,    72,   191,    10,    87,
     155,    37,    38,   161,   143,    83,   109,   187,   187,    99,
     181,   132,    99,   160,    51,   173,    76,   172,   180,    99,
     199,   181,   196,   197,   109,   129,   110,   137,   181,   109,
     177,   187,   111,    83,   163,    37,   184,   184,    48,   187,
      99,   177,   190,   192,   193,   160,   109,   143,   158,    39,
     111,   111,   111,   109,    48,   143,   174,    99,   175,   177,
      39,   111,   112,   109,   196,   109,   111,     5,    39,    87,
     164,    47,   109,   109,   109,    39,   109,    70,   176,   174,
     197,   111,    60,   187,    30,    62,    99,   165,   166,   167,
     177,   181,   187,   109,    51,   177,   109,   128,   109,    70,
      17,   114,   177,   143,   166
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,   115,   116,   117,   117,   118,   118,   118,   119,   119,
     120,   122,   121,   123,   121,   124,   124,   125,   126,   126,
     127,   128,   128,   128,   128,   128,   128,   129,   129,   131,
     130,   132,   132,   133,   133,   133,   133,   134,   135,   136,
     137,   138,   138,   139,   139,   140,   141,   141,   142,   142,
     143,   143,   144,   144,   145,   145,   145,   145,   145,   145,
     145,   145,   146,   147,   148,   149,   149,   149,   149,   150,
     151,   152,   152,   153,   154,   155,   155,   156,   157,   157,
     158,   159,   160,   161,   161,   162,   163,   163,   164,   165,
     165,   166,   166,   166,   167,   167,   168,   169,   169,   170,
     170,   170,   171,   172,   172,   173,   174,   174,   175,   175,
     176,   176,   177,   178,   179,   179,   180,   181,   181,   181,
     182,   182,   182,   183,   183,   184,   184,   184,   184,   185,
     185,   185,   185,   185,   185,   186,   186,   187,   187,   187,
     188,   188,   189,   189,   189,   190,   190,   191,   191,   191,
     191,   192,   192,   192,   192,   193,   193,   193,   194,   194,
     194,   194,   194,   195,   196,   196,   197,   198,   199,   200,
     201,   201,   201,   201,   201,   201,   201
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     1,     3,     3,
       2,     0,     4,     0,     6,     0,     1,     3,     1,     3,
       4,     1,     1,     1,     1,     1,     1,     0,     2,     0,
       8,     0,     1,     1,     1,     1,     1,     5,     6,     6,
       3,     5,     6,     1,     3,     1,     1,     2,     1,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     5,     5,     5,     1,     1,     1,     1,     2,
       4,     2,     3,     2,     4,     0,     2,     6,     1,     3,
       2,     2,     1,     0,     2,     7,     0,     2,     4,     1,
       3,     1,     1,     1,     3,     1,     5,     0,     2,     0,
       2,     3,     3,     0,     1,     4,     0,     1,     2,     1,
       0,     2,     3,     6,     0,     2,     2,     1,     3,     3,
       1,     1,     1,     2,     2,     1,     3,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     1,     3,
       1,     1,     1,     1,     1,     1,     3,     1,     1,     1,
       1,     1,     2,     2,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     1,     3,     1,     3,     1,     3,
       1,     1,     1,     1,     1,     1,     1
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
#line 154 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
               {
        ast.setRoot((yyvsp[0].StmtType));
    }
#line 1577 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 3: /* CompUnit: Unit  */
#line 160 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
           {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 1585 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 4: /* CompUnit: CompUnit Unit  */
#line 163 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                    {
        (yyval.StmtType) = new SeqNode((yyvsp[-1].StmtType), (yyvsp[0].StmtType));
    }
#line 1593 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 5: /* Unit: SubprogDecl  */
#line 169 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                  {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 1601 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 6: /* Unit: SubprogBody  */
#line 172 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                      {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 1609 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 7: /* Unit: PackageCall  */
#line 175 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                  {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 1617 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 8: /* PackageCall: WITH PACKAGEID SEMICOLON  */
#line 182 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                               {
        DEBUG_YACC("================Enter PackageCall=================");
        (yyval.StmtType) = new PackageCall((yyvsp[-1].StrType));
        DEBUG_YACC("================Leave PackageCall=================");
    }
#line 1627 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 9: /* PackageCall: USE PACKAGEID SEMICOLON  */
#line 187 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                              {
        DEBUG_YACC("================Enter PackageCall=================");
        (yyval.StmtType) = new PackageCall((yyvsp[-1].StrType));
        DEBUG_YACC("================Leave PackageCall=================");
    }
#line 1637 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 10: /* SubprogDecl: SubprogSpec SEMICOLON  */
#line 195 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                            {
        DEBUG_YACC("================Enter SubprogDecl=================");
        (yyval.StmtType) = new ProcedureDecl(dynamic_cast<ProcedureSpec*>((yyvsp[-1].StmtType)));

        SymbolTable* ScopeTable = identifiers;
        identifiers = identifiers->getPrev();
        delete ScopeTable;
        DEBUG_YACC("================Leave SubprogDecl=================");
    }
#line 1651 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 11: /* $@1: %empty  */
#line 207 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
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
#line 1667 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 12: /* SubprogSpec: PROCEDURE Identifier $@1 FormalPartOpt  */
#line 217 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
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
#line 1693 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 13: /* $@2: %empty  */
#line 238 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
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
#line 1709 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 14: /* SubprogSpec: FUNCTION Identifier $@2 FormalPartOpt RETURN Type  */
#line 248 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
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
#line 1737 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 15: /* FormalPartOpt: %empty  */
#line 274 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
             { (yyval.StmtType) = nullptr; }
#line 1743 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 16: /* FormalPartOpt: FormalPart  */
#line 275 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                     {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 1751 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 17: /* FormalPart: LPAREN Params RPAREN  */
#line 281 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                           {
        (yyval.StmtType) = (yyvsp[-1].StmtType);
    }
#line 1759 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 18: /* Params: Param  */
#line 287 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
            {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 1767 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 19: /* Params: Params SEMICOLON Param  */
#line 290 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                 {
        (yyval.StmtType) = (yyvsp[-2].StmtType);
        (yyvsp[-2].StmtType)->setNext((yyvsp[0].StmtType));
    }
#line 1776 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 20: /* Param: Identifier COLON Type InitOpt  */
#line 296 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                      {
        SymbolEntry *se = new IdentifierSymbolEntry((yyvsp[-1].type), (yyvsp[-3].StrType), IdentifierSymbolEntry::PARAM);
        identifiers->install((yyvsp[-3].StrType), se);
        (yyval.StmtType) = new ParamNode(se, dynamic_cast<InitOptStmt*>((yyvsp[0].StmtType)));
    }
#line 1786 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 21: /* Type: INTEGER  */
#line 304 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
              {
        (yyval.type) = TypeSystem::integerType;
    }
#line 1794 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 22: /* Type: BOOLEAN  */
#line 307 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
              {
        (yyval.type) = TypeSystem::boolType;
    }
#line 1802 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 23: /* Type: CHARACTER  */
#line 310 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                {
         (yyval.type) = TypeSystem::characterType;
    }
#line 1810 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 24: /* Type: FLOAT  */
#line 313 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
            {
        (yyval.type) = TypeSystem::floatType;
    }
#line 1818 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 25: /* Type: STRING  */
#line 316 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
             {
        (yyval.type) = TypeSystem::stringType;
    }
#line 1826 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 26: /* Type: NATURAL  */
#line 319 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
              {
        (yyval.type) = TypeSystem::naturalType;
    }
#line 1834 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 27: /* InitOpt: %empty  */
#line 324 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                 { (yyval.StmtType) = nullptr; }
#line 1840 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 28: /* InitOpt: ASSIGN Expression  */
#line 325 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                            {
        (yyval.StmtType) = new InitOptStmt((yyvsp[0].ExprType));
    }
#line 1848 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 29: /* $@3: %empty  */
#line 331 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                     {
        DEBUG_YACC("================Enter SubprogBody=================");
        // Enter into new scope.
        identifiers = new SymbolTable(identifiers);
        procedureIters.push_back(dynamic_cast<ProcedureSpec*>((yyvsp[-1].StmtType)));
    }
#line 1859 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 30: /* SubprogBody: SubprogSpec IS $@3 DeclPart BlockBody END IdOpt SEMICOLON  */
#line 336 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
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
#line 1876 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 31: /* DeclPart: %empty  */
#line 350 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                 { (yyval.StmtType) = nullptr; }
#line 1882 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 32: /* DeclPart: DeclItemOrBodys  */
#line 351 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                          {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 1890 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 33: /* Decl: ObjectDecl  */
#line 358 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
               {
        (yyval.StmtType) = new DeclStmt(dynamic_cast<ObjectDeclStmt*>((yyvsp[0].StmtType)));
    }
#line 1898 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 34: /* Decl: SubprogDecl  */
#line 361 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                  {
        // $$ = new DeclStmt(dynamic_cast<ProcedureDecl*>($1));
    }
#line 1906 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 35: /* Decl: TypeDecl  */
#line 364 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
               {
        (yyval.StmtType) = new DeclStmt(dynamic_cast<TypeDecl*>((yyvsp[0].StmtType)));
    }
#line 1914 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 36: /* Decl: ArrayDecl  */
#line 367 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                {
        (yyval.StmtType) = new DeclStmt(dynamic_cast<ArrayDecl*>((yyvsp[0].StmtType)));
    }
#line 1922 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 37: /* TypeDecl: TYPE Identifier IS ArrayDef SEMICOLON  */
#line 373 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                           {
        ArrayDef *arraydef = dynamic_cast<ArrayDef *>((yyvsp[-1].ExprType));
        Type *arraytype = arraydef->getType();
        int offset = arraydef->getOffset();
        SymbolEntry *se = new IdentifierSymbolEntry(arraytype, (yyvsp[-3].StrType), identifiers->getLevel());
        dynamic_cast<IdentifierSymbolEntry *>(se)->setOffset(offset);
        identifiers->install((yyvsp[-3].StrType), se);
        (yyval.StmtType) = new TypeDecl((yyvsp[-1].ExprType), se);
    }
#line 1936 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 38: /* ArrayDef: ARRAY LPAREN Range RPAREN OF Type  */
#line 385 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                        {
        (yyval.ExprType) = new ArrayDef(dynamic_cast<Range*>((yyvsp[-3].StmtType)), (yyvsp[0].type));
    }
#line 1944 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 39: /* ArrayDecl: DefIds COLON Identifier ASSIGN ArrayInit SEMICOLON  */
#line 391 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                                         {
        SymbolEntry* se = identifiers->lookup((yyvsp[-3].StrType));
        if (!se) {
            std::cerr << "[YACC ERROR]: Can't not get symbolEntry: " << (yyvsp[-3].StrType) << "\n";
        }
        Type *elementtype = dynamic_cast<IdentifierSymbolEntry*>(se)->getType();
        DefId* id = dynamic_cast<DefId*>((yyvsp[-5].StmtType));
        while(id) {
            id->setType(elementtype);
            id = dynamic_cast<DefId*>(id->getNext());
        }
        (yyval.StmtType) = new ArrayDecl(dynamic_cast<DefId*>((yyvsp[-5].StmtType)), se, (yyvsp[-1].ExprType));
    }
#line 1962 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 40: /* ArrayInit: LPAREN Values RPAREN  */
#line 407 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                           {
        (yyval.ExprType) = new ArrayInit((yyvsp[-1].ExprType));
    }
#line 1970 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 41: /* ObjectDecl: DefIds COLON Type InitOpt SEMICOLON  */
#line 413 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
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
#line 1986 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 42: /* ObjectDecl: DefIds COLON CONSTANT Type InitOpt SEMICOLON  */
#line 424 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
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
#line 2003 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 43: /* DefIds: DefId  */
#line 439 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
            {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 2011 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 44: /* DefIds: DefIds COMMA DefId  */
#line 442 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                         {
        (yyval.StmtType) = (yyvsp[-2].StmtType);
        (yyvsp[-2].StmtType)->setNext((yyvsp[0].StmtType));
    }
#line 2020 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 45: /* DefId: Identifier  */
#line 449 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                 {
        IdentifierSymbolEntry *se = new IdentifierSymbolEntry((yyvsp[0].StrType), identifiers->getLevel());
        identifiers->install((yyvsp[0].StrType), se);
        (yyval.StmtType) = new DefId(se);
    }
#line 2030 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 46: /* DeclItemOrBodys: DeclItemOrBody  */
#line 457 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                     {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 2038 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 47: /* DeclItemOrBodys: DeclItemOrBodys DeclItemOrBody  */
#line 460 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                         {
        (yyval.StmtType) = (yyvsp[-1].StmtType);
        (yyvsp[-1].StmtType)->setNext((yyvsp[0].StmtType));
    }
#line 2047 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 48: /* DeclItemOrBody: SubprogBody  */
#line 467 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                  {
        (yyval.StmtType) = new DeclItemOrBodyStmt(dynamic_cast<ProcedureDef*>((yyvsp[0].StmtType)));
    }
#line 2055 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 49: /* DeclItemOrBody: Decl  */
#line 470 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
               {
        (yyval.StmtType) = new DeclItemOrBodyStmt(dynamic_cast<DeclStmt*>((yyvsp[0].StmtType)));
    }
#line 2063 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 50: /* Statements: Statement  */
#line 476 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 2071 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 51: /* Statements: Statements Statement  */
#line 479 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                               {
        (yyval.StmtType) = (yyvsp[-1].StmtType);
        (yyvsp[-1].StmtType)->setNext((yyvsp[0].StmtType));
    }
#line 2080 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 52: /* Statement: SimpleStmt  */
#line 486 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                 {
        (yyval.StmtType) = new Stmt((yyvsp[0].StmtType));
    }
#line 2088 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 53: /* Statement: CompoundStmt  */
#line 489 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                       {
        (yyval.StmtType) = new Stmt((yyvsp[0].StmtType));
    }
#line 2096 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 54: /* SimpleStmt: NullStmt  */
#line 495 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
               {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 2104 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 55: /* SimpleStmt: AssignStmt  */
#line 498 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                     {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 2112 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 56: /* SimpleStmt: ReturnStmt  */
#line 501 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                     {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 2120 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 57: /* SimpleStmt: ProcedureCall  */
#line 504 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                        {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 2128 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 58: /* SimpleStmt: ExitStmt  */
#line 507 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
               {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 2136 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 59: /* SimpleStmt: PutStmt  */
#line 510 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
              {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 2144 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 60: /* SimpleStmt: PutlineStmt  */
#line 513 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                  {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 2152 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 61: /* SimpleStmt: GetStmt  */
#line 516 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
              {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 2160 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 62: /* PutStmt: PUT LPAREN SimpleExpression RPAREN SEMICOLON  */
#line 522 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                                   {
        (yyval.StmtType) = new PutStmt((yyvsp[-2].ExprType));
    }
#line 2168 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 63: /* PutlineStmt: PUT_LINE LPAREN SimpleExpression RPAREN SEMICOLON  */
#line 529 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                                        {
        (yyval.StmtType) = new PutlineStmt((yyvsp[-2].ExprType));
    }
#line 2176 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 64: /* GetStmt: GET LPAREN Identifier RPAREN SEMICOLON  */
#line 535 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                             {
        IdentifierSymbolEntry *se = dynamic_cast<IdentifierSymbolEntry*>(identifiers->lookup((yyvsp[-2].StrType)));            
        if(!se) {
            std::cerr << "[YACC ERROR]: Can't not get symbolEntry: "<< (yyvsp[-2].StrType) << "\n";
        }
        (yyval.StmtType) = new GetStmt(se);
    }
#line 2188 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 65: /* CompoundStmt: IfStmt  */
#line 545 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
             {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 2196 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 66: /* CompoundStmt: CaseStmt  */
#line 548 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                   {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 2204 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 67: /* CompoundStmt: LoopStmt  */
#line 551 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                   {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 2212 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 68: /* CompoundStmt: Block  */
#line 554 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 2220 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 69: /* NullStmt: NuLL SEMICOLON  */
#line 560 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                     {
        (yyval.StmtType) = new NullStmt();
    }
#line 2228 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 70: /* AssignStmt: Identifier ASSIGN Expression SEMICOLON  */
#line 566 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                             {
        DEBUG_YACC("================Enter AssignStmt=================");
        SymbolEntry *se = identifiers->lookup((yyvsp[-3].StrType));
        if(!se) {
            std::cerr << "[YACC ERROR]: Can't not get symbolEntry: "<< (yyvsp[-3].StrType) << "\n";
        }
        (yyval.StmtType) = new AssignStmt(se, (yyvsp[-1].ExprType));
        DEBUG_YACC("================Leave AssignStmt=================");
    }
#line 2242 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 71: /* ReturnStmt: RETURN SEMICOLON  */
#line 578 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                       {
        (yyval.StmtType) = new ReturnStmt(nullptr);
    }
#line 2250 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 72: /* ReturnStmt: RETURN Expression SEMICOLON  */
#line 581 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                      {
        (yyval.StmtType) = new ReturnStmt((yyvsp[-1].ExprType));
    }
#line 2258 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 73: /* ProcedureCall: Name SEMICOLON  */
#line 587 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                     {
        (yyval.StmtType) = new CallStmt(dynamic_cast<Id*>((yyvsp[-1].ExprType)));
    }
#line 2266 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 74: /* ExitStmt: EXIT IdOpt WhenOpt SEMICOLON  */
#line 593 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                   {
        (yyval.StmtType) = new ExitStmt((yyvsp[-1].ExprType));
    }
#line 2274 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 75: /* WhenOpt: %empty  */
#line 599 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
             { (yyval.ExprType) = nullptr; }
#line 2280 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 76: /* WhenOpt: WHEN Condition  */
#line 600 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                         {
        (yyval.ExprType) = (yyvsp[0].ExprType);
    }
#line 2288 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 77: /* IfStmt: IF CondClauses ElseOpt END IF SEMICOLON  */
#line 606 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                              {
        (yyval.StmtType) = new IfStmt(dynamic_cast<CondClause*>((yyvsp[-4].StmtType)), dynamic_cast<Stmt*>((yyvsp[-3].StmtType)));
    }
#line 2296 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 78: /* CondClauses: CondClause  */
#line 612 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                 {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 2304 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 79: /* CondClauses: CondClauses ELSIF CondClause  */
#line 615 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                       {
        (yyval.StmtType) = (yyvsp[-2].StmtType);
        (yyvsp[-2].StmtType)->setNext((yyvsp[0].StmtType));
    }
#line 2313 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 80: /* CondClause: CondPart Statements  */
#line 622 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                          {
        (yyval.StmtType) = new CondClause((yyvsp[-1].ExprType), dynamic_cast<Stmt*>((yyvsp[0].StmtType)));
    }
#line 2321 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 81: /* CondPart: Condition THEN  */
#line 628 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                     {
        (yyval.ExprType) = (yyvsp[-1].ExprType);
    }
#line 2329 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 82: /* Condition: Expression  */
#line 634 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                 {
        (yyval.ExprType) = (yyvsp[0].ExprType); 
    }
#line 2337 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 83: /* ElseOpt: %empty  */
#line 639 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                 { (yyval.StmtType) = nullptr; }
#line 2343 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 84: /* ElseOpt: ELSE Statements  */
#line 640 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                          {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 2351 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 85: /* CaseStmt: CASE Expression IS Alternatives END CASE SEMICOLON  */
#line 646 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                                         {
        (yyval.StmtType) = new CaseStmt((yyvsp[-5].ExprType), dynamic_cast<Alternative*>((yyvsp[-3].StmtType)));
    }
#line 2359 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 86: /* Alternatives: %empty  */
#line 652 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
             { (yyval.StmtType) = nullptr; }
#line 2365 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 87: /* Alternatives: Alternatives Alternative  */
#line 653 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                   {
        if((yyvsp[-1].StmtType)) {
            (yyval.StmtType) = (yyvsp[-1].StmtType);
            (yyvsp[-1].StmtType)->setNext((yyvsp[0].StmtType));
        } else {
            (yyval.StmtType) = (yyvsp[0].StmtType);
        }
    }
#line 2378 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 88: /* Alternative: WHEN Choices RIGHTSHAFT Statements  */
#line 664 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                         {
        (yyval.StmtType) = new Alternative(dynamic_cast<Choice*>((yyvsp[-2].StmtType)), dynamic_cast<Stmt*>((yyvsp[0].StmtType)));
    }
#line 2386 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 89: /* Choices: Choice  */
#line 670 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
             {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 2394 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 90: /* Choices: Choices SINGLEOR Choice  */
#line 673 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                  {
        (yyval.StmtType) = (yyvsp[-2].StmtType);
        (yyvsp[-2].StmtType)->setNext((yyvsp[0].StmtType));
    }
#line 2403 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 91: /* Choice: Expression  */
#line 680 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                 {
        (yyval.StmtType) = new Choice((yyvsp[0].ExprType));
    }
#line 2411 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 92: /* Choice: DiscreteWithRange  */
#line 683 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                            {
        (yyval.StmtType) = new Choice(dynamic_cast<DiscreteRange*>((yyvsp[0].StmtType)));
    }
#line 2419 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 93: /* Choice: OTHERS  */
#line 686 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                 {
        (yyval.StmtType) = new Choice(true);
    }
#line 2427 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 94: /* DiscreteWithRange: Identifier RANGE Range  */
#line 692 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                             {
        Type* type = dynamic_cast<Range*>((yyvsp[0].StmtType))->getType();
        SymbolEntry* se = new IdentifierSymbolEntry(type, (yyvsp[-2].StrType), identifiers->getLevel());
        (yyval.StmtType) = new DiscreteRange(se, dynamic_cast<Range*>((yyvsp[0].StmtType)));
    }
#line 2437 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 95: /* DiscreteWithRange: Range  */
#line 697 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                {
        (yyval.StmtType) = new DiscreteRange(dynamic_cast<Range*>((yyvsp[0].StmtType)));
    }
#line 2445 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 96: /* LoopStmt: LabelOpt Iteration BasicLoop IdOpt SEMICOLON  */
#line 703 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                                   {
        (yyval.StmtType) = new LoopStmt(dynamic_cast<LabelOpt*>((yyvsp[-4].StmtType)), dynamic_cast<Iteration*>((yyvsp[-3].StmtType)), dynamic_cast<BasicLoopStmt*>((yyvsp[-2].StmtType)));
        if(!whileIters.empty() && whileIters.back()) {
            SymbolTable* ScopeTable = identifiers;
            identifiers = identifiers->getPrev();
            delete ScopeTable;
        }
        whileIters.pop_back();
    }
#line 2459 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 97: /* LabelOpt: %empty  */
#line 714 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                  { (yyval.StmtType) = nullptr; }
#line 2465 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 98: /* LabelOpt: Identifier COLON  */
#line 715 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                           {
        SymbolEntry *se = new IdentifierSymbolEntry(TypeSystem::integerType, (yyvsp[-1].StrType), identifiers->getLevel());
        identifiers->install((yyvsp[-1].StrType), se);
        (yyval.StmtType) = new LabelOpt(se);
    }
#line 2475 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 99: /* Iteration: %empty  */
#line 722 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                   {
        whileIters.push_back(false);
        (yyval.StmtType) = nullptr; 
    }
#line 2484 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 100: /* Iteration: WHILE Condition  */
#line 726 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                          {
        (yyval.StmtType) = new Iteration((yyvsp[0].ExprType));
        whileIters.push_back(false);
    }
#line 2493 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 101: /* Iteration: IterPart ReverseOpt DiscreteRange  */
#line 730 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                            {
        (yyval.StmtType) = new Iteration(dynamic_cast<IterPart*>((yyvsp[-2].StmtType)), (yyvsp[-1].SignType), dynamic_cast<DiscreteRange*>((yyvsp[0].StmtType)));
        whileIters.push_back(true);
    }
#line 2502 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 102: /* IterPart: FOR Identifier IN  */
#line 737 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                        {
        identifiers = new SymbolTable(identifiers);
        SymbolEntry *se = new IdentifierSymbolEntry(TypeSystem::integerType, (yyvsp[-1].StrType), identifiers->getLevel());
        identifiers->install((yyvsp[-1].StrType), se);
        (yyval.StmtType) = new IterPart(se);
    }
#line 2513 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 103: /* ReverseOpt: %empty  */
#line 745 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                    { (yyval.SignType) = nullptr; }
#line 2519 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 104: /* ReverseOpt: REVERSE  */
#line 746 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                  {
        (yyval.SignType) = new OpSignNode(OpSignNode::REVERSE);
    }
#line 2527 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 105: /* BasicLoop: LOOP Statements END LOOP  */
#line 752 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                               {
        (yyval.StmtType) = new BasicLoopStmt(dynamic_cast<Stmt*>((yyvsp[-2].StmtType)));
    }
#line 2535 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 106: /* IdOpt: %empty  */
#line 758 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                 { (yyval.ExprType) = nullptr; }
#line 2541 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 107: /* IdOpt: Identifier  */
#line 759 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                     {
        SymbolEntry* se = identifiers->lookup((yyvsp[0].StrType));
        (yyval.ExprType) = new Id(se);
    }
#line 2550 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 108: /* DiscreteRange: Identifier RangeConstrOpt  */
#line 766 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                {
        SymbolEntry *se = new IdentifierSymbolEntry(TypeSystem::integerType, (yyvsp[-1].StrType), identifiers->getLevel());
        identifiers->install((yyvsp[-1].StrType), se);
        (yyval.StmtType) = new DiscreteRange(se, dynamic_cast<Range*>((yyvsp[0].StmtType)));
    }
#line 2560 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 109: /* DiscreteRange: Range  */
#line 771 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                {
        (yyval.StmtType) = new DiscreteRange(dynamic_cast<Range*>((yyvsp[0].StmtType)));
    }
#line 2568 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 110: /* RangeConstrOpt: %empty  */
#line 776 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                        { (yyval.StmtType) = nullptr; }
#line 2574 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 111: /* RangeConstrOpt: RANGE Range  */
#line 777 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                      {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 2582 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 112: /* Range: SimpleExpression DOTDOT SimpleExpression  */
#line 783 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                               {

        (yyval.StmtType) = new Range((yyvsp[-2].ExprType), (yyvsp[0].ExprType));
    }
#line 2591 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 113: /* Block: LabelOpt BlockDecl BlockBody END IdOpt SEMICOLON  */
#line 790 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                                       {
        (yyval.StmtType) = new Block(dynamic_cast<LabelOpt*>((yyvsp[-5].StmtType)), dynamic_cast<DeclItemOrBodyStmt*>((yyvsp[-4].StmtType)), dynamic_cast<Stmt*>((yyvsp[-3].StmtType)));
    }
#line 2599 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 114: /* BlockDecl: %empty  */
#line 795 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                   { (yyval.StmtType) = nullptr; }
#line 2605 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 115: /* BlockDecl: DECLARE DeclPart  */
#line 796 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                           {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 2613 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 116: /* BlockBody: BEGiN Statements  */
#line 802 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                       {
        DEBUG_YACC("================Enter BlockBody=================");
        (yyval.StmtType) = (yyvsp[0].StmtType);
        DEBUG_YACC("================Enter BlockBody=================");

    }
#line 2624 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 117: /* Expression: Relation  */
#line 811 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
               {
        (yyval.ExprType) = (yyvsp[0].ExprType);
    }
#line 2632 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 118: /* Expression: Expression Logical Relation  */
#line 814 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                      {
        (yyval.ExprType) = new BinaryExpr((yyvsp[-2].ExprType), (yyvsp[0].ExprType), (yyvsp[-1].SignType));
    }
#line 2640 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 119: /* Expression: Expression ShortCircuit Relation  */
#line 817 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                           {
        (yyval.ExprType) = new BinaryExpr((yyvsp[-2].ExprType), (yyvsp[0].ExprType), (yyvsp[-1].SignType));
    }
#line 2648 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 120: /* Logical: AND  */
#line 823 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
          {
        (yyval.SignType) = new OpSignNode(OpSignNode::AND);
    }
#line 2656 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 121: /* Logical: OR  */
#line 826 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
             {
        (yyval.SignType) = new OpSignNode(OpSignNode::OR);
    }
#line 2664 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 122: /* Logical: XOR  */
#line 829 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
              {
        (yyval.SignType) = new OpSignNode(OpSignNode::XOR);
    }
#line 2672 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 123: /* ShortCircuit: AND THEN  */
#line 835 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
               {
        (yyval.SignType) = new OpSignNode(OpSignNode::ANDTHEN);
    }
#line 2680 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 124: /* ShortCircuit: OR ELSE  */
#line 838 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                  {
        (yyval.SignType) = new OpSignNode(OpSignNode::ORELSE);
    }
#line 2688 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 125: /* Relation: SimpleExpression  */
#line 844 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                       {
        (yyval.ExprType) = (yyvsp[0].ExprType);
    }
#line 2696 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 126: /* Relation: SimpleExpression Relational SimpleExpression  */
#line 847 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                                       {
        (yyval.ExprType) = new BinaryExpr((yyvsp[-2].ExprType), (yyvsp[0].ExprType), (yyvsp[-1].SignType));
    }
#line 2704 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 127: /* Relation: SimpleExpression Membership Range  */
#line 850 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                            {
        (yyval.ExprType) = new BinaryExpr((yyvsp[-2].ExprType), dynamic_cast<Range*>((yyvsp[0].StmtType)), (yyvsp[-1].SignType));
    }
#line 2712 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 128: /* Relation: SimpleExpression Membership Identifier  */
#line 853 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                                 {
        SymbolEntry* se = new IdentifierSymbolEntry(TypeSystem::integerType, (yyvsp[0].StrType), identifiers->getLevel());
        (yyval.ExprType) = new BinaryExpr((yyvsp[-2].ExprType), se, (yyvsp[-1].SignType));
    }
#line 2721 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 129: /* Relational: EQ  */
#line 860 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
         {
        (yyval.SignType) = new OpSignNode(OpSignNode::EQ);
    }
#line 2729 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 130: /* Relational: NE  */
#line 863 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
             {
        (yyval.SignType) = new OpSignNode(OpSignNode::NE);
    }
#line 2737 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 131: /* Relational: LE  */
#line 866 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
             {
        (yyval.SignType) = new OpSignNode(OpSignNode::LE);
    }
#line 2745 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 132: /* Relational: LTEQ  */
#line 869 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
               {
        (yyval.SignType) = new OpSignNode(OpSignNode::LTEQ);
    }
#line 2753 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 133: /* Relational: GE  */
#line 872 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
             {
        (yyval.SignType) = new OpSignNode(OpSignNode::GE);
    }
#line 2761 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 134: /* Relational: GTEQ  */
#line 875 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
               {
        (yyval.SignType) = new OpSignNode(OpSignNode::GTEQ);
    }
#line 2769 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 135: /* Membership: IN  */
#line 881 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
         {
        (yyval.SignType) = new OpSignNode(OpSignNode::IN);
    }
#line 2777 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 136: /* Membership: NOT IN  */
#line 884 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                 {
        (yyval.SignType) = new OpSignNode(OpSignNode::NOTIN);
    }
#line 2785 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 137: /* SimpleExpression: Unary Term  */
#line 890 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                 {
        (yyval.ExprType) = new BinaryExpr((yyvsp[0].ExprType), (yyvsp[-1].SignType));
    }
#line 2793 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 138: /* SimpleExpression: Term  */
#line 893 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
               {
        (yyval.ExprType) = (yyvsp[0].ExprType);
    }
#line 2801 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 139: /* SimpleExpression: SimpleExpression Adding Term  */
#line 896 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                       {
        (yyval.ExprType) = new BinaryExpr((yyvsp[-2].ExprType), (yyvsp[0].ExprType), (yyvsp[-1].SignType));
    }
#line 2809 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 140: /* Unary: ADD  */
#line 902 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
          {
        (yyval.SignType) = new OpSignNode(OpSignNode::ADD);
    }
#line 2817 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 141: /* Unary: SUB  */
#line 905 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
              {
        (yyval.SignType) = new OpSignNode(OpSignNode::SUB);
    }
#line 2825 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 142: /* Adding: ADD  */
#line 911 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
          {
        (yyval.SignType) = new OpSignNode(OpSignNode::ADD);
    }
#line 2833 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 143: /* Adding: SUB  */
#line 914 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
              {
        (yyval.SignType) = new OpSignNode(OpSignNode::SUB);
    }
#line 2841 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 144: /* Adding: SINGLEAND  */
#line 917 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                    {
        (yyval.SignType) = new OpSignNode(OpSignNode::SINGLEAND);
    }
#line 2849 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 145: /* Term: Factor  */
#line 923 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
             {
        (yyval.ExprType) = (yyvsp[0].ExprType);
    }
#line 2857 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 146: /* Term: Term Multiplying Factor  */
#line 926 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                  {
        (yyval.ExprType) = new BinaryExpr((yyvsp[-2].ExprType), (yyvsp[0].ExprType), (yyvsp[-1].SignType));
    }
#line 2865 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 147: /* Multiplying: MUL  */
#line 932 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
          {
        (yyval.SignType) = new OpSignNode(OpSignNode::MUL);
    }
#line 2873 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 148: /* Multiplying: DIV  */
#line 935 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
              {
        (yyval.SignType) = new OpSignNode(OpSignNode::DIV);
    }
#line 2881 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 149: /* Multiplying: MOD  */
#line 938 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
              {
        (yyval.SignType) = new OpSignNode(OpSignNode::MOD);
    }
#line 2889 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 150: /* Multiplying: REM  */
#line 941 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
              {
        (yyval.SignType) = new OpSignNode(OpSignNode::REM);
    }
#line 2897 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 151: /* Factor: Primary  */
#line 947 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
              {
        (yyval.ExprType) = (yyvsp[0].ExprType);
    }
#line 2905 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 152: /* Factor: NOT Primary  */
#line 950 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                      {
        (yyval.ExprType) = new FactorExpr((yyvsp[0].ExprType), FactorExpr::NOT);
    }
#line 2913 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 153: /* Factor: ABS Primary  */
#line 953 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                      {
        (yyval.ExprType) = new FactorExpr((yyvsp[0].ExprType), FactorExpr::ABS);
    }
#line 2921 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 154: /* Factor: Primary EXPON Primary  */
#line 956 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                {
        (yyval.ExprType) = new BinaryExpr((yyvsp[-2].ExprType), (yyvsp[0].ExprType), new OpSignNode(OpSignNode::EXPON));
    }
#line 2929 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 155: /* Primary: Literal  */
#line 962 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
              {
        (yyval.ExprType) = (yyvsp[0].ExprType);
    }
#line 2937 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 156: /* Primary: Name  */
#line 965 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
               {
        (yyval.ExprType) = (yyvsp[0].ExprType);
    }
#line 2945 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 157: /* Primary: ParenthesizedPrimary  */
#line 968 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                               {
        (yyval.ExprType) = (yyvsp[0].ExprType);
    }
#line 2953 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 158: /* Name: Identifier  */
#line 974 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                 {
        SymbolEntry* se = identifiers->lookup((yyvsp[0].StrType));
        if(!se) {
            std::cerr << "[YACC ERROR]: Can't not get SymbolEntry "<< (yyvsp[0].StrType) << " !\n";
        }
        (yyval.ExprType) = new Id(se);
    }
#line 2965 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 159: /* Name: IndexedComp  */
#line 981 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                  {
        (yyval.ExprType) = (yyvsp[0].ExprType);
    }
#line 2973 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 160: /* Name: Attribute  */
#line 984 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                {
        (yyval.ExprType) = (yyvsp[0].ExprType);
    }
#line 2981 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 161: /* Name: INTEGER  */
#line 987 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
              {
        SymbolEntry *se = new IdentifierSymbolEntry(TypeSystem::integerType, "Integer", 0);
        globals->install("Integer", se);
        (yyval.ExprType) = new Id(se);
    }
#line 2991 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 162: /* Name: FLOAT  */
#line 992 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
            {
        SymbolEntry *se = new IdentifierSymbolEntry(TypeSystem::floatType, "Float", 0);
        globals->install("Float", se);
        (yyval.ExprType) = new Id(se);
    }
#line 3001 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 163: /* IndexedComp: Name LPAREN Values RPAREN  */
#line 1000 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                {
        (yyval.ExprType) = new Id(dynamic_cast<Id*>((yyvsp[-3].ExprType)), (yyvsp[-1].ExprType));
    }
#line 3009 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 164: /* Values: Value  */
#line 1006 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
            {
        (yyval.ExprType) = (yyvsp[0].ExprType);
    }
#line 3017 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 165: /* Values: Values COMMA Value  */
#line 1009 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                             {
        (yyval.ExprType) = (yyvsp[-2].ExprType);
        (yyvsp[-2].ExprType)->setNext((yyvsp[0].ExprType));
    }
#line 3026 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 166: /* Value: Expression  */
#line 1016 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                 {
        (yyval.ExprType) = (yyvsp[0].ExprType);
    }
#line 3034 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 167: /* Attribute: Name TIC AttributeId  */
#line 1022 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                           {
        (yyval.ExprType) = new Id(dynamic_cast<Id*>((yyvsp[-2].ExprType)), (yyvsp[0].StrType));
    }
#line 3042 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 168: /* AttributeId: Identifier  */
#line 1028 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                 {
        (yyval.StrType) = (yyvsp[0].StrType);
    }
#line 3050 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 169: /* ParenthesizedPrimary: LPAREN Expression RPAREN  */
#line 1034 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                               {
        (yyval.ExprType) = (yyvsp[-1].ExprType);
    }
#line 3058 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 170: /* Literal: DECIMAL  */
#line 1040 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
              {
        SymbolEntry* se = new ConstantSymbolEntry(TypeSystem::integerType, (yyvsp[0].IntType));
        (yyval.ExprType) = new Constant(se);
    }
#line 3067 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 171: /* Literal: SINGLECHAR  */
#line 1044 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                 {
        SymbolEntry* se = new ConstantSymbolEntry(TypeSystem::characterType, (yyvsp[0].CharType));
        (yyval.ExprType) = new Constant(se);
    }
#line 3076 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 172: /* Literal: STRINGLITERAL  */
#line 1048 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                    {
        SymbolEntry* se = new ConstantSymbolEntry(TypeSystem::stringType, (yyvsp[0].StrType));
        (yyval.ExprType) = new Constant(se);
    }
#line 3085 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 173: /* Literal: FLOATNUM  */
#line 1052 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
               {
        SymbolEntry* se = new ConstantSymbolEntry(TypeSystem::floatType, (yyvsp[0].FloatType));
        (yyval.ExprType) = new Constant(se);
    }
#line 3094 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 174: /* Literal: NuLL  */
#line 1056 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
           {
        (yyval.ExprType) = nullptr;
    }
#line 3102 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 175: /* Literal: TRuE  */
#line 1059 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
           {
        SymbolEntry* se = new ConstantSymbolEntry(TypeSystem::boolType, true);
        (yyval.ExprType) = new Constant(se);
    }
#line 3111 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 176: /* Literal: FALsE  */
#line 1063 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
            {
        SymbolEntry* se = new ConstantSymbolEntry(TypeSystem::boolType, false);
        (yyval.ExprType) = new Constant(se);
    }
#line 3120 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;


#line 3124 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"

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

#line 1068 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"


int yyerror(char const* message)
{
    std::cerr<<message<<std::endl;
    return -1;
}
