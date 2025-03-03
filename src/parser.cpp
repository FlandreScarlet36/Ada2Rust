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
  YYSYMBOL_119_2 = 119,                    /* $@2  */
  YYSYMBOL_FormalPartOpt = 120,            /* FormalPartOpt  */
  YYSYMBOL_FormalPart = 121,               /* FormalPart  */
  YYSYMBOL_Params = 122,                   /* Params  */
  YYSYMBOL_Param = 123,                    /* Param  */
  YYSYMBOL_Type = 124,                     /* Type  */
  YYSYMBOL_InitOpt = 125,                  /* InitOpt  */
  YYSYMBOL_SubprogBody = 126,              /* SubprogBody  */
  YYSYMBOL_127_3 = 127,                    /* $@3  */
  YYSYMBOL_DeclPart = 128,                 /* DeclPart  */
  YYSYMBOL_Decl = 129,                     /* Decl  */
  YYSYMBOL_ObjectDecl = 130,               /* ObjectDecl  */
  YYSYMBOL_DefIds = 131,                   /* DefIds  */
  YYSYMBOL_DefId = 132,                    /* DefId  */
  YYSYMBOL_DeclItemOrBodys = 133,          /* DeclItemOrBodys  */
  YYSYMBOL_DeclItemOrBody = 134,           /* DeclItemOrBody  */
  YYSYMBOL_Statements = 135,               /* Statements  */
  YYSYMBOL_Statement = 136,                /* Statement  */
  YYSYMBOL_SimpleStmt = 137,               /* SimpleStmt  */
  YYSYMBOL_PutStmt = 138,                  /* PutStmt  */
  YYSYMBOL_PutlineStmt = 139,              /* PutlineStmt  */
  YYSYMBOL_GetStmt = 140,                  /* GetStmt  */
  YYSYMBOL_CompoundStmt = 141,             /* CompoundStmt  */
  YYSYMBOL_NullStmt = 142,                 /* NullStmt  */
  YYSYMBOL_AssignStmt = 143,               /* AssignStmt  */
  YYSYMBOL_ReturnStmt = 144,               /* ReturnStmt  */
  YYSYMBOL_ProcedureCall = 145,            /* ProcedureCall  */
  YYSYMBOL_ExitStmt = 146,                 /* ExitStmt  */
  YYSYMBOL_WhenOpt = 147,                  /* WhenOpt  */
  YYSYMBOL_IfStmt = 148,                   /* IfStmt  */
  YYSYMBOL_CondClauses = 149,              /* CondClauses  */
  YYSYMBOL_CondClause = 150,               /* CondClause  */
  YYSYMBOL_CondPart = 151,                 /* CondPart  */
  YYSYMBOL_Condition = 152,                /* Condition  */
  YYSYMBOL_ElseOpt = 153,                  /* ElseOpt  */
  YYSYMBOL_CaseStmt = 154,                 /* CaseStmt  */
  YYSYMBOL_Alternatives = 155,             /* Alternatives  */
  YYSYMBOL_Alternative = 156,              /* Alternative  */
  YYSYMBOL_Choices = 157,                  /* Choices  */
  YYSYMBOL_Choice = 158,                   /* Choice  */
  YYSYMBOL_DiscreteWithRange = 159,        /* DiscreteWithRange  */
  YYSYMBOL_LoopStmt = 160,                 /* LoopStmt  */
  YYSYMBOL_LabelOpt = 161,                 /* LabelOpt  */
  YYSYMBOL_Iteration = 162,                /* Iteration  */
  YYSYMBOL_IterPart = 163,                 /* IterPart  */
  YYSYMBOL_ReverseOpt = 164,               /* ReverseOpt  */
  YYSYMBOL_BasicLoop = 165,                /* BasicLoop  */
  YYSYMBOL_IdOpt = 166,                    /* IdOpt  */
  YYSYMBOL_DiscreteRange = 167,            /* DiscreteRange  */
  YYSYMBOL_RangeConstrOpt = 168,           /* RangeConstrOpt  */
  YYSYMBOL_Range = 169,                    /* Range  */
  YYSYMBOL_Block = 170,                    /* Block  */
  YYSYMBOL_BlockDecl = 171,                /* BlockDecl  */
  YYSYMBOL_BlockBody = 172,                /* BlockBody  */
  YYSYMBOL_Expression = 173,               /* Expression  */
  YYSYMBOL_Logical = 174,                  /* Logical  */
  YYSYMBOL_ShortCircuit = 175,             /* ShortCircuit  */
  YYSYMBOL_Relation = 176,                 /* Relation  */
  YYSYMBOL_Relational = 177,               /* Relational  */
  YYSYMBOL_Membership = 178,               /* Membership  */
  YYSYMBOL_SimpleExpression = 179,         /* SimpleExpression  */
  YYSYMBOL_Unary = 180,                    /* Unary  */
  YYSYMBOL_Adding = 181,                   /* Adding  */
  YYSYMBOL_Term = 182,                     /* Term  */
  YYSYMBOL_Multiplying = 183,              /* Multiplying  */
  YYSYMBOL_Factor = 184,                   /* Factor  */
  YYSYMBOL_Primary = 185,                  /* Primary  */
  YYSYMBOL_Name = 186,                     /* Name  */
  YYSYMBOL_IndexedComp = 187,              /* IndexedComp  */
  YYSYMBOL_Values = 188,                   /* Values  */
  YYSYMBOL_Value = 189,                    /* Value  */
  YYSYMBOL_Attribute = 190,                /* Attribute  */
  YYSYMBOL_AttributeId = 191,              /* AttributeId  */
  YYSYMBOL_ParenthesizedPrimary = 192,     /* ParenthesizedPrimary  */
  YYSYMBOL_Literal = 193                   /* Literal  */
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
#define YYLAST   439

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  111
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  83
/* YYNRULES -- Number of rules.  */
#define YYNRULES  165
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  270

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
     191,   203,   203,   234,   234,   270,   271,   277,   283,   286,
     292,   300,   303,   306,   309,   314,   315,   321,   321,   340,
     341,   348,   351,   357,   368,   383,   386,   393,   401,   404,
     411,   414,   420,   423,   430,   433,   439,   442,   445,   448,
     451,   454,   457,   460,   466,   473,   479,   489,   492,   495,
     498,   504,   510,   522,   525,   531,   537,   543,   544,   550,
     556,   559,   566,   572,   578,   583,   584,   590,   596,   597,
     608,   614,   617,   624,   627,   630,   636,   641,   647,   658,
     659,   666,   670,   674,   681,   689,   690,   696,   702,   703,
     710,   715,   720,   721,   727,   733,   738,   739,   745,   754,
     757,   760,   766,   769,   772,   778,   781,   787,   790,   793,
     796,   803,   806,   809,   812,   815,   818,   824,   827,   833,
     836,   839,   845,   848,   854,   857,   860,   866,   869,   875,
     878,   881,   884,   890,   893,   896,   899,   905,   908,   911,
     917,   924,   927,   930,   938,   944,   947,   954,   960,   966,
     972,   978,   982,   986,   989,   993
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
  "SubprogSpec", "$@1", "$@2", "FormalPartOpt", "FormalPart", "Params",
  "Param", "Type", "InitOpt", "SubprogBody", "$@3", "DeclPart", "Decl",
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

