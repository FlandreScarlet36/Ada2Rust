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
  YYSYMBOL_DECIMIAL = 96,                  /* DECIMIAL  */
  YYSYMBOL_Identifier = 97,                /* Identifier  */
  YYSYMBOL_STRINGLITERAL = 98,             /* STRINGLITERAL  */
  YYSYMBOL_PACKAGEID = 99,                 /* PACKAGEID  */
  YYSYMBOL_INTEGER = 100,                  /* INTEGER  */
  YYSYMBOL_STRING = 101,                   /* STRING  */
  YYSYMBOL_NATURAL = 102,                  /* NATURAL  */
  YYSYMBOL_BOOLEAN = 103,                  /* BOOLEAN  */
  YYSYMBOL_COLON = 104,                    /* COLON  */
  YYSYMBOL_SEMICOLON = 105,                /* SEMICOLON  */
  YYSYMBOL_LPAREN = 106,                   /* LPAREN  */
  YYSYMBOL_RPAREN = 107,                   /* RPAREN  */
  YYSYMBOL_COMMA = 108,                    /* COMMA  */
  YYSYMBOL_SINGLEAND = 109,                /* SINGLEAND  */
  YYSYMBOL_SINGLEOR = 110,                 /* SINGLEOR  */
  YYSYMBOL_YYACCEPT = 111,                 /* $accept  */
  YYSYMBOL_Program = 112,                  /* Program  */
  YYSYMBOL_CompUnit = 113,                 /* CompUnit  */
  YYSYMBOL_Unit = 114,                     /* Unit  */
  YYSYMBOL_PackageCall = 115,              /* PackageCall  */
  YYSYMBOL_SubprogDecl = 116,              /* SubprogDecl  */
  YYSYMBOL_SubprogSpec = 117,              /* SubprogSpec  */
  YYSYMBOL_118_1 = 118,                    /* $@1  */
  YYSYMBOL_FormalPartOpt = 119,            /* FormalPartOpt  */
  YYSYMBOL_FormalPart = 120,               /* FormalPart  */
  YYSYMBOL_Params = 121,                   /* Params  */
  YYSYMBOL_Param = 122,                    /* Param  */
  YYSYMBOL_Type = 123,                     /* Type  */
  YYSYMBOL_InitOpt = 124,                  /* InitOpt  */
  YYSYMBOL_SubprogBody = 125,              /* SubprogBody  */
  YYSYMBOL_126_2 = 126,                    /* $@2  */
  YYSYMBOL_DeclPart = 127,                 /* DeclPart  */
  YYSYMBOL_Decl = 128,                     /* Decl  */
  YYSYMBOL_ObjectDecl = 129,               /* ObjectDecl  */
  YYSYMBOL_DefIds = 130,                   /* DefIds  */
  YYSYMBOL_DefId = 131,                    /* DefId  */
  YYSYMBOL_DeclItemOrBodys = 132,          /* DeclItemOrBodys  */
  YYSYMBOL_DeclItemOrBody = 133,           /* DeclItemOrBody  */
  YYSYMBOL_Statements = 134,               /* Statements  */
  YYSYMBOL_Statement = 135,                /* Statement  */
  YYSYMBOL_SimpleStmt = 136,               /* SimpleStmt  */
  YYSYMBOL_PutStmt = 137,                  /* PutStmt  */
  YYSYMBOL_PutlineStmt = 138,              /* PutlineStmt  */
  YYSYMBOL_GetStmt = 139,                  /* GetStmt  */
  YYSYMBOL_CompoundStmt = 140,             /* CompoundStmt  */
  YYSYMBOL_NullStmt = 141,                 /* NullStmt  */
  YYSYMBOL_AssignStmt = 142,               /* AssignStmt  */
  YYSYMBOL_ReturnStmt = 143,               /* ReturnStmt  */
  YYSYMBOL_ProcedureCall = 144,            /* ProcedureCall  */
  YYSYMBOL_ExitStmt = 145,                 /* ExitStmt  */
  YYSYMBOL_WhenOpt = 146,                  /* WhenOpt  */
  YYSYMBOL_IfStmt = 147,                   /* IfStmt  */
  YYSYMBOL_CondClauses = 148,              /* CondClauses  */
  YYSYMBOL_CondClause = 149,               /* CondClause  */
  YYSYMBOL_CondPart = 150,                 /* CondPart  */
  YYSYMBOL_Condition = 151,                /* Condition  */
  YYSYMBOL_ElseOpt = 152,                  /* ElseOpt  */
  YYSYMBOL_CaseStmt = 153,                 /* CaseStmt  */
  YYSYMBOL_Alternatives = 154,             /* Alternatives  */
  YYSYMBOL_Alternative = 155,              /* Alternative  */
  YYSYMBOL_Choices = 156,                  /* Choices  */
  YYSYMBOL_Choice = 157,                   /* Choice  */
  YYSYMBOL_DiscreteWithRange = 158,        /* DiscreteWithRange  */
  YYSYMBOL_LoopStmt = 159,                 /* LoopStmt  */
  YYSYMBOL_LabelOpt = 160,                 /* LabelOpt  */
  YYSYMBOL_Iteration = 161,                /* Iteration  */
  YYSYMBOL_IterPart = 162,                 /* IterPart  */
  YYSYMBOL_ReverseOpt = 163,               /* ReverseOpt  */
  YYSYMBOL_BasicLoop = 164,                /* BasicLoop  */
  YYSYMBOL_IdOpt = 165,                    /* IdOpt  */
  YYSYMBOL_DiscreteRange = 166,            /* DiscreteRange  */
  YYSYMBOL_RangeConstrOpt = 167,           /* RangeConstrOpt  */
  YYSYMBOL_Range = 168,                    /* Range  */
  YYSYMBOL_Block = 169,                    /* Block  */
  YYSYMBOL_BlockDecl = 170,                /* BlockDecl  */
  YYSYMBOL_BlockBody = 171,                /* BlockBody  */
  YYSYMBOL_Expression = 172,               /* Expression  */
  YYSYMBOL_Logical = 173,                  /* Logical  */
  YYSYMBOL_ShortCircuit = 174,             /* ShortCircuit  */
  YYSYMBOL_Relation = 175,                 /* Relation  */
  YYSYMBOL_Relational = 176,               /* Relational  */
  YYSYMBOL_Membership = 177,               /* Membership  */
  YYSYMBOL_SimpleExpression = 178,         /* SimpleExpression  */
  YYSYMBOL_Unary = 179,                    /* Unary  */
  YYSYMBOL_Adding = 180,                   /* Adding  */
  YYSYMBOL_Term = 181,                     /* Term  */
  YYSYMBOL_Multiplying = 182,              /* Multiplying  */
  YYSYMBOL_Factor = 183,                   /* Factor  */
  YYSYMBOL_Primary = 184,                  /* Primary  */
  YYSYMBOL_Name = 185,                     /* Name  */
  YYSYMBOL_IndexedComp = 186,              /* IndexedComp  */
  YYSYMBOL_Values = 187,                   /* Values  */
  YYSYMBOL_Value = 188,                    /* Value  */
  YYSYMBOL_Attribute = 189,                /* Attribute  */
  YYSYMBOL_AttributeId = 190,              /* AttributeId  */
  YYSYMBOL_ParenthesizedPrimary = 191,     /* ParenthesizedPrimary  */
  YYSYMBOL_Literal = 192                   /* Literal  */
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
#define YYFINAL  14
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   419

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  111
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  82
/* YYNRULES -- Number of rules.  */
#define YYNRULES  164
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  267

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   365


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
     105,   106,   107,   108,   109,   110
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   150,   150,   156,   159,   165,   168,   171,   178,   183,
     191,   203,   203,   237,   238,   244,   250,   253,   259,   267,
     270,   273,   276,   281,   282,   288,   288,   307,   308,   315,
     318,   324,   335,   350,   353,   360,   368,   371,   378,   381,
     387,   390,   397,   400,   406,   409,   412,   415,   418,   421,
     424,   427,   433,   440,   443,   449,   459,   462,   465,   468,
     474,   480,   492,   495,   501,   507,   513,   514,   520,   526,
     529,   536,   542,   548,   553,   554,   560,   566,   567,   578,
     584,   587,   594,   597,   600,   606,   611,   617,   628,   629,
     636,   640,   644,   651,   659,   660,   666,   672,   673,   680,
     685,   690,   691,   697,   703,   708,   709,   715,   724,   727,
     730,   736,   739,   742,   748,   751,   757,   760,   763,   766,
     773,   776,   779,   782,   785,   788,   794,   797,   803,   806,
     809,   815,   818,   824,   827,   830,   836,   839,   845,   848,
     851,   854,   860,   863,   866,   869,   875,   878,   881,   887,
     894,   897,   900,   908,   914,   917,   924,   930,   936,   942,
     948,   952,   956,   959,   963
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
  "PUT", "GET", "TRuE", "FALsE", "DECIMIAL", "Identifier", "STRINGLITERAL",
  "PACKAGEID", "INTEGER", "STRING", "NATURAL", "BOOLEAN", "COLON",
  "SEMICOLON", "LPAREN", "RPAREN", "COMMA", "SINGLEAND", "SINGLEOR",
  "$accept", "Program", "CompUnit", "Unit", "PackageCall", "SubprogDecl",
  "SubprogSpec", "$@1", "FormalPartOpt", "FormalPart", "Params", "Param",
  "Type", "InitOpt", "SubprogBody", "$@2", "DeclPart", "Decl",
  "ObjectDecl", "DefIds", "DefId", "DeclItemOrBodys", "DeclItemOrBody",
  "Statements", "Statement", "SimpleStmt", "PutStmt", "PutlineStmt",
  "GetStmt", "CompoundStmt", "NullStmt", "AssignStmt", "ReturnStmt",
  "ProcedureCall", "ExitStmt", "WhenOpt", "IfStmt", "CondClauses",
  "CondClause", "CondPart", "Condition", "ElseOpt", "CaseStmt",
  "Alternatives", "Alternative", "Choices", "Choice", "DiscreteWithRange",
  "LoopStmt", "LabelOpt", "Iteration", "IterPart", "ReverseOpt",
  "BasicLoop", "IdOpt", "DiscreteRange", "RangeConstrOpt", "Range",
  "Block", "BlockDecl", "BlockBody", "Expression", "Logical",
  "ShortCircuit", "Relation", "Relational", "Membership",
  "SimpleExpression", "Unary", "Adding", "Term", "Multiplying", "Factor",
  "Primary", "Name", "IndexedComp", "Values", "Value", "Attribute",
  "AttributeId", "ParenthesizedPrimary", "Literal", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-154)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-150)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      60,   -78,   -69,   -64,    44,    60,  -154,  -154,  -154,    -9,
    -154,  -154,   -54,    -7,  -154,  -154,  -154,  -154,    31,  -154,
    -154,    36,    16,  -154,  -154,  -154,  -154,  -154,   119,  -154,
    -154,    91,  -154,    36,  -154,    52,     0,  -154,   304,   144,
      41,    90,  -154,   100,    16,  -154,   134,    92,   134,    89,
      66,   103,   117,   127,    -5,  -154,   265,  -154,  -154,  -154,
    -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,
    -154,    -4,  -154,     4,  -154,  -154,    92,   100,  -154,  -154,
    -154,  -154,   188,  -154,   188,  -154,   313,   313,  -154,  -154,
    -154,  -154,  -154,  -154,  -154,  -154,   134,    25,  -154,    23,
     192,    98,  -154,   215,    13,  -154,  -154,  -154,   152,   136,
    -154,   304,   158,    79,  -154,  -154,    30,    99,   134,   145,
     134,  -154,  -154,    36,   153,   134,   202,   178,   119,   159,
    -154,   134,   157,   188,   134,   160,  -154,  -154,  -154,   -12,
     174,  -154,   221,  -154,   134,   134,  -154,  -154,  -154,  -154,
    -154,  -154,  -154,   218,  -154,  -154,  -154,   134,   149,   192,
      98,  -154,  -154,  -154,  -154,   192,   313,   134,   162,   304,
     134,   224,   222,  -154,  -154,   161,   163,   -15,   164,    75,
    -154,   230,  -154,   304,    92,  -154,   179,   233,  -154,  -154,
      79,   105,  -154,  -154,   175,    79,  -154,  -154,  -154,     6,
    -154,  -154,  -154,  -154,     9,     5,  -154,     7,    98,  -154,
    -154,  -154,  -154,   278,  -154,   236,   191,   195,   196,   197,
    -154,  -154,   291,   198,    78,  -154,  -154,    92,  -154,   134,
    -154,   254,   120,  -154,   134,   200,  -154,  -154,  -154,  -154,
     242,  -154,   134,  -154,   201,  -154,   204,  -154,   240,    -8,
    -154,  -154,  -154,    79,    12,     9,  -154,  -154,  -154,  -154,
    -154,   134,   304,   120,  -154,   252,  -154
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     2,     3,     7,     5,     0,
       6,    11,     0,     0,     1,     4,    25,    10,    13,     9,
       8,    27,     0,    12,    14,    35,    30,    38,     0,    39,
      29,     0,    33,    28,    36,     0,     0,    16,    88,     0,
       0,     0,    37,     0,     0,    15,     0,    97,     0,     0,
       0,     0,     0,     0,   149,   152,    88,    40,    42,    49,
      50,    51,    43,    44,    45,    46,    47,    48,    56,    57,
      58,    90,    59,     0,   150,   151,    97,     0,    19,    21,
      22,    20,    23,    34,    23,    17,     0,     0,   132,   131,
     162,   163,   164,   160,   149,   161,     0,     0,   108,   116,
       0,   129,   136,   142,   147,   148,   146,    98,    66,    74,
      69,    88,     0,    73,    60,    62,     0,     0,     0,     0,
       0,    89,    41,    27,     0,     0,     0,    94,     0,     0,
      64,     0,     0,    23,     0,     0,    18,   144,   143,     0,
     111,    77,   112,   113,     0,     0,   123,   125,   121,   124,
     122,   120,   126,     0,   134,   133,   135,     0,     0,     0,
     128,   138,   139,   140,   141,     0,     0,     0,     0,    88,
       0,     0,    88,    72,    63,     0,     0,     0,     0,     0,
     106,     0,    91,    88,    97,    95,     0,     0,   158,   157,
     156,     0,   154,    26,     0,    24,    31,   159,   114,     0,
     115,   109,   110,   127,   117,   119,   118,     0,   130,   137,
     145,    67,    65,    88,    70,     0,     0,     0,     0,     0,
      61,    93,    88,     0,   149,    92,   100,    97,   153,     0,
      32,     0,     0,    78,     0,     0,    53,    54,    52,    55,
       0,    87,     0,    99,     0,   155,     0,    84,   149,     0,
      80,    83,    86,    82,   116,   103,    68,    96,   102,   104,
      76,     0,    88,     0,    85,    88,    81
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -154,  -154,  -154,   311,  -154,   101,  -154,  -154,  -154,  -154,
    -154,   274,   -21,   -36,   181,  -154,   203,  -154,  -154,  -154,
     282,  -154,   295,  -108,   -55,  -154,  -154,  -154,  -154,  -154,
    -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,   165,  -154,
     -84,  -154,  -154,  -154,  -154,  -154,    68,  -154,  -154,  -154,
    -154,  -154,  -154,  -154,   -72,  -154,  -154,  -153,  -154,  -154,
     208,   -44,  -154,  -154,    77,  -154,  -154,  -104,  -154,  -154,
     -71,  -154,   167,   -40,   -38,  -154,  -154,   112,  -154,  -154,
    -154,  -154
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     4,     5,     6,     7,    26,     9,    18,    23,    24,
      36,    37,    82,   135,    27,    21,    28,    29,    30,    31,
      32,    33,    34,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,   168,    68,   109,   110,   111,
     112,   171,    69,   199,   233,   249,   250,   251,    70,    71,
     126,   127,   186,   184,   108,   225,   243,   252,    72,   128,
      39,   113,   144,   145,    98,   157,   158,    99,   100,   159,
     101,   165,   102,   103,   104,    74,   191,   192,    75,   189,
     105,   106
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      73,   122,    97,   172,   132,   206,   116,   129,  -149,   262,
    -149,   120,   234,   140,   177,  -149,   129,   234,    73,    11,
     146,   147,    84,   148,  -105,   149,   150,   151,   123,   160,
      12,   146,   147,   226,   148,    13,   149,   150,   151,   124,
      16,   182,   154,   155,    14,   231,   137,   138,   136,   142,
     140,    19,   139,   204,   207,   140,   133,  -149,  -149,  -149,
     152,   213,  -149,  -149,   154,   155,   154,   155,   153,   154,
     155,   152,    77,    73,   141,   222,   179,  -149,   143,   153,
     154,   155,   207,   211,   125,    86,   142,   190,   208,   258,
     195,   142,   218,   232,   156,   197,    17,   194,    20,   121,
     140,     8,   263,     1,   140,    44,     8,    45,   264,   130,
     131,  -149,   223,    35,  -149,   143,   156,   122,   156,   131,
     143,   156,    87,    88,    89,    90,   210,     1,   254,  -101,
     255,    73,   156,    25,    73,   174,   142,    22,   207,    86,
     142,    78,    79,    80,    81,    73,     2,    38,   242,     3,
     161,   162,   163,    86,   265,   244,    43,   207,   122,   254,
      91,    92,    93,    94,    95,   143,    55,   122,    86,   143,
     164,   115,    96,   169,   170,    73,    87,    88,    89,    90,
     220,    10,   247,    76,    73,   190,    10,    25,   253,   107,
      87,    88,    89,    90,   114,    40,   175,   176,    86,    41,
      78,    79,    80,    81,   134,    87,    88,    89,    90,   117,
     122,    86,   228,   229,    91,    92,    93,   248,    95,   253,
      55,   201,   202,   118,    73,   166,    96,    73,    91,    92,
      93,    94,    95,   119,    55,    87,    88,    89,    90,   167,
      96,   173,   178,    91,    92,    93,   205,    95,    87,    55,
     181,    90,    46,   183,   185,    96,   188,   198,   200,   -71,
     -71,   -71,   193,   215,    47,   196,   203,   212,   216,    48,
     217,   219,   227,    91,    92,    93,   224,    95,   221,    55,
     230,    49,    46,   235,   246,    96,    91,    92,    93,    94,
      95,   -79,    55,   257,    47,    46,   236,    50,    96,    48,
     237,   238,   239,   241,  -107,   256,   259,    47,    46,   260,
     261,    49,    48,    51,    52,    53,    15,   -75,    85,    54,
      47,    46,    55,    83,    49,    48,   180,    50,    42,     0,
     240,   266,   209,    47,    46,   214,   187,    49,    48,   -79,
      50,   245,     0,    51,    52,    53,    47,     0,     0,    54,
      49,    48,    55,    50,     0,     0,    51,    52,    53,     0,
       0,     0,    54,    49,     0,    55,    50,     0,     0,    51,
      52,    53,    90,     0,     0,    54,     0,     0,    55,    50,
       0,     0,    51,    52,    53,     0,     0,     0,    54,     0,
       0,    55,     0,     0,     0,    51,    52,    53,     0,     0,
       0,    54,     0,     0,    55,     0,     0,    91,    92,    93,
      94,    95,     0,    55,     0,     0,     0,     0,     0,    96
};

static const yytype_int16 yycheck[] =
{
      38,    56,    46,   111,    76,   158,    50,     3,     3,    17,
       5,    16,     5,    25,   118,    10,     3,     5,    56,    97,
       8,     9,    43,    11,    28,    13,    14,    15,    32,   100,
      99,     8,     9,   186,    11,    99,    13,    14,    15,    43,
      49,   125,    57,    58,     0,    39,    86,    87,    84,    61,
      25,   105,    96,   157,   158,    25,    77,    52,    53,    54,
      48,   169,    57,    58,    57,    58,    57,    58,    56,    57,
      58,    48,    31,   111,    49,   183,   120,    72,    90,    56,
      57,    58,   186,   167,    88,    19,    61,   131,   159,   242,
     134,    61,   107,    87,   109,   107,   105,   133,   105,   104,
      25,     0,   110,    67,    25,   105,     5,   107,   261,   105,
     106,   106,   184,    97,   109,    90,   109,   172,   109,   106,
      90,   109,    56,    57,    58,    59,   166,    67,   232,    51,
     234,   169,   109,    97,   172,   105,    61,   106,   242,    19,
      61,   100,   101,   102,   103,   183,    86,    28,    70,    89,
      52,    53,    54,    19,   262,   227,   104,   261,   213,   263,
      94,    95,    96,    97,    98,    90,   100,   222,    19,    90,
      72,   105,   106,    37,    38,   213,    56,    57,    58,    59,
     105,     0,    62,    39,   222,   229,     5,    97,   232,    97,
      56,    57,    58,    59,   105,   104,    97,    98,    19,   108,
     100,   101,   102,   103,    16,    56,    57,    58,    59,   106,
     265,    19,   107,   108,    94,    95,    96,    97,    98,   263,
     100,   144,   145,   106,   262,    10,   106,   265,    94,    95,
      96,    97,    98,   106,   100,    56,    57,    58,    59,    87,
     106,    83,    97,    94,    95,    96,    97,    98,    56,   100,
      97,    59,    30,    51,    76,   106,    97,    83,    37,    37,
      38,    39,   105,    39,    42,   105,    48,   105,   107,    47,
     107,   107,    39,    94,    95,    96,    97,    98,    48,   100,
     105,    59,    30,    47,    30,   106,    94,    95,    96,    97,
      98,    39,   100,    51,    42,    30,   105,    75,   106,    47,
     105,   105,   105,   105,    39,   105,   105,    42,    30,   105,
      70,    59,    47,    91,    92,    93,     5,    39,    44,    97,
      42,    30,   100,    41,    59,    47,   123,    75,    33,    -1,
      39,   263,   165,    42,    30,   170,   128,    59,    47,    87,
      75,   229,    -1,    91,    92,    93,    42,    -1,    -1,    97,
      59,    47,   100,    75,    -1,    -1,    91,    92,    93,    -1,
      -1,    -1,    97,    59,    -1,   100,    75,    -1,    -1,    91,
      92,    93,    59,    -1,    -1,    97,    -1,    -1,   100,    75,
      -1,    -1,    91,    92,    93,    -1,    -1,    -1,    97,    -1,
      -1,   100,    -1,    -1,    -1,    91,    92,    93,    -1,    -1,
      -1,    97,    -1,    -1,   100,    -1,    -1,    94,    95,    96,
      97,    98,    -1,   100,    -1,    -1,    -1,    -1,    -1,   106
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    67,    86,    89,   112,   113,   114,   115,   116,   117,
     125,    97,    99,    99,     0,   114,    49,   105,   118,   105,
     105,   126,   106,   119,   120,    97,   116,   125,   127,   128,
     129,   130,   131,   132,   133,    97,   121,   122,    28,   171,
     104,   108,   133,   104,   105,   107,    30,    42,    47,    59,
      75,    91,    92,    93,    97,   100,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   147,   153,
     159,   160,   169,   185,   186,   189,    39,    31,   100,   101,
     102,   103,   123,   131,   123,   122,    19,    56,    57,    58,
      59,    94,    95,    96,    97,    98,   106,   172,   175,   178,
     179,   181,   183,   184,   185,   191,   192,    97,   165,   148,
     149,   150,   151,   172,   105,   105,   172,   106,   106,   106,
      16,   104,   135,    32,    43,    88,   161,   162,   170,     3,
     105,   106,   165,   123,    16,   124,   124,   184,   184,   172,
      25,    49,    61,    90,   173,   174,     8,     9,    11,    13,
      14,    15,    48,    56,    57,    58,   109,   176,   177,   180,
     181,    52,    53,    54,    72,   182,    10,    87,   146,    37,
      38,   152,   134,    83,   105,    97,    98,   178,    97,   172,
     127,    97,   151,    51,   164,    76,   163,   171,    97,   190,
     172,   187,   188,   105,   124,   172,   105,   107,    83,   154,
      37,   175,   175,    48,   178,    97,   168,   178,   181,   183,
     184,   151,   105,   134,   149,    39,   107,   107,   107,   107,
     105,    48,   134,   165,    97,   166,   168,    39,   107,   108,
     105,    39,    87,   155,     5,    47,   105,   105,   105,   105,
      39,   105,    70,   167,   165,   188,    30,    62,    97,   156,
     157,   158,   168,   172,   178,   178,   105,    51,   168,   105,
     105,    70,    17,   110,   168,   134,   157
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,   111,   112,   113,   113,   114,   114,   114,   115,   115,
     116,   118,   117,   119,   119,   120,   121,   121,   122,   123,
     123,   123,   123,   124,   124,   126,   125,   127,   127,   128,
     128,   129,   129,   130,   130,   131,   132,   132,   133,   133,
     134,   134,   135,   135,   136,   136,   136,   136,   136,   136,
     136,   136,   137,   138,   138,   139,   140,   140,   140,   140,
     141,   142,   143,   143,   144,   145,   146,   146,   147,   148,
     148,   149,   150,   151,   152,   152,   153,   154,   154,   155,
     156,   156,   157,   157,   157,   158,   158,   159,   160,   160,
     161,   161,   161,   162,   163,   163,   164,   165,   165,   166,
     166,   167,   167,   168,   169,   170,   170,   171,   172,   172,
     172,   173,   173,   173,   174,   174,   175,   175,   175,   175,
     176,   176,   176,   176,   176,   176,   177,   177,   178,   178,
     178,   179,   179,   180,   180,   180,   181,   181,   182,   182,
     182,   182,   183,   183,   183,   183,   184,   184,   184,   185,
     185,   185,   185,   186,   187,   187,   188,   189,   190,   191,
     192,   192,   192,   192,   192
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     1,     3,     3,
       2,     0,     4,     0,     1,     3,     1,     3,     4,     1,
       1,     1,     1,     0,     2,     0,     8,     0,     1,     1,
       1,     5,     6,     1,     3,     1,     1,     2,     1,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     5,     5,     5,     5,     1,     1,     1,     1,
       2,     4,     2,     3,     2,     4,     0,     2,     6,     1,
       3,     2,     2,     1,     0,     2,     7,     0,     2,     4,
       1,     3,     1,     1,     1,     3,     1,     5,     0,     2,
       0,     2,     3,     3,     0,     1,     4,     0,     1,     2,
       1,     0,     2,     3,     6,     0,     2,     2,     1,     3,
       3,     1,     1,     1,     2,     2,     1,     3,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     1,
       3,     1,     1,     1,     1,     1,     1,     3,     1,     1,
       1,     1,     1,     2,     2,     3,     1,     1,     1,     1,
       1,     1,     1,     4,     1,     3,     1,     3,     1,     3,
       1,     1,     1,     1,     1
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
#line 150 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
               {
        ast.setRoot((yyvsp[0].StmtType));
    }
#line 1528 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 3: /* CompUnit: Unit  */
#line 156 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
           {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 1536 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 4: /* CompUnit: CompUnit Unit  */
#line 159 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                    {
        (yyval.StmtType) = new SeqNode((yyvsp[-1].StmtType), (yyvsp[0].StmtType));
    }
#line 1544 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 5: /* Unit: SubprogDecl  */
#line 165 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                  {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 1552 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 6: /* Unit: SubprogBody  */
#line 168 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                      {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 1560 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 7: /* Unit: PackageCall  */
#line 171 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                  {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 1568 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 8: /* PackageCall: WITH PACKAGEID SEMICOLON  */
#line 178 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                               {
        DEBUG_YACC("================Enter PackageCall=================");
        (yyval.StmtType) = new PackageCall((yyvsp[-1].StrType));
        DEBUG_YACC("================Leave PackageCall=================");
    }