#define YYPACT_NINF (-141)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-151)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      45,   -68,   -44,   -79,   -30,   111,    45,  -141,  -141,  -141,
     -21,  -141,  -141,  -141,    -2,    10,  -141,  -141,  -141,  -141,
      16,    16,  -141,  -141,   103,    32,    65,  -141,  -141,  -141,
    -141,  -141,   116,  -141,  -141,   -72,  -141,   103,  -141,    59,
      31,  -141,   146,   298,   130,    25,    53,  -141,   146,    32,
    -141,  -141,  -141,  -141,  -141,  -141,   134,    74,   134,    67,
     101,    68,    71,    76,    -3,  -141,   288,  -141,  -141,  -141,
    -141,  -141,  -141,  -141,  -141,  -141,  -141,  -141,  -141,  -141,
    -141,   136,  -141,     3,  -141,  -141,    74,   146,   164,  -141,
     164,  -141,   333,   333,  -141,  -141,  -141,  -141,  -141,  -141,
    -141,  -141,   134,    -7,  -141,    85,   216,   113,  -141,   174,
       4,  -141,  -141,  -141,   102,    20,  -141,   298,   105,   112,
    -141,  -141,     2,   134,   134,   106,   134,  -141,  -141,   103,
     115,   134,   158,   132,   116,   120,  -141,   134,   118,   164,
     134,   121,  -141,  -141,  -141,    12,   127,  -141,   181,  -141,
     134,   134,  -141,  -141,  -141,  -141,  -141,  -141,  -141,   172,
    -141,  -141,  -141,   134,   186,   216,   113,  -141,  -141,  -141,
    -141,   216,   333,   134,   122,   298,   134,   194,   232,  -141,
    -141,   129,   208,   143,    56,  -141,   189,  -141,   298,    74,
    -141,   202,   200,  -141,  -141,   112,    48,  -141,  -141,   151,
     112,  -141,  -141,  -141,   -17,  -141,  -141,  -141,  -141,   -32,
       7,  -141,     9,   113,  -141,  -141,  -141,  -141,   311,  -141,
     217,   162,   163,   168,  -141,  -141,   325,   173,   -20,  -141,
    -141,    74,  -141,   134,  -141,   211,   157,  -141,   134,   182,
    -141,  -141,  -141,   226,  -141,   134,  -141,   184,  -141,   185,
    -141,   224,    -6,  -141,  -141,  -141,   112,    30,   -32,  -141,
    -141,  -141,  -141,  -141,   134,   298,   157,  -141,   246,  -141
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     2,     3,     7,     5,
       0,     6,    13,    11,     0,     0,     1,     4,    27,    10,
      15,    15,     9,     8,    29,     0,     0,    16,    12,    37,
      32,    40,     0,    41,    31,     0,    35,    30,    38,     0,
       0,    18,     0,    89,     0,     0,     0,    39,     0,     0,
      17,    21,    23,    24,    22,    14,     0,    98,     0,     0,
       0,     0,     0,     0,   150,   153,    89,    42,    44,    51,
      52,    53,    45,    46,    47,    48,    49,    50,    57,    58,
      59,    91,    60,     0,   151,   152,    98,     0,    25,    36,
      25,    19,     0,     0,   133,   132,   163,   164,   165,   161,
     150,   162,     0,     0,   109,   117,     0,   130,   137,   143,
     148,   149,   147,    99,    67,    75,    70,    89,     0,    74,
      61,    63,     0,     0,     0,     0,     0,    90,    43,    29,
       0,     0,     0,    95,     0,     0,    65,     0,     0,    25,
       0,     0,    20,   145,   144,     0,   112,    78,   113,   114,
       0,     0,   124,   126,   122,   125,   123,   121,   127,     0,
     135,   134,   136,     0,     0,     0,   129,   139,   140,   141,
     142,     0,     0,     0,     0,    89,     0,     0,    89,    73,
      64,     0,     0,     0,     0,   107,     0,    92,    89,    98,
      96,     0,     0,   159,   158,   157,     0,   155,    28,     0,
      26,    33,   160,   115,     0,   116,   110,   111,   128,   118,
     120,   119,     0,   131,   138,   146,    68,    66,    89,    71,
       0,     0,     0,     0,    62,    94,    89,     0,   150,    93,
     101,    98,   154,     0,    34,     0,     0,    79,     0,     0,
      55,    54,    56,     0,    88,     0,   100,     0,   156,     0,
      85,   150,     0,    81,    84,    87,    83,   117,   104,    69,
      97,   103,   105,    77,     0,    89,     0,    86,    89,    82
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -141,  -141,  -141,   289,  -141,    34,  -141,  -141,  -141,   280,
    -141,  -141,   254,   -15,   -71,    46,  -141,   175,  -141,  -141,
    -141,   260,  -141,   272,  -113,   -64,  -141,  -141,  -141,  -141,
    -141,  -141,  -141,  -141,  -141,  -141,  -141,  -141,  -141,   144,
    -141,   -76,  -141,  -141,  -141,  -141,  -141,    60,  -141,  -141,
    -141,  -141,  -141,  -141,  -141,   -83,  -141,  -141,  -140,  -141,
    -141,   197,   -55,  -141,  -141,   -60,  -141,  -141,  -115,  -141,
    -141,   -85,  -141,   148,   -77,   -43,  -141,  -141,   109,  -141,
    -141,  -141,  -141
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     5,     6,     7,     8,    30,    10,    21,    20,    26,
      27,    40,    41,    55,   141,    31,    24,    32,    33,    34,
      35,    36,    37,    38,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,   174,    78,   115,   116,
     117,   118,   177,    79,   204,   237,   252,   253,   254,    80,
      81,   132,   133,   191,   189,   114,   229,   246,   255,    82,
     134,    44,   119,   150,   151,   104,   163,   164,   105,   106,
     165,   107,   171,   108,   109,   110,    84,   196,   197,    85,
     194,   111,   112
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      83,   103,   128,   138,   178,   122,   135,   135,   181,   182,
    -150,   265,  -150,   126,   238,   143,   144,  -150,   146,   142,
      14,   166,   235,    83,   211,   160,   161,   146,    18,    12,
      88,  -102,    45,    90,     9,   238,    46,   146,   152,   153,
       9,   154,   147,   155,   156,   157,    11,   145,   209,   212,
     245,   230,    11,    13,   148,   187,    87,   175,   176,  -150,
    -150,  -150,   218,   148,  -150,  -150,   160,   161,   199,    15,
     236,   184,   139,   148,    83,   226,   212,   162,   158,  -150,
     213,   146,   195,   149,    19,   200,   159,   160,   161,     1,
     206,   207,   149,   152,   153,   215,   154,   216,   155,   156,
     157,   127,   149,    22,   266,   261,   227,   180,   136,   137,
     137,    16,     2,  -150,   128,    23,  -150,   148,   162,   202,
      92,   257,    25,   258,   267,    51,    52,    53,    54,    39,
     212,     3,    83,   158,     4,    83,    49,   146,    50,   162,
      42,   159,   160,   161,    43,    83,   149,     1,   247,   212,
      29,   257,   268,    92,   128,   232,   233,    93,    94,    95,
      96,   224,   128,    48,  -106,   167,   168,   169,   129,    86,
       2,   113,   120,   148,   123,    83,    92,   124,   195,   130,
     140,   256,   125,    83,   172,   170,   160,   161,   179,   173,
      93,    94,    95,    96,   162,    97,    98,    99,   100,   101,
      29,    65,   149,   183,   128,    92,   121,   102,   190,   188,
     203,   256,   186,    93,    94,    95,    96,   193,   205,   250,
     208,    92,    83,   198,   131,    83,   201,   217,    97,    98,
      99,   100,   101,   220,    65,    92,   221,   225,   162,   231,
     102,   249,    93,    94,    95,    96,    51,    52,    53,    54,
     223,    97,    98,    99,   251,   101,   234,    65,    93,    94,
      95,    96,    56,   102,   239,   160,   161,   240,   241,   -72,
     -72,   -72,    93,   242,    57,    96,    56,   260,   244,    58,
      97,    98,    99,   210,   101,   -80,    65,   259,    57,   262,
     263,    59,   102,    58,   264,    17,    97,    98,    99,   228,
     101,    28,    65,    91,   185,    59,    89,    60,   102,    47,
      97,    98,    99,   100,   101,   222,    65,   162,    56,   214,
     219,    60,   102,    61,    62,    63,   269,  -108,    56,    64,
      57,   192,    65,   -80,     0,    58,     0,    61,    62,    63,
      57,    56,   248,    64,     0,    58,    65,    59,     0,     0,
     -76,     0,     0,    57,     0,    56,     0,    59,    58,     0,
       0,     0,     0,    60,   243,     0,     0,    57,     0,     0,
      59,     0,    58,    60,     0,     0,     0,     0,     0,    61,
      62,    63,     0,     0,    59,    64,    60,     0,    65,    61,
      62,    63,    96,     0,     0,    64,     0,     0,    65,     0,
      60,     0,    61,    62,    63,     0,     0,     0,    64,     0,
       0,    65,     0,     0,     0,     0,    61,    62,    63,     0,
       0,     0,    64,     0,     0,    65,     0,    97,    98,    99,
     100,   101,     0,    65,     0,     0,     0,     0,     0,   102
};