#line 1578 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 9: /* PackageCall: USE PACKAGEID SEMICOLON  */
#line 183 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                              {
        DEBUG_YACC("================Enter PackageCall=================");
        (yyval.StmtType) = new PackageCall((yyvsp[-1].StrType));
        DEBUG_YACC("================Leave PackageCall=================");
    }
#line 1588 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 10: /* SubprogDecl: SubprogSpec SEMICOLON  */
#line 191 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                            {
        DEBUG_YACC("================Enter SubprogDecl=================");
        (yyval.StmtType) = new ProcedureDecl(dynamic_cast<ProcedureSpec*>((yyvsp[-1].StmtType)));

        SymbolTable* ScopeTable = identifiers;
        identifiers = identifiers->getPrev();
        delete ScopeTable;
        DEBUG_YACC("================Leave SubprogDecl=================");
    }
#line 1602 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 11: /* $@1: %empty  */
#line 203 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
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
#line 1618 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 12: /* SubprogSpec: PROCEDURE Identifier $@1 FormalPartOpt  */
#line 213 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
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
#line 1644 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 13: /* FormalPartOpt: %empty  */
#line 237 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
             { (yyval.StmtType) = nullptr; }
#line 1650 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 14: /* FormalPartOpt: FormalPart  */
#line 238 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                     {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 1658 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 15: /* FormalPart: LPAREN Params RPAREN  */
#line 244 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                           {
        (yyval.StmtType) = (yyvsp[-1].StmtType);
    }
#line 1666 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 16: /* Params: Param  */
#line 250 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
            {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 1674 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 17: /* Params: Params SEMICOLON Param  */
#line 253 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                 {
        (yyval.StmtType) = (yyvsp[-2].StmtType);
        (yyvsp[-2].StmtType)->setNext((yyvsp[0].StmtType));
    }
#line 1683 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 18: /* Param: Identifier COLON Type InitOpt  */
#line 259 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                      {
        SymbolEntry *se = new IdentifierSymbolEntry((yyvsp[-1].type), (yyvsp[-3].StrType), IdentifierSymbolEntry::PARAM);
        identifiers->install((yyvsp[-3].StrType), se);
        (yyval.StmtType) = new ParamNode(se, dynamic_cast<InitOptStmt*>((yyvsp[0].StmtType)));
    }
#line 1693 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 19: /* Type: INTEGER  */
#line 267 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
              {
        (yyval.type) = TypeSystem::integerType;
    }
#line 1701 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 20: /* Type: BOOLEAN  */
#line 270 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
              {
        (yyval.type) = TypeSystem::boolType;
    }
#line 1709 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 21: /* Type: STRING  */
#line 273 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
             {
        (yyval.type) = TypeSystem::stringType;
    }
#line 1717 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 22: /* Type: NATURAL  */
#line 276 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
              {
        (yyval.type) = TypeSystem::naturalType;
    }