static const yytype_int16 yycheck[] =
{
      43,    56,    66,    86,   117,    60,     3,     3,   123,   124,
       3,    17,     5,    16,     5,    92,    93,    10,    25,    90,
      99,   106,    39,    66,   164,    57,    58,    25,    49,    97,
      45,    51,   104,    48,     0,     5,   108,    25,     8,     9,
       6,    11,    49,    13,    14,    15,     0,   102,   163,   164,
      70,   191,     6,    97,    61,   131,    31,    37,    38,    52,
      53,    54,   175,    61,    57,    58,    57,    58,   139,    99,
      87,   126,    87,    61,   117,   188,   191,   109,    48,    72,
     165,    25,   137,    90,   105,   140,    56,    57,    58,    44,
     150,   151,    90,     8,     9,   172,    11,   173,    13,    14,
      15,   104,    90,   105,   110,   245,   189,   105,   105,   106,
     106,     0,    67,   106,   178,   105,   109,    61,   109,   107,
      19,   236,   106,   238,   264,   100,   101,   102,   103,    97,
     245,    86,   175,    48,    89,   178,   105,    25,   107,   109,
      75,    56,    57,    58,    28,   188,    90,    44,   231,   264,
      97,   266,   265,    19,   218,   107,   108,    56,    57,    58,
      59,   105,   226,   104,    28,    52,    53,    54,    32,    39,
      67,    97,   105,    61,   106,   218,    19,   106,   233,    43,
      16,   236,   106,   226,    10,    72,    57,    58,    83,    87,
      56,    57,    58,    59,   109,    94,    95,    96,    97,    98,
      97,   100,    90,    97,   268,    19,   105,   106,    76,    51,
      83,   266,    97,    56,    57,    58,    59,    97,    37,    62,
      48,    19,   265,   105,    88,   268,   105,   105,    94,    95,
      96,    97,    98,    39,   100,    19,   107,    48,   109,    39,
     106,    30,    56,    57,    58,    59,   100,   101,   102,   103,
     107,    94,    95,    96,    97,    98,   105,   100,    56,    57,
      58,    59,    30,   106,    47,    57,    58,   105,   105,    37,
      38,    39,    56,   105,    42,    59,    30,    51,   105,    47,
      94,    95,    96,    97,    98,    39,   100,   105,    42,   105,
     105,    59,   106,    47,    70,     6,    94,    95,    96,    97,
      98,    21,   100,    49,   129,    59,    46,    75,   106,    37,
      94,    95,    96,    97,    98,   107,   100,   109,    30,   171,
     176,    75,   106,    91,    92,    93,   266,    39,    30,    97,
      42,   134,   100,    87,    -1,    47,    -1,    91,    92,    93,
      42,    30,   233,    97,    -1,    47,   100,    59,    -1,    -1,
      39,    -1,    -1,    42,    -1,    30,    -1,    59,    47,    -1,
      -1,    -1,    -1,    75,    39,    -1,    -1,    42,    -1,    -1,
      59,    -1,    47,    75,    -1,    -1,    -1,    -1,    -1,    91,
      92,    93,    -1,    -1,    59,    97,    75,    -1,   100,    91,
      92,    93,    59,    -1,    -1,    97,    -1,    -1,   100,    -1,
      75,    -1,    91,    92,    93,    -1,    -1,    -1,    97,    -1,
      -1,   100,    -1,    -1,    -1,    -1,    91,    92,    93,    -1,
      -1,    -1,    97,    -1,    -1,   100,    -1,    94,    95,    96,
      97,    98,    -1,   100,    -1,    -1,    -1,    -1,    -1,   106
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    44,    67,    86,    89,   112,   113,   114,   115,   116,
     117,   126,    97,    97,    99,    99,     0,   114,    49,   105,
     119,   118,   105,   105,   127,   106,   120,   121,   120,    97,
     116,   126,   128,   129,   130,   131,   132,   133,   134,    97,
     122,   123,    75,    28,   172,   104,   108,   134,   104,   105,
     107,   100,   101,   102,   103,   124,    30,    42,    47,    59,
      75,    91,    92,    93,    97,   100,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   148,   154,
     160,   161,   170,   186,   187,   190,    39,    31,   124,   132,
     124,   123,    19,    56,    57,    58,    59,    94,    95,    96,
      97,    98,   106,   173,   176,   179,   180,   182,   184,   185,
     186,   192,   193,    97,   166,   149,   150,   151,   152,   173,
     105,   105,   173,   106,   106,   106,    16,   104,   136,    32,
      43,    88,   162,   163,   171,     3,   105,   106,   166,   124,
      16,   125,   125,   185,   185,   173,    25,    49,    61,    90,
     174,   175,     8,     9,    11,    13,    14,    15,    48,    56,
      57,    58,   109,   177,   178,   181,   182,    52,    53,    54,
      72,   183,    10,    87,   147,    37,    38,   153,   135,    83,
     105,   179,   179,    97,   173,   128,    97,   152,    51,   165,
      76,   164,   172,    97,   191,   173,   188,   189,   105,   125,
     173,   105,   107,    83,   155,    37,   176,   176,    48,   179,
      97,   169,   179,   182,   184,   185,   152,   105,   135,   150,
      39,   107,   107,   107,   105,    48,   135,   166,    97,   167,
     169,    39,   107,   108,   105,    39,    87,   156,     5,    47,
     105,   105,   105,    39,   105,    70,   168,   166,   189,    30,
      62,    97,   157,   158,   159,   169,   173,   179,   179,   105,
      51,   169,   105,   105,    70,    17,   110,   169,   135,   158
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,   111,   112,   113,   113,   114,   114,   114,   115,   115,
     116,   118,   117,   119,   117,   120,   120,   121,   122,   122,
     123,   124,   124,   124,   124,   125,   125,   127,   126,   128,
     128,   129,   129,   130,   130,   131,   131,   132,   133,   133,
     134,   134,   135,   135,   136,   136,   137,   137,   137,   137,
     137,   137,   137,   137,   138,   139,   140,   141,   141,   141,
     141,   142,   143,   144,   144,   145,   146,   147,   147,   148,
     149,   149,   150,   151,   152,   153,   153,   154,   155,   155,
     156,   157,   157,   158,   158,   158,   159,   159,   160,   161,
     161,   162,   162,   162,   163,   164,   164,   165,   166,   166,
     167,   167,   168,   168,   169,   170,   171,   171,   172,   173,
     173,   173,   174,   174,   174,   175,   175,   176,   176,   176,
     176,   177,   177,   177,   177,   177,   177,   178,   178,   179,
     179,   179,   180,   180,   181,   181,   181,   182,   182,   183,
     183,   183,   183,   184,   184,   184,   184,   185,   185,   185,
     186,   186,   186,   186,   187,   188,   188,   189,   190,   191,
     192,   193,   193,   193,   193,   193
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     1,     3,     3,
       2,     0,     4,     0,     6,     0,     1,     3,     1,     3,
       4,     1,     1,     1,     1,     0,     2,     0,     8,     0,
       1,     1,     1,     5,     6,     1,     3,     1,     1,     2,
       1,     1,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     5,     5,     5,     1,     1,     1,
       1,     2,     4,     2,     3,     2,     4,     0,     2,     6,
       1,     3,     2,     2,     1,     0,     2,     7,     0,     2,
       4,     1,     3,     1,     1,     1,     3,     1,     5,     0,
       2,     0,     2,     3,     3,     0,     1,     4,     0,     1,
       2,     1,     0,     2,     3,     6,     0,     2,     2,     1,
       3,     3,     1,     1,     1,     2,     2,     1,     3,     3,
       3,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       1,     3,     1,     1,     1,     1,     1,     1,     3,     1,
       1,     1,     1,     1,     2,     2,     3,     1,     1,     1,
       1,     1,     1,     1,     4,     1,     3,     1,     3,     1,
       3,     1,     1,     1,     1,     1
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
#line 1533 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 3: /* CompUnit: Unit  */
#line 156 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
           {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 1541 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 4: /* CompUnit: CompUnit Unit  */
#line 159 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                    {
        (yyval.StmtType) = new SeqNode((yyvsp[-1].StmtType), (yyvsp[0].StmtType));
    }
#line 1549 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 5: /* Unit: SubprogDecl  */
#line 165 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                  {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 1557 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 6: /* Unit: SubprogBody  */
#line 168 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                      {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 1565 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 7: /* Unit: PackageCall  */
#line 171 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                  {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 1573 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 8: /* PackageCall: WITH PACKAGEID SEMICOLON  */
#line 178 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                               {
        DEBUG_YACC("================Enter PackageCall=================");
        (yyval.StmtType) = new PackageCall((yyvsp[-1].StrType));
        DEBUG_YACC("================Leave PackageCall=================");
    }