#line 1725 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 23: /* InitOpt: %empty  */
#line 281 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                 { (yyval.StmtType) = nullptr; }
#line 1731 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 24: /* InitOpt: ASSIGN Expression  */
#line 282 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                            {
        (yyval.StmtType) = new InitOptStmt((yyvsp[0].ExprType));
    }
#line 1739 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 25: /* $@2: %empty  */
#line 288 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                     {
        DEBUG_YACC("================Enter SubprogBody=================");
        // Enter into new scope.
        identifiers = new SymbolTable(identifiers);
        procedureIters.push_back(dynamic_cast<ProcedureSpec*>((yyvsp[-1].StmtType)));
    }
#line 1750 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 26: /* SubprogBody: SubprogSpec IS $@2 DeclPart BlockBody END IdOpt SEMICOLON  */
#line 293 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
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
#line 1767 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 27: /* DeclPart: %empty  */
#line 307 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                 { (yyval.StmtType) = nullptr; }
#line 1773 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 28: /* DeclPart: DeclItemOrBodys  */
#line 308 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                          {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 1781 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 29: /* Decl: ObjectDecl  */
#line 315 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
               {
        (yyval.StmtType) = new DeclStmt(dynamic_cast<ObjectDeclStmt*>((yyvsp[0].StmtType)));
    }
#line 1789 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 30: /* Decl: SubprogDecl  */
#line 318 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                  {
        (yyval.StmtType) = new DeclStmt(dynamic_cast<ProcedureDecl*>((yyvsp[0].StmtType)));
    }
#line 1797 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 31: /* ObjectDecl: DefIds COLON Type InitOpt SEMICOLON  */
#line 324 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
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
#line 1813 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 32: /* ObjectDecl: DefIds COLON CONSTANT Type InitOpt SEMICOLON  */
#line 335 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
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
#line 1830 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 33: /* DefIds: DefId  */
#line 350 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
            {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 1838 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 34: /* DefIds: DefIds COMMA DefId  */
#line 353 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                         {
        (yyval.StmtType) = (yyvsp[-2].StmtType);
        (yyvsp[-2].StmtType)->setNext((yyvsp[0].StmtType));
    }
#line 1847 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 35: /* DefId: Identifier  */
#line 360 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                 {
        IdentifierSymbolEntry *se = new IdentifierSymbolEntry((yyvsp[0].StrType), identifiers->getLevel());
        identifiers->install((yyvsp[0].StrType), se);
        (yyval.StmtType) = new DefId(se);
    }
#line 1857 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 36: /* DeclItemOrBodys: DeclItemOrBody  */
#line 368 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                     {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 1865 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 37: /* DeclItemOrBodys: DeclItemOrBodys DeclItemOrBody  */
#line 371 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                         {
        (yyval.StmtType) = (yyvsp[-1].StmtType);
        (yyvsp[-1].StmtType)->setNext((yyvsp[0].StmtType));
    }
#line 1874 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 38: /* DeclItemOrBody: SubprogBody  */
#line 378 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                  {
        (yyval.StmtType) = new DeclItemOrBodyStmt(dynamic_cast<ProcedureDef*>((yyvsp[0].StmtType)));
    }
#line 1882 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 39: /* DeclItemOrBody: Decl  */
#line 381 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
               {
        (yyval.StmtType) = new DeclItemOrBodyStmt(dynamic_cast<DeclStmt*>((yyvsp[0].StmtType)));
    }
#line 1890 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 40: /* Statements: Statement  */
#line 387 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 1898 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 41: /* Statements: Statements Statement  */
#line 390 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                               {
        (yyval.StmtType) = (yyvsp[-1].StmtType);
        (yyvsp[-1].StmtType)->setNext((yyvsp[0].StmtType));
    }
#line 1907 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 42: /* Statement: SimpleStmt  */
#line 397 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                 {
        (yyval.StmtType) = new Stmt((yyvsp[0].StmtType));
    }
#line 1915 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 43: /* Statement: CompoundStmt  */
#line 400 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                       {
        (yyval.StmtType) = new Stmt((yyvsp[0].StmtType));
    }
#line 1923 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 44: /* SimpleStmt: NullStmt  */
#line 406 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
               {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 1931 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 45: /* SimpleStmt: AssignStmt  */
#line 409 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                     {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 1939 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 46: /* SimpleStmt: ReturnStmt  */
#line 412 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                     {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 1947 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 47: /* SimpleStmt: ProcedureCall  */
#line 415 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                        {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 1955 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 48: /* SimpleStmt: ExitStmt  */
#line 418 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
               {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 1963 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 49: /* SimpleStmt: PutStmt  */
#line 421 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
              {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 1971 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 50: /* SimpleStmt: PutlineStmt  */
#line 424 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                  {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 1979 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 51: /* SimpleStmt: GetStmt  */
#line 427 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
              {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 1987 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 52: /* PutStmt: PUT LPAREN SimpleExpression RPAREN SEMICOLON  */
#line 433 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                                   {
        (yyval.StmtType) = new PutStmt((yyvsp[-2].ExprType));
    }
#line 1995 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 53: /* PutlineStmt: PUT_LINE LPAREN Identifier RPAREN SEMICOLON  */
#line 440 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                                  {
        (yyval.StmtType) = new PutlineStmt((yyvsp[-2].StrType));
    }
#line 2003 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 54: /* PutlineStmt: PUT_LINE LPAREN STRINGLITERAL RPAREN SEMICOLON  */
#line 443 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                                     {
        (yyval.StmtType) = new PutlineStmt((yyvsp[-2].StrType));
    }
#line 2011 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 55: /* GetStmt: GET LPAREN Identifier RPAREN SEMICOLON  */
#line 449 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                             {
        IdentifierSymbolEntry *se = dynamic_cast<IdentifierSymbolEntry*>(identifiers->lookup((yyvsp[-2].StrType)));            
        if(!se) {
            std::cerr << "[YACC ERROR]: Can't not get symbolEntry: "<< (yyvsp[-2].StrType) << "\n";
        }
        (yyval.StmtType) = new GetStmt(se);
    }
#line 2023 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 56: /* CompoundStmt: IfStmt  */
#line 459 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
             {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 2031 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 57: /* CompoundStmt: CaseStmt  */
#line 462 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                   {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 2039 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 58: /* CompoundStmt: LoopStmt  */
#line 465 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                   {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 2047 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 59: /* CompoundStmt: Block  */
#line 468 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 2055 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 60: /* NullStmt: NuLL SEMICOLON  */
#line 474 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                     {
        (yyval.StmtType) = new NullStmt();
    }
#line 2063 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 61: /* AssignStmt: Identifier ASSIGN Expression SEMICOLON  */
#line 480 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                             {
        DEBUG_YACC("================Enter AssignStmt=================");
        SymbolEntry *se = identifiers->lookup((yyvsp[-3].StrType));
        if(!se) {
            std::cerr << "[YACC ERROR]: Can't not get symbolEntry: "<< (yyvsp[-3].StrType) << "\n";
        }
        (yyval.StmtType) = new AssignStmt(se, (yyvsp[-1].ExprType));
        DEBUG_YACC("================Leave AssignStmt=================");
    }
#line 2077 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 62: /* ReturnStmt: RETURN SEMICOLON  */
#line 492 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                       {
        (yyval.StmtType) = new ReturnStmt(nullptr);
    }
#line 2085 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 63: /* ReturnStmt: RETURN Expression SEMICOLON  */
#line 495 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                      {
        (yyval.StmtType) = new ReturnStmt((yyvsp[-1].ExprType));
    }
#line 2093 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 64: /* ProcedureCall: Name SEMICOLON  */
#line 501 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                     {
        (yyval.StmtType) = new CallStmt(dynamic_cast<Id*>((yyvsp[-1].ExprType)));
    }
#line 2101 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 65: /* ExitStmt: EXIT IdOpt WhenOpt SEMICOLON  */
#line 507 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                   {
        (yyval.StmtType) = new ExitStmt((yyvsp[-1].ExprType));
    }
#line 2109 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 66: /* WhenOpt: %empty  */
#line 513 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
             { (yyval.ExprType) = nullptr; }
#line 2115 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 67: /* WhenOpt: WHEN Condition  */
#line 514 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                         {
        (yyval.ExprType) = (yyvsp[0].ExprType);
    }
#line 2123 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 68: /* IfStmt: IF CondClauses ElseOpt END IF SEMICOLON  */
#line 520 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                              {
        (yyval.StmtType) = new IfStmt(dynamic_cast<CondClause*>((yyvsp[-4].StmtType)), dynamic_cast<Stmt*>((yyvsp[-3].StmtType)));
    }
#line 2131 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 69: /* CondClauses: CondClause  */
#line 526 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                 {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 2139 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 70: /* CondClauses: CondClauses ELSIF CondClause  */
#line 529 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                       {
        (yyval.StmtType) = (yyvsp[-2].StmtType);
        (yyvsp[-2].StmtType)->setNext((yyvsp[0].StmtType));
    }
#line 2148 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 71: /* CondClause: CondPart Statements  */
#line 536 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                          {
        (yyval.StmtType) = new CondClause((yyvsp[-1].ExprType), dynamic_cast<Stmt*>((yyvsp[0].StmtType)));
    }
#line 2156 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 72: /* CondPart: Condition THEN  */
#line 542 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                     {
        (yyval.ExprType) = (yyvsp[-1].ExprType);
    }
#line 2164 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 73: /* Condition: Expression  */
#line 548 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                 {
        (yyval.ExprType) = (yyvsp[0].ExprType); 
    }
#line 2172 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 74: /* ElseOpt: %empty  */
#line 553 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                 { (yyval.StmtType) = nullptr; }
#line 2178 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 75: /* ElseOpt: ELSE Statements  */
#line 554 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                          {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 2186 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 76: /* CaseStmt: CASE Expression IS Alternatives END CASE SEMICOLON  */
#line 560 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                                         {
        (yyval.StmtType) = new CaseStmt((yyvsp[-5].ExprType), dynamic_cast<Alternative*>((yyvsp[-3].StmtType)));
    }
#line 2194 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 77: /* Alternatives: %empty  */
#line 566 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
             { (yyval.StmtType) = nullptr; }
#line 2200 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 78: /* Alternatives: Alternatives Alternative  */
#line 567 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                   {
        if((yyvsp[-1].StmtType)) {
            (yyval.StmtType) = (yyvsp[-1].StmtType);
            (yyvsp[-1].StmtType)->setNext((yyvsp[0].StmtType));
        } else {
            (yyval.StmtType) = (yyvsp[0].StmtType);
        }
    }
#line 2213 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 79: /* Alternative: WHEN Choices RIGHTSHAFT Statements  */
#line 578 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                         {
        (yyval.StmtType) = new Alternative(dynamic_cast<Choice*>((yyvsp[-2].StmtType)), dynamic_cast<Stmt*>((yyvsp[0].StmtType)));
    }
#line 2221 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 80: /* Choices: Choice  */
#line 584 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
             {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 2229 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 81: /* Choices: Choices SINGLEOR Choice  */
#line 587 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                  {
        (yyval.StmtType) = (yyvsp[-2].StmtType);
        (yyvsp[-2].StmtType)->setNext((yyvsp[0].StmtType));
    }
#line 2238 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 82: /* Choice: Expression  */
#line 594 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                 {
        (yyval.StmtType) = new Choice((yyvsp[0].ExprType));
    }
#line 2246 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 83: /* Choice: DiscreteWithRange  */
#line 597 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                            {
        (yyval.StmtType) = new Choice(dynamic_cast<DiscreteRange*>((yyvsp[0].StmtType)));
    }
#line 2254 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 84: /* Choice: OTHERS  */
#line 600 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                 {
        (yyval.StmtType) = new Choice(true);
    }
#line 2262 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 85: /* DiscreteWithRange: Identifier RANGE Range  */
#line 606 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                             {
        Type* type = dynamic_cast<Range*>((yyvsp[0].StmtType))->getType();
        SymbolEntry* se = new IdentifierSymbolEntry(type, (yyvsp[-2].StrType), identifiers->getLevel());
        (yyval.StmtType) = new DiscreteRange(se, dynamic_cast<Range*>((yyvsp[0].StmtType)));
    }
#line 2272 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 86: /* DiscreteWithRange: Range  */
#line 611 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                {
        (yyval.StmtType) = new DiscreteRange(dynamic_cast<Range*>((yyvsp[0].StmtType)));
    }
#line 2280 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 87: /* LoopStmt: LabelOpt Iteration BasicLoop IdOpt SEMICOLON  */
#line 617 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                                   {
        (yyval.StmtType) = new LoopStmt(dynamic_cast<LabelOpt*>((yyvsp[-4].StmtType)), dynamic_cast<Iteration*>((yyvsp[-3].StmtType)), dynamic_cast<BasicLoopStmt*>((yyvsp[-2].StmtType)));
        if(!whileIters.empty() && whileIters.back()) {
            SymbolTable* ScopeTable = identifiers;
            identifiers = identifiers->getPrev();
            delete ScopeTable;
        }
        whileIters.pop_back();
    }
#line 2294 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 88: /* LabelOpt: %empty  */
#line 628 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                  { (yyval.StmtType) = nullptr; }
#line 2300 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 89: /* LabelOpt: Identifier COLON  */
#line 629 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                           {
        SymbolEntry *se = new IdentifierSymbolEntry(TypeSystem::integerType, (yyvsp[-1].StrType), identifiers->getLevel());
        identifiers->install((yyvsp[-1].StrType), se);
        (yyval.StmtType) = new LabelOpt(se);
    }
#line 2310 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 90: /* Iteration: %empty  */
#line 636 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                   {
        whileIters.push_back(false);
        (yyval.StmtType) = nullptr; 
    }
#line 2319 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 91: /* Iteration: WHILE Condition  */
#line 640 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                          {
        (yyval.StmtType) = new Iteration((yyvsp[0].ExprType));
        whileIters.push_back(false);
    }
#line 2328 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 92: /* Iteration: IterPart ReverseOpt DiscreteRange  */
#line 644 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                            {
        (yyval.StmtType) = new Iteration(dynamic_cast<IterPart*>((yyvsp[-2].StmtType)), (yyvsp[-1].SignType), dynamic_cast<DiscreteRange*>((yyvsp[0].StmtType)));
        whileIters.push_back(true);
    }