#line 1583 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 9: /* PackageCall: USE PACKAGEID SEMICOLON  */
#line 183 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                              {
        DEBUG_YACC("================Enter PackageCall=================");
        (yyval.StmtType) = new PackageCall((yyvsp[-1].StrType));
        DEBUG_YACC("================Leave PackageCall=================");
    }
#line 1593 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
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
#line 1607 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
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
#line 1623 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
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
#line 1649 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 13: /* $@2: %empty  */
#line 234 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
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
#line 1665 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 14: /* SubprogSpec: FUNCTION Identifier $@2 FormalPartOpt RETURN Type  */
#line 244 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
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
#line 1693 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 15: /* FormalPartOpt: %empty  */
#line 270 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
             { (yyval.StmtType) = nullptr; }
#line 1699 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 16: /* FormalPartOpt: FormalPart  */
#line 271 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                     {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 1707 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 17: /* FormalPart: LPAREN Params RPAREN  */
#line 277 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                           {
        (yyval.StmtType) = (yyvsp[-1].StmtType);
    }
#line 1715 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 18: /* Params: Param  */
#line 283 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
            {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 1723 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 19: /* Params: Params SEMICOLON Param  */
#line 286 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                 {
        (yyval.StmtType) = (yyvsp[-2].StmtType);
        (yyvsp[-2].StmtType)->setNext((yyvsp[0].StmtType));
    }
#line 1732 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 20: /* Param: Identifier COLON Type InitOpt  */
#line 292 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                      {
        SymbolEntry *se = new IdentifierSymbolEntry((yyvsp[-1].type), (yyvsp[-3].StrType), IdentifierSymbolEntry::PARAM);
        identifiers->install((yyvsp[-3].StrType), se);
        (yyval.StmtType) = new ParamNode(se, dynamic_cast<InitOptStmt*>((yyvsp[0].StmtType)));
    }
#line 1742 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 21: /* Type: INTEGER  */
#line 300 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
              {
        (yyval.type) = TypeSystem::integerType;
    }
#line 1750 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 22: /* Type: BOOLEAN  */
#line 303 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
              {
        (yyval.type) = TypeSystem::boolType;
    }
#line 1758 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 23: /* Type: STRING  */
#line 306 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
             {
        (yyval.type) = TypeSystem::stringType;
    }
#line 1766 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 24: /* Type: NATURAL  */
#line 309 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
              {
        (yyval.type) = TypeSystem::naturalType;
    }
#line 1774 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 25: /* InitOpt: %empty  */
#line 314 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                 { (yyval.StmtType) = nullptr; }
#line 1780 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 26: /* InitOpt: ASSIGN Expression  */
#line 315 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                            {
        (yyval.StmtType) = new InitOptStmt((yyvsp[0].ExprType));
    }
#line 1788 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 27: /* $@3: %empty  */
#line 321 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                     {
        DEBUG_YACC("================Enter SubprogBody=================");
        // Enter into new scope.
        identifiers = new SymbolTable(identifiers);
        procedureIters.push_back(dynamic_cast<ProcedureSpec*>((yyvsp[-1].StmtType)));
    }