#line 2337 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 93: /* IterPart: FOR Identifier IN  */
#line 651 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                        {
        identifiers = new SymbolTable(identifiers);
        SymbolEntry *se = new IdentifierSymbolEntry(TypeSystem::integerType, (yyvsp[-1].StrType), identifiers->getLevel());
        identifiers->install((yyvsp[-1].StrType), se);
        (yyval.StmtType) = new IterPart(se);
    }
#line 2348 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 94: /* ReverseOpt: %empty  */
#line 659 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                    { (yyval.SignType) = nullptr; }
#line 2354 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 95: /* ReverseOpt: REVERSE  */
#line 660 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                  {
        (yyval.SignType) = new OpSignNode(OpSignNode::REVERSE);
    }
#line 2362 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 96: /* BasicLoop: LOOP Statements END LOOP  */
#line 666 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                               {
        (yyval.StmtType) = new BasicLoopStmt(dynamic_cast<Stmt*>((yyvsp[-2].StmtType)));
    }
#line 2370 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 97: /* IdOpt: %empty  */
#line 672 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                 { (yyval.ExprType) = nullptr; }
#line 2376 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 98: /* IdOpt: Identifier  */
#line 673 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                     {
        SymbolEntry* se = identifiers->lookup((yyvsp[0].StrType));
        (yyval.ExprType) = new Id(se);
    }
#line 2385 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 99: /* DiscreteRange: Identifier RangeConstrOpt  */
#line 680 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                {
        SymbolEntry *se = new IdentifierSymbolEntry(TypeSystem::integerType, (yyvsp[-1].StrType), identifiers->getLevel());
        identifiers->install((yyvsp[-1].StrType), se);
        (yyval.StmtType) = new DiscreteRange(se, dynamic_cast<Range*>((yyvsp[0].StmtType)));
    }
#line 2395 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 100: /* DiscreteRange: Range  */
#line 685 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                {
        (yyval.StmtType) = new DiscreteRange(dynamic_cast<Range*>((yyvsp[0].StmtType)));
    }
#line 2403 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 101: /* RangeConstrOpt: %empty  */
#line 690 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                        { (yyval.StmtType) = nullptr; }
#line 2409 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 102: /* RangeConstrOpt: RANGE Range  */
#line 691 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                      {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 2417 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 103: /* Range: SimpleExpression DOTDOT SimpleExpression  */
#line 697 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                               {
        (yyval.StmtType) = new Range((yyvsp[-2].ExprType), (yyvsp[0].ExprType));
    }
#line 2425 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 104: /* Block: LabelOpt BlockDecl BlockBody END IdOpt SEMICOLON  */
#line 703 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                                       {
        (yyval.StmtType) = new Block(dynamic_cast<LabelOpt*>((yyvsp[-5].StmtType)), dynamic_cast<DeclItemOrBodyStmt*>((yyvsp[-4].StmtType)), dynamic_cast<Stmt*>((yyvsp[-3].StmtType)));
    }
#line 2433 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 105: /* BlockDecl: %empty  */
#line 708 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                   { (yyval.StmtType) = nullptr; }
#line 2439 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 106: /* BlockDecl: DECLARE DeclPart  */
#line 709 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                           {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 2447 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 107: /* BlockBody: BEGiN Statements  */
#line 715 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                       {
        DEBUG_YACC("================Enter BlockBody=================");
        (yyval.StmtType) = (yyvsp[0].StmtType);
        DEBUG_YACC("================Enter BlockBody=================");

    }
#line 2458 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 108: /* Expression: Relation  */
#line 724 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
               {
        (yyval.ExprType) = (yyvsp[0].ExprType);
    }
#line 2466 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 109: /* Expression: Expression Logical Relation  */
#line 727 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                      {
        (yyval.ExprType) = new BinaryExpr((yyvsp[-2].ExprType), (yyvsp[0].ExprType), (yyvsp[-1].SignType));
    }
#line 2474 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 110: /* Expression: Expression ShortCircuit Relation  */
#line 730 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                           {
        (yyval.ExprType) = new BinaryExpr((yyvsp[-2].ExprType), (yyvsp[0].ExprType), (yyvsp[-1].SignType));
    }
#line 2482 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 111: /* Logical: AND  */
#line 736 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
          {
        (yyval.SignType) = new OpSignNode(OpSignNode::AND);
    }
#line 2490 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 112: /* Logical: OR  */
#line 739 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
             {
        (yyval.SignType) = new OpSignNode(OpSignNode::OR);
    }
#line 2498 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 113: /* Logical: XOR  */
#line 742 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
              {
        (yyval.SignType) = new OpSignNode(OpSignNode::XOR);
    }
#line 2506 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 114: /* ShortCircuit: AND THEN  */
#line 748 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
               {
        (yyval.SignType) = new OpSignNode(OpSignNode::ANDTHEN);
    }
#line 2514 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 115: /* ShortCircuit: OR ELSE  */
#line 751 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                  {
        (yyval.SignType) = new OpSignNode(OpSignNode::ORELSE);
    }
#line 2522 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 116: /* Relation: SimpleExpression  */
#line 757 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                       {
        (yyval.ExprType) = (yyvsp[0].ExprType);
    }
#line 2530 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 117: /* Relation: SimpleExpression Relational SimpleExpression  */
#line 760 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                                       {
        (yyval.ExprType) = new BinaryExpr((yyvsp[-2].ExprType), (yyvsp[0].ExprType), (yyvsp[-1].SignType));
    }
#line 2538 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 118: /* Relation: SimpleExpression Membership Range  */
#line 763 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                            {
        (yyval.ExprType) = new BinaryExpr((yyvsp[-2].ExprType), dynamic_cast<Range*>((yyvsp[0].StmtType)), (yyvsp[-1].SignType));
    }
#line 2546 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 119: /* Relation: SimpleExpression Membership Identifier  */
#line 766 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                                 {
        SymbolEntry* se = new IdentifierSymbolEntry(TypeSystem::integerType, (yyvsp[0].StrType), identifiers->getLevel());
        (yyval.ExprType) = new BinaryExpr((yyvsp[-2].ExprType), se, (yyvsp[-1].SignType));
    }
#line 2555 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 120: /* Relational: EQ  */
#line 773 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
         {
        (yyval.SignType) = new OpSignNode(OpSignNode::EQ);
    }
#line 2563 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 121: /* Relational: NE  */
#line 776 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
             {
        (yyval.SignType) = new OpSignNode(OpSignNode::NE);
    }
#line 2571 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 122: /* Relational: LE  */
#line 779 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
             {
        (yyval.SignType) = new OpSignNode(OpSignNode::LE);
    }
#line 2579 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 123: /* Relational: LTEQ  */
#line 782 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
               {
        (yyval.SignType) = new OpSignNode(OpSignNode::LTEQ);
    }
#line 2587 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 124: /* Relational: GE  */
#line 785 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
             {
        (yyval.SignType) = new OpSignNode(OpSignNode::GE);
    }
#line 2595 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 125: /* Relational: GTEQ  */
#line 788 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
               {
        (yyval.SignType) = new OpSignNode(OpSignNode::GTEQ);
    }
#line 2603 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 126: /* Membership: IN  */
#line 794 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
         {
        (yyval.SignType) = new OpSignNode(OpSignNode::IN);
    }
#line 2611 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 127: /* Membership: NOT IN  */
#line 797 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                 {
        (yyval.SignType) = new OpSignNode(OpSignNode::NOTIN);
    }