#line 1799 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 28: /* SubprogBody: SubprogSpec IS $@3 DeclPart BlockBody END IdOpt SEMICOLON  */
#line 326 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
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
#line 1816 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 29: /* DeclPart: %empty  */
#line 340 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                 { (yyval.StmtType) = nullptr; }
#line 1822 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 30: /* DeclPart: DeclItemOrBodys  */
#line 341 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                          {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 1830 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 31: /* Decl: ObjectDecl  */
#line 348 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
               {
        (yyval.StmtType) = new DeclStmt(dynamic_cast<ObjectDeclStmt*>((yyvsp[0].StmtType)));
    }
#line 1838 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 32: /* Decl: SubprogDecl  */
#line 351 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                  {
        (yyval.StmtType) = new DeclStmt(dynamic_cast<ProcedureDecl*>((yyvsp[0].StmtType)));
    }
#line 1846 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 33: /* ObjectDecl: DefIds COLON Type InitOpt SEMICOLON  */
#line 357 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
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
#line 1862 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 34: /* ObjectDecl: DefIds COLON CONSTANT Type InitOpt SEMICOLON  */
#line 368 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
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
#line 1879 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 35: /* DefIds: DefId  */
#line 383 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
            {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 1887 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 36: /* DefIds: DefIds COMMA DefId  */
#line 386 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                         {
        (yyval.StmtType) = (yyvsp[-2].StmtType);
        (yyvsp[-2].StmtType)->setNext((yyvsp[0].StmtType));
    }
#line 1896 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 37: /* DefId: Identifier  */
#line 393 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                 {
        IdentifierSymbolEntry *se = new IdentifierSymbolEntry((yyvsp[0].StrType), identifiers->getLevel());
        identifiers->install((yyvsp[0].StrType), se);
        (yyval.StmtType) = new DefId(se);
    }
#line 1906 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 38: /* DeclItemOrBodys: DeclItemOrBody  */
#line 401 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                     {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 1914 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 39: /* DeclItemOrBodys: DeclItemOrBodys DeclItemOrBody  */
#line 404 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                         {
        (yyval.StmtType) = (yyvsp[-1].StmtType);
        (yyvsp[-1].StmtType)->setNext((yyvsp[0].StmtType));
    }
#line 1923 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 40: /* DeclItemOrBody: SubprogBody  */
#line 411 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                  {
        (yyval.StmtType) = new DeclItemOrBodyStmt(dynamic_cast<ProcedureDef*>((yyvsp[0].StmtType)));
    }
#line 1931 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 41: /* DeclItemOrBody: Decl  */
#line 414 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
               {
        (yyval.StmtType) = new DeclItemOrBodyStmt(dynamic_cast<DeclStmt*>((yyvsp[0].StmtType)));
    }
#line 1939 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 42: /* Statements: Statement  */
#line 420 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 1947 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 43: /* Statements: Statements Statement  */
#line 423 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                               {
        (yyval.StmtType) = (yyvsp[-1].StmtType);
        (yyvsp[-1].StmtType)->setNext((yyvsp[0].StmtType));
    }
#line 1956 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 44: /* Statement: SimpleStmt  */
#line 430 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                 {
        (yyval.StmtType) = new Stmt((yyvsp[0].StmtType));
    }
#line 1964 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 45: /* Statement: CompoundStmt  */
#line 433 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                       {
        (yyval.StmtType) = new Stmt((yyvsp[0].StmtType));
    }
#line 1972 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 46: /* SimpleStmt: NullStmt  */
#line 439 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
               {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 1980 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 47: /* SimpleStmt: AssignStmt  */
#line 442 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                     {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 1988 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 48: /* SimpleStmt: ReturnStmt  */
#line 445 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                     {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 1996 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 49: /* SimpleStmt: ProcedureCall  */
#line 448 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                        {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 2004 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 50: /* SimpleStmt: ExitStmt  */
#line 451 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
               {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 2012 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 51: /* SimpleStmt: PutStmt  */
#line 454 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
              {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 2020 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 52: /* SimpleStmt: PutlineStmt  */
#line 457 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                  {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 2028 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 53: /* SimpleStmt: GetStmt  */
#line 460 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
              {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 2036 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 54: /* PutStmt: PUT LPAREN SimpleExpression RPAREN SEMICOLON  */
#line 466 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                                   {
        (yyval.StmtType) = new PutStmt((yyvsp[-2].ExprType));
    }
#line 2044 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 55: /* PutlineStmt: PUT_LINE LPAREN SimpleExpression RPAREN SEMICOLON  */
#line 473 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                                        {
        (yyval.StmtType) = new PutlineStmt((yyvsp[-2].ExprType));
    }
#line 2052 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 56: /* GetStmt: GET LPAREN Identifier RPAREN SEMICOLON  */
#line 479 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                             {
        IdentifierSymbolEntry *se = dynamic_cast<IdentifierSymbolEntry*>(identifiers->lookup((yyvsp[-2].StrType)));            
        if(!se) {
            std::cerr << "[YACC ERROR]: Can't not get symbolEntry: "<< (yyvsp[-2].StrType) << "\n";
        }
        (yyval.StmtType) = new GetStmt(se);
    }
#line 2064 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 57: /* CompoundStmt: IfStmt  */
#line 489 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
             {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 2072 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 58: /* CompoundStmt: CaseStmt  */
#line 492 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                   {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 2080 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 59: /* CompoundStmt: LoopStmt  */
#line 495 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                   {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 2088 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 60: /* CompoundStmt: Block  */
#line 498 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 2096 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 61: /* NullStmt: NuLL SEMICOLON  */
#line 504 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                     {
        (yyval.StmtType) = new NullStmt();
    }
#line 2104 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 62: /* AssignStmt: Identifier ASSIGN Expression SEMICOLON  */
#line 510 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                             {
        DEBUG_YACC("================Enter AssignStmt=================");
        SymbolEntry *se = identifiers->lookup((yyvsp[-3].StrType));
        if(!se) {
            std::cerr << "[YACC ERROR]: Can't not get symbolEntry: "<< (yyvsp[-3].StrType) << "\n";
        }
        (yyval.StmtType) = new AssignStmt(se, (yyvsp[-1].ExprType));
        DEBUG_YACC("================Leave AssignStmt=================");
    }
#line 2118 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 63: /* ReturnStmt: RETURN SEMICOLON  */
#line 522 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                       {
        (yyval.StmtType) = new ReturnStmt(nullptr);
    }
#line 2126 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 64: /* ReturnStmt: RETURN Expression SEMICOLON  */
#line 525 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                      {
        (yyval.StmtType) = new ReturnStmt((yyvsp[-1].ExprType));
    }
#line 2134 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 65: /* ProcedureCall: Name SEMICOLON  */
#line 531 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                     {
        (yyval.StmtType) = new CallStmt(dynamic_cast<Id*>((yyvsp[-1].ExprType)));
    }
#line 2142 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 66: /* ExitStmt: EXIT IdOpt WhenOpt SEMICOLON  */
#line 537 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                   {
        (yyval.StmtType) = new ExitStmt((yyvsp[-1].ExprType));
    }
#line 2150 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 67: /* WhenOpt: %empty  */
#line 543 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
             { (yyval.ExprType) = nullptr; }
#line 2156 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 68: /* WhenOpt: WHEN Condition  */
#line 544 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                         {
        (yyval.ExprType) = (yyvsp[0].ExprType);
    }
#line 2164 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 69: /* IfStmt: IF CondClauses ElseOpt END IF SEMICOLON  */
#line 550 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                              {
        (yyval.StmtType) = new IfStmt(dynamic_cast<CondClause*>((yyvsp[-4].StmtType)), dynamic_cast<Stmt*>((yyvsp[-3].StmtType)));
    }
#line 2172 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 70: /* CondClauses: CondClause  */
#line 556 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                 {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 2180 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 71: /* CondClauses: CondClauses ELSIF CondClause  */
#line 559 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                       {
        (yyval.StmtType) = (yyvsp[-2].StmtType);
        (yyvsp[-2].StmtType)->setNext((yyvsp[0].StmtType));
    }
#line 2189 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 72: /* CondClause: CondPart Statements  */
#line 566 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                          {
        (yyval.StmtType) = new CondClause((yyvsp[-1].ExprType), dynamic_cast<Stmt*>((yyvsp[0].StmtType)));
    }
#line 2197 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 73: /* CondPart: Condition THEN  */
#line 572 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                     {
        (yyval.ExprType) = (yyvsp[-1].ExprType);
    }
#line 2205 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 74: /* Condition: Expression  */
#line 578 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                 {
        (yyval.ExprType) = (yyvsp[0].ExprType); 
    }
#line 2213 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 75: /* ElseOpt: %empty  */
#line 583 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                 { (yyval.StmtType) = nullptr; }
#line 2219 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 76: /* ElseOpt: ELSE Statements  */
#line 584 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                          {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 2227 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 77: /* CaseStmt: CASE Expression IS Alternatives END CASE SEMICOLON  */
#line 590 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                                         {
        (yyval.StmtType) = new CaseStmt((yyvsp[-5].ExprType), dynamic_cast<Alternative*>((yyvsp[-3].StmtType)));
    }
#line 2235 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 78: /* Alternatives: %empty  */
#line 596 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
             { (yyval.StmtType) = nullptr; }
#line 2241 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 79: /* Alternatives: Alternatives Alternative  */
#line 597 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                   {
        if((yyvsp[-1].StmtType)) {
            (yyval.StmtType) = (yyvsp[-1].StmtType);
            (yyvsp[-1].StmtType)->setNext((yyvsp[0].StmtType));
        } else {
            (yyval.StmtType) = (yyvsp[0].StmtType);
        }
    }
#line 2254 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 80: /* Alternative: WHEN Choices RIGHTSHAFT Statements  */
#line 608 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                         {
        (yyval.StmtType) = new Alternative(dynamic_cast<Choice*>((yyvsp[-2].StmtType)), dynamic_cast<Stmt*>((yyvsp[0].StmtType)));
    }
#line 2262 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 81: /* Choices: Choice  */
#line 614 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
             {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 2270 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 82: /* Choices: Choices SINGLEOR Choice  */
#line 617 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                  {
        (yyval.StmtType) = (yyvsp[-2].StmtType);
        (yyvsp[-2].StmtType)->setNext((yyvsp[0].StmtType));
    }
#line 2279 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 83: /* Choice: Expression  */
#line 624 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                 {
        (yyval.StmtType) = new Choice((yyvsp[0].ExprType));
    }
#line 2287 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 84: /* Choice: DiscreteWithRange  */
#line 627 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                            {
        (yyval.StmtType) = new Choice(dynamic_cast<DiscreteRange*>((yyvsp[0].StmtType)));
    }
#line 2295 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 85: /* Choice: OTHERS  */
#line 630 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                 {
        (yyval.StmtType) = new Choice(true);
    }
#line 2303 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 86: /* DiscreteWithRange: Identifier RANGE Range  */
#line 636 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                             {
        Type* type = dynamic_cast<Range*>((yyvsp[0].StmtType))->getType();
        SymbolEntry* se = new IdentifierSymbolEntry(type, (yyvsp[-2].StrType), identifiers->getLevel());
        (yyval.StmtType) = new DiscreteRange(se, dynamic_cast<Range*>((yyvsp[0].StmtType)));
    }
#line 2313 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 87: /* DiscreteWithRange: Range  */
#line 641 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                {
        (yyval.StmtType) = new DiscreteRange(dynamic_cast<Range*>((yyvsp[0].StmtType)));
    }
#line 2321 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 88: /* LoopStmt: LabelOpt Iteration BasicLoop IdOpt SEMICOLON  */
#line 647 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                                   {
        (yyval.StmtType) = new LoopStmt(dynamic_cast<LabelOpt*>((yyvsp[-4].StmtType)), dynamic_cast<Iteration*>((yyvsp[-3].StmtType)), dynamic_cast<BasicLoopStmt*>((yyvsp[-2].StmtType)));
        if(!whileIters.empty() && whileIters.back()) {
            SymbolTable* ScopeTable = identifiers;
            identifiers = identifiers->getPrev();
            delete ScopeTable;
        }
        whileIters.pop_back();
    }
#line 2335 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 89: /* LabelOpt: %empty  */
#line 658 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                  { (yyval.StmtType) = nullptr; }
#line 2341 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 90: /* LabelOpt: Identifier COLON  */
#line 659 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                           {
        SymbolEntry *se = new IdentifierSymbolEntry(TypeSystem::integerType, (yyvsp[-1].StrType), identifiers->getLevel());
        identifiers->install((yyvsp[-1].StrType), se);
        (yyval.StmtType) = new LabelOpt(se);
    }
#line 2351 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 91: /* Iteration: %empty  */
#line 666 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                   {
        whileIters.push_back(false);
        (yyval.StmtType) = nullptr; 
    }
#line 2360 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 92: /* Iteration: WHILE Condition  */
#line 670 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                          {
        (yyval.StmtType) = new Iteration((yyvsp[0].ExprType));
        whileIters.push_back(false);
    }
#line 2369 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 93: /* Iteration: IterPart ReverseOpt DiscreteRange  */
#line 674 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                            {
        (yyval.StmtType) = new Iteration(dynamic_cast<IterPart*>((yyvsp[-2].StmtType)), (yyvsp[-1].SignType), dynamic_cast<DiscreteRange*>((yyvsp[0].StmtType)));
        whileIters.push_back(true);
    }
#line 2378 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 94: /* IterPart: FOR Identifier IN  */
#line 681 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                        {
        identifiers = new SymbolTable(identifiers);
        SymbolEntry *se = new IdentifierSymbolEntry(TypeSystem::integerType, (yyvsp[-1].StrType), identifiers->getLevel());
        identifiers->install((yyvsp[-1].StrType), se);
        (yyval.StmtType) = new IterPart(se);
    }
#line 2389 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 95: /* ReverseOpt: %empty  */
#line 689 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                    { (yyval.SignType) = nullptr; }
#line 2395 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 96: /* ReverseOpt: REVERSE  */
#line 690 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                  {
        (yyval.SignType) = new OpSignNode(OpSignNode::REVERSE);
    }
#line 2403 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 97: /* BasicLoop: LOOP Statements END LOOP  */
#line 696 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                               {
        (yyval.StmtType) = new BasicLoopStmt(dynamic_cast<Stmt*>((yyvsp[-2].StmtType)));
    }