#line 2619 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 128: /* SimpleExpression: Unary Term  */
#line 803 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                 {
        (yyval.ExprType) = new BinaryExpr((yyvsp[0].ExprType), (yyvsp[-1].SignType));
    }
#line 2627 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 129: /* SimpleExpression: Term  */
#line 806 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
               {
        (yyval.ExprType) = (yyvsp[0].ExprType);
    }
#line 2635 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 130: /* SimpleExpression: SimpleExpression Adding Term  */
#line 809 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                       {
        (yyval.ExprType) = new BinaryExpr((yyvsp[-2].ExprType), (yyvsp[0].ExprType), (yyvsp[-1].SignType));
    }
#line 2643 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 131: /* Unary: ADD  */
#line 815 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
          {
        (yyval.SignType) = new OpSignNode(OpSignNode::ADD);
    }
#line 2651 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 132: /* Unary: SUB  */
#line 818 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
              {
        (yyval.SignType) = new OpSignNode(OpSignNode::SUB);
    }
#line 2659 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 133: /* Adding: ADD  */
#line 824 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
          {
        (yyval.SignType) = new OpSignNode(OpSignNode::ADD);
    }
#line 2667 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 134: /* Adding: SUB  */
#line 827 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
              {
        (yyval.SignType) = new OpSignNode(OpSignNode::SUB);
    }
#line 2675 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 135: /* Adding: SINGLEAND  */
#line 830 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                    {
        (yyval.SignType) = new OpSignNode(OpSignNode::SINGLEAND);
    }
#line 2683 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 136: /* Term: Factor  */
#line 836 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
             {
        (yyval.ExprType) = (yyvsp[0].ExprType);
    }
#line 2691 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 137: /* Term: Term Multiplying Factor  */
#line 839 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                  {
        (yyval.ExprType) = new BinaryExpr((yyvsp[-2].ExprType), (yyvsp[0].ExprType), (yyvsp[-1].SignType));
    }
#line 2699 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 138: /* Multiplying: MUL  */
#line 845 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
          {
        (yyval.SignType) = new OpSignNode(OpSignNode::MUL);
    }
#line 2707 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 139: /* Multiplying: DIV  */
#line 848 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
              {
        (yyval.SignType) = new OpSignNode(OpSignNode::DIV);
    }
#line 2715 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 140: /* Multiplying: MOD  */
#line 851 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
              {
        (yyval.SignType) = new OpSignNode(OpSignNode::MOD);
    }
#line 2723 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 141: /* Multiplying: REM  */
#line 854 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
              {
        (yyval.SignType) = new OpSignNode(OpSignNode::REM);
    }
#line 2731 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 142: /* Factor: Primary  */
#line 860 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
              {
        (yyval.ExprType) = (yyvsp[0].ExprType);
    }
#line 2739 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 143: /* Factor: NOT Primary  */
#line 863 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                      {
        (yyval.ExprType) = new FactorExpr((yyvsp[0].ExprType), FactorExpr::NOT);
    }
#line 2747 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 144: /* Factor: ABS Primary  */
#line 866 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                      {
        (yyval.ExprType) = new FactorExpr((yyvsp[0].ExprType), FactorExpr::ABS);
    }
#line 2755 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 145: /* Factor: Primary EXPON Primary  */
#line 869 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                {
        (yyval.ExprType) = new BinaryExpr((yyvsp[-2].ExprType), (yyvsp[0].ExprType), new OpSignNode(OpSignNode::EXPON));
    }
#line 2763 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 146: /* Primary: Literal  */
#line 875 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
              {
        (yyval.ExprType) = (yyvsp[0].ExprType);
    }
#line 2771 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 147: /* Primary: Name  */
#line 878 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
               {
        (yyval.ExprType) = (yyvsp[0].ExprType);
    }
#line 2779 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 148: /* Primary: ParenthesizedPrimary  */
#line 881 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                               {
        (yyval.ExprType) = (yyvsp[0].ExprType);
    }
#line 2787 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 149: /* Name: Identifier  */
#line 887 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                 {
        SymbolEntry* se = identifiers->lookup((yyvsp[0].StrType));
        if(!se) {
            std::cerr << "[YACC ERROR]: Can't not get SymbolEntry "<< (yyvsp[0].StrType) << " !\n";
        }
        (yyval.ExprType) = new Id(se);
    }
#line 2799 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 150: /* Name: IndexedComp  */
#line 894 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                  {
        (yyval.ExprType) = (yyvsp[0].ExprType);
    }
#line 2807 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 151: /* Name: Attribute  */
#line 897 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                {
        (yyval.ExprType) = (yyvsp[0].ExprType);
    }
#line 2815 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 152: /* Name: INTEGER  */
#line 900 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
              {
        SymbolEntry *se = new IdentifierSymbolEntry(TypeSystem::integerType, "Integer", 0);
        globals->install("Integer", se);
        (yyval.ExprType) = new Id(se);
    }
#line 2825 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 153: /* IndexedComp: Name LPAREN Values RPAREN  */
#line 908 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                {
        (yyval.ExprType) = new Id(dynamic_cast<Id*>((yyvsp[-3].ExprType)), (yyvsp[-1].ExprType));
    }
#line 2833 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 154: /* Values: Value  */
#line 914 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
            {
        (yyval.ExprType) = (yyvsp[0].ExprType);
    }
#line 2841 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 155: /* Values: Values COMMA Value  */
#line 917 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                             {
        (yyval.ExprType) = (yyvsp[-2].ExprType);
        (yyvsp[-2].ExprType)->setNext((yyvsp[0].ExprType));
    }
#line 2850 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 156: /* Value: Expression  */
#line 924 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                 {
        (yyval.ExprType) = (yyvsp[0].ExprType);
    }
#line 2858 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 157: /* Attribute: Name TIC AttributeId  */
#line 930 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                           {
        (yyval.ExprType) = new Id(dynamic_cast<Id*>((yyvsp[-2].ExprType)), (yyvsp[0].StrType));
    }
#line 2866 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 158: /* AttributeId: Identifier  */
#line 936 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                 {
        (yyval.StrType) = (yyvsp[0].StrType);
    }
#line 2874 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 159: /* ParenthesizedPrimary: LPAREN Expression RPAREN  */
#line 942 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                               {
        (yyval.ExprType) = (yyvsp[-1].ExprType);
    }
#line 2882 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 160: /* Literal: DECIMIAL  */
#line 948 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
               {
        SymbolEntry* se = new ConstantSymbolEntry(TypeSystem::integerType, (yyvsp[0].IntType));
        (yyval.ExprType) = new Constant(se);
    }
#line 2891 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 161: /* Literal: STRINGLITERAL  */
#line 952 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                        {
        SymbolEntry* se = new ConstantSymbolEntry(TypeSystem::stringType, (yyvsp[0].StrType));
        (yyval.ExprType) = new Constant(se);
    }
#line 2900 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 162: /* Literal: NuLL  */
#line 956 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
               {
        (yyval.ExprType) = nullptr;
    }
#line 2908 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 163: /* Literal: TRuE  */
#line 959 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
           {
        SymbolEntry* se = new ConstantSymbolEntry(TypeSystem::boolType, true);
        (yyval.ExprType) = new Constant(se);
    }
#line 2917 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 164: /* Literal: FALsE  */
#line 963 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
            {
        SymbolEntry* se = new ConstantSymbolEntry(TypeSystem::boolType, false);
        (yyval.ExprType) = new Constant(se);
    }
#line 2926 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;


#line 2930 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"

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

#line 968 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"


int yyerror(char const* message)
{
    std::cerr<<message<<std::endl;
    return -1;
}