#line 2411 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 98: /* IdOpt: %empty  */
#line 702 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                 { (yyval.ExprType) = nullptr; }
#line 2417 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 99: /* IdOpt: Identifier  */
#line 703 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                     {
        SymbolEntry* se = identifiers->lookup((yyvsp[0].StrType));
        (yyval.ExprType) = new Id(se);
    }
#line 2426 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 100: /* DiscreteRange: Identifier RangeConstrOpt  */
#line 710 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                {
        SymbolEntry *se = new IdentifierSymbolEntry(TypeSystem::integerType, (yyvsp[-1].StrType), identifiers->getLevel());
        identifiers->install((yyvsp[-1].StrType), se);
        (yyval.StmtType) = new DiscreteRange(se, dynamic_cast<Range*>((yyvsp[0].StmtType)));
    }
#line 2436 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 101: /* DiscreteRange: Range  */
#line 715 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                {
        (yyval.StmtType) = new DiscreteRange(dynamic_cast<Range*>((yyvsp[0].StmtType)));
    }
#line 2444 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 102: /* RangeConstrOpt: %empty  */
#line 720 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                        { (yyval.StmtType) = nullptr; }
#line 2450 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 103: /* RangeConstrOpt: RANGE Range  */
#line 721 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                      {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 2458 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 104: /* Range: SimpleExpression DOTDOT SimpleExpression  */
#line 727 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                               {
        (yyval.StmtType) = new Range((yyvsp[-2].ExprType), (yyvsp[0].ExprType));
    }
#line 2466 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 105: /* Block: LabelOpt BlockDecl BlockBody END IdOpt SEMICOLON  */
#line 733 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                                       {
        (yyval.StmtType) = new Block(dynamic_cast<LabelOpt*>((yyvsp[-5].StmtType)), dynamic_cast<DeclItemOrBodyStmt*>((yyvsp[-4].StmtType)), dynamic_cast<Stmt*>((yyvsp[-3].StmtType)));
    }
#line 2474 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 106: /* BlockDecl: %empty  */
#line 738 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                   { (yyval.StmtType) = nullptr; }
#line 2480 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 107: /* BlockDecl: DECLARE DeclPart  */
#line 739 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                           {
        (yyval.StmtType) = (yyvsp[0].StmtType);
    }
#line 2488 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 108: /* BlockBody: BEGiN Statements  */
#line 745 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                       {
        DEBUG_YACC("================Enter BlockBody=================");
        (yyval.StmtType) = (yyvsp[0].StmtType);
        DEBUG_YACC("================Enter BlockBody=================");

    }
#line 2499 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 109: /* Expression: Relation  */
#line 754 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
               {
        (yyval.ExprType) = (yyvsp[0].ExprType);
    }
#line 2507 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 110: /* Expression: Expression Logical Relation  */
#line 757 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                      {
        (yyval.ExprType) = new BinaryExpr((yyvsp[-2].ExprType), (yyvsp[0].ExprType), (yyvsp[-1].SignType));
    }
#line 2515 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 111: /* Expression: Expression ShortCircuit Relation  */
#line 760 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                           {
        (yyval.ExprType) = new BinaryExpr((yyvsp[-2].ExprType), (yyvsp[0].ExprType), (yyvsp[-1].SignType));
    }
#line 2523 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 112: /* Logical: AND  */
#line 766 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
          {
        (yyval.SignType) = new OpSignNode(OpSignNode::AND);
    }
#line 2531 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 113: /* Logical: OR  */
#line 769 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
             {
        (yyval.SignType) = new OpSignNode(OpSignNode::OR);
    }
#line 2539 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 114: /* Logical: XOR  */
#line 772 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
              {
        (yyval.SignType) = new OpSignNode(OpSignNode::XOR);
    }
#line 2547 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 115: /* ShortCircuit: AND THEN  */
#line 778 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
               {
        (yyval.SignType) = new OpSignNode(OpSignNode::ANDTHEN);
    }
#line 2555 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 116: /* ShortCircuit: OR ELSE  */
#line 781 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                  {
        (yyval.SignType) = new OpSignNode(OpSignNode::ORELSE);
    }
#line 2563 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 117: /* Relation: SimpleExpression  */
#line 787 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                       {
        (yyval.ExprType) = (yyvsp[0].ExprType);
    }
#line 2571 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 118: /* Relation: SimpleExpression Relational SimpleExpression  */
#line 790 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                                       {
        (yyval.ExprType) = new BinaryExpr((yyvsp[-2].ExprType), (yyvsp[0].ExprType), (yyvsp[-1].SignType));
    }
#line 2579 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 119: /* Relation: SimpleExpression Membership Range  */
#line 793 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                            {
        (yyval.ExprType) = new BinaryExpr((yyvsp[-2].ExprType), dynamic_cast<Range*>((yyvsp[0].StmtType)), (yyvsp[-1].SignType));
    }
#line 2587 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 120: /* Relation: SimpleExpression Membership Identifier  */
#line 796 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                                 {
        SymbolEntry* se = new IdentifierSymbolEntry(TypeSystem::integerType, (yyvsp[0].StrType), identifiers->getLevel());
        (yyval.ExprType) = new BinaryExpr((yyvsp[-2].ExprType), se, (yyvsp[-1].SignType));
    }
#line 2596 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 121: /* Relational: EQ  */
#line 803 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
         {
        (yyval.SignType) = new OpSignNode(OpSignNode::EQ);
    }
#line 2604 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 122: /* Relational: NE  */
#line 806 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
             {
        (yyval.SignType) = new OpSignNode(OpSignNode::NE);
    }
#line 2612 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 123: /* Relational: LE  */
#line 809 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
             {
        (yyval.SignType) = new OpSignNode(OpSignNode::LE);
    }
#line 2620 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 124: /* Relational: LTEQ  */
#line 812 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
               {
        (yyval.SignType) = new OpSignNode(OpSignNode::LTEQ);
    }
#line 2628 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 125: /* Relational: GE  */
#line 815 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
             {
        (yyval.SignType) = new OpSignNode(OpSignNode::GE);
    }
#line 2636 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 126: /* Relational: GTEQ  */
#line 818 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
               {
        (yyval.SignType) = new OpSignNode(OpSignNode::GTEQ);
    }
#line 2644 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 127: /* Membership: IN  */
#line 824 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
         {
        (yyval.SignType) = new OpSignNode(OpSignNode::IN);
    }
#line 2652 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 128: /* Membership: NOT IN  */
#line 827 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                 {
        (yyval.SignType) = new OpSignNode(OpSignNode::NOTIN);
    }
#line 2660 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 129: /* SimpleExpression: Unary Term  */
#line 833 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                 {
        (yyval.ExprType) = new BinaryExpr((yyvsp[0].ExprType), (yyvsp[-1].SignType));
    }
#line 2668 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 130: /* SimpleExpression: Term  */
#line 836 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
               {
        (yyval.ExprType) = (yyvsp[0].ExprType);
    }
#line 2676 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 131: /* SimpleExpression: SimpleExpression Adding Term  */
#line 839 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                       {
        (yyval.ExprType) = new BinaryExpr((yyvsp[-2].ExprType), (yyvsp[0].ExprType), (yyvsp[-1].SignType));
    }
#line 2684 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 132: /* Unary: ADD  */
#line 845 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
          {
        (yyval.SignType) = new OpSignNode(OpSignNode::ADD);
    }
#line 2692 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 133: /* Unary: SUB  */
#line 848 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
              {
        (yyval.SignType) = new OpSignNode(OpSignNode::SUB);
    }
#line 2700 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 134: /* Adding: ADD  */
#line 854 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
          {
        (yyval.SignType) = new OpSignNode(OpSignNode::ADD);
    }
#line 2708 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 135: /* Adding: SUB  */
#line 857 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
              {
        (yyval.SignType) = new OpSignNode(OpSignNode::SUB);
    }
#line 2716 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 136: /* Adding: SINGLEAND  */
#line 860 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                    {
        (yyval.SignType) = new OpSignNode(OpSignNode::SINGLEAND);
    }
#line 2724 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 137: /* Term: Factor  */
#line 866 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
             {
        (yyval.ExprType) = (yyvsp[0].ExprType);
    }
#line 2732 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 138: /* Term: Term Multiplying Factor  */
#line 869 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                  {
        (yyval.ExprType) = new BinaryExpr((yyvsp[-2].ExprType), (yyvsp[0].ExprType), (yyvsp[-1].SignType));
    }
#line 2740 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 139: /* Multiplying: MUL  */
#line 875 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
          {
        (yyval.SignType) = new OpSignNode(OpSignNode::MUL);
    }
#line 2748 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 140: /* Multiplying: DIV  */
#line 878 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
              {
        (yyval.SignType) = new OpSignNode(OpSignNode::DIV);
    }
#line 2756 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 141: /* Multiplying: MOD  */
#line 881 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
              {
        (yyval.SignType) = new OpSignNode(OpSignNode::MOD);
    }
#line 2764 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 142: /* Multiplying: REM  */
#line 884 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
              {
        (yyval.SignType) = new OpSignNode(OpSignNode::REM);
    }
#line 2772 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 143: /* Factor: Primary  */
#line 890 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
              {
        (yyval.ExprType) = (yyvsp[0].ExprType);
    }
#line 2780 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 144: /* Factor: NOT Primary  */
#line 893 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                      {
        (yyval.ExprType) = new FactorExpr((yyvsp[0].ExprType), FactorExpr::NOT);
    }
#line 2788 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 145: /* Factor: ABS Primary  */
#line 896 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                      {
        (yyval.ExprType) = new FactorExpr((yyvsp[0].ExprType), FactorExpr::ABS);
    }
#line 2796 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 146: /* Factor: Primary EXPON Primary  */
#line 899 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                {
        (yyval.ExprType) = new BinaryExpr((yyvsp[-2].ExprType), (yyvsp[0].ExprType), new OpSignNode(OpSignNode::EXPON));
    }
#line 2804 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 147: /* Primary: Literal  */
#line 905 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
              {
        (yyval.ExprType) = (yyvsp[0].ExprType);
    }
#line 2812 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 148: /* Primary: Name  */
#line 908 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
               {
        (yyval.ExprType) = (yyvsp[0].ExprType);
    }
#line 2820 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 149: /* Primary: ParenthesizedPrimary  */
#line 911 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                               {
        (yyval.ExprType) = (yyvsp[0].ExprType);
    }
#line 2828 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 150: /* Name: Identifier  */
#line 917 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                 {
        SymbolEntry* se = identifiers->lookup((yyvsp[0].StrType));
        if(!se) {
            std::cerr << "[YACC ERROR]: Can't not get SymbolEntry "<< (yyvsp[0].StrType) << " !\n";
        }
        (yyval.ExprType) = new Id(se);
    }
#line 2840 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 151: /* Name: IndexedComp  */
#line 924 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                  {
        (yyval.ExprType) = (yyvsp[0].ExprType);
    }
#line 2848 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 152: /* Name: Attribute  */
#line 927 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                {
        (yyval.ExprType) = (yyvsp[0].ExprType);
    }
#line 2856 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 153: /* Name: INTEGER  */
#line 930 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
              {
        SymbolEntry *se = new IdentifierSymbolEntry(TypeSystem::integerType, "Integer", 0);
        globals->install("Integer", se);
        (yyval.ExprType) = new Id(se);
    }
#line 2866 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 154: /* IndexedComp: Name LPAREN Values RPAREN  */
#line 938 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                                {
        (yyval.ExprType) = new Id(dynamic_cast<Id*>((yyvsp[-3].ExprType)), (yyvsp[-1].ExprType));
    }
#line 2874 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 155: /* Values: Value  */
#line 944 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
            {
        (yyval.ExprType) = (yyvsp[0].ExprType);
    }
#line 2882 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 156: /* Values: Values COMMA Value  */
#line 947 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                             {
        (yyval.ExprType) = (yyvsp[-2].ExprType);
        (yyvsp[-2].ExprType)->setNext((yyvsp[0].ExprType));
    }
#line 2891 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 157: /* Value: Expression  */
#line 954 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                 {
        (yyval.ExprType) = (yyvsp[0].ExprType);
    }
#line 2899 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 158: /* Attribute: Name TIC AttributeId  */
#line 960 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                           {
        (yyval.ExprType) = new Id(dynamic_cast<Id*>((yyvsp[-2].ExprType)), (yyvsp[0].StrType));
    }
#line 2907 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 159: /* AttributeId: Identifier  */
#line 966 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                 {
        (yyval.StrType) = (yyvsp[0].StrType);
    }
#line 2915 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 160: /* ParenthesizedPrimary: LPAREN Expression RPAREN  */
#line 972 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                               {
        (yyval.ExprType) = (yyvsp[-1].ExprType);
    }
#line 2923 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 161: /* Literal: DECIMIAL  */
#line 978 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
               {
        SymbolEntry* se = new ConstantSymbolEntry(TypeSystem::integerType, (yyvsp[0].IntType));
        (yyval.ExprType) = new Constant(se);
    }
#line 2932 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 162: /* Literal: STRINGLITERAL  */
#line 982 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
                        {
        SymbolEntry* se = new ConstantSymbolEntry(TypeSystem::stringType, (yyvsp[0].StrType));
        (yyval.ExprType) = new Constant(se);
    }
#line 2941 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 163: /* Literal: NuLL  */
#line 986 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
               {
        (yyval.ExprType) = nullptr;
    }
#line 2949 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 164: /* Literal: TRuE  */
#line 989 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
           {
        SymbolEntry* se = new ConstantSymbolEntry(TypeSystem::boolType, true);
        (yyval.ExprType) = new Constant(se);
    }
#line 2958 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;

  case 165: /* Literal: FALsE  */
#line 993 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"
            {
        SymbolEntry* se = new ConstantSymbolEntry(TypeSystem::boolType, false);
        (yyval.ExprType) = new Constant(se);
    }
#line 2967 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"
    break;


#line 2971 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.cpp"

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

#line 998 "/mnt/hgfs/Graduation/Ada2Rust/src/parser.y"


int yyerror(char const* message)
{
    std::cerr<<message<<std::endl;
    return -1;
}
