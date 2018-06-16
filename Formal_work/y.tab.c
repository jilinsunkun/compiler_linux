/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "yacc.y" /* yacc.c:339  */


	#include <stdlib.h>
	#include<string.h>
	#include"HashTable.h"

	int statment_number;

#line 75 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
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
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    NEG = 258,
    ADD_ADD = 259,
    LES_LES = 260,
    LE_OP = 261,
    GE_OP = 262,
    NE_OP = 263,
    AND_AND = 264,
    OR_OR = 265,
    ADD_OP = 266,
    LES_OP = 267,
    MUL_OP = 268,
    DIV_OP = 269,
    OP_LE = 270,
    EQ_OP = 271,
    LET = 272,
    BREAK = 273,
    CHAR = 274,
    CONTINUE = 275,
    DO = 276,
    ELSE = 277,
    ENUM = 278,
    EXTERN = 279,
    FLOAT = 280,
    FOR = 281,
    FN = 282,
    IF = 283,
    IN = 284,
    INTEGER = 285,
    REALCONSTANTS = 286,
    STR = 287,
    TRUE = 288,
    FALSE = 289,
    IDENTIFIER = 290,
    BOOL = 291,
    REAL = 292,
    INT = 293,
    VOID = 294,
    LOOP = 295,
    MATCH = 296,
    MUT = 297,
    PRINT = 298,
    PRINTLN = 299,
    PUB = 300,
    RETURN = 301,
    SELF = 302,
    STATIC = 303,
    WHERE = 304,
    USE = 305,
    WHILE = 306,
    CONST = 307,
    VAR = 308
  };
#endif
/* Tokens.  */
#define NEG 258
#define ADD_ADD 259
#define LES_LES 260
#define LE_OP 261
#define GE_OP 262
#define NE_OP 263
#define AND_AND 264
#define OR_OR 265
#define ADD_OP 266
#define LES_OP 267
#define MUL_OP 268
#define DIV_OP 269
#define OP_LE 270
#define EQ_OP 271
#define LET 272
#define BREAK 273
#define CHAR 274
#define CONTINUE 275
#define DO 276
#define ELSE 277
#define ENUM 278
#define EXTERN 279
#define FLOAT 280
#define FOR 281
#define FN 282
#define IF 283
#define IN 284
#define INTEGER 285
#define REALCONSTANTS 286
#define STR 287
#define TRUE 288
#define FALSE 289
#define IDENTIFIER 290
#define BOOL 291
#define REAL 292
#define INT 293
#define VOID 294
#define LOOP 295
#define MATCH 296
#define MUT 297
#define PRINT 298
#define PRINTLN 299
#define PUB 300
#define RETURN 301
#define SELF 302
#define STATIC 303
#define WHERE 304
#define USE 305
#define WHILE 306
#define CONST 307
#define VAR 308

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 9 "yacc.y" /* yacc.c:355  */

  char typeOF[200];
  char val[200];
  double double_type;
  int int_type;
  int int_val;

#line 229 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 246 "y.tab.c" /* yacc.c:358  */

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
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
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
#  define YYSIZE_T unsigned int
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

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
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
#define YYFINAL  15
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   369

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  71
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  54
/* YYNRULES -- Number of rules.  */
#define YYNRULES  103
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  206

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   308

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      61,    62,     6,     5,    60,     4,     2,     7,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    66,    63,
      65,     3,    64,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    67,     2,    68,     9,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    69,     2,    70,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,     8,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    38,    38,    92,    97,    98,   103,   104,   108,   110,
     109,   119,   120,   130,   143,   150,   153,   156,   175,   183,
     184,   194,   208,   209,   210,   211,   212,   213,   237,   293,
     294,   295,   300,   305,   332,   333,   334,   335,   336,   342,
     343,   347,   355,   356,   358,   363,   357,   373,   377,   373,
     388,   389,   442,   449,   457,   457,   474,   474,   490,   508,
     508,   525,   540,   540,   558,   564,   565,   569,   570,   570,
     574,   578,   590,   596,   599,   602,   615,   619,   648,   651,
     618,   654,   655,   654,   674,   675,   679,   680,   681,   682,
     683,   687,   692,   697,   698,   697,   725,   727,   724,   741,
     742,   743,   747,   748
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "'='", "'-'", "'+'", "'*'", "'/'", "NEG",
  "'^'", "ADD_ADD", "LES_LES", "LE_OP", "GE_OP", "NE_OP", "AND_AND",
  "OR_OR", "ADD_OP", "LES_OP", "MUL_OP", "DIV_OP", "OP_LE", "EQ_OP", "LET",
  "BREAK", "CHAR", "CONTINUE", "DO", "ELSE", "ENUM", "EXTERN", "FLOAT",
  "FOR", "FN", "IF", "IN", "INTEGER", "REALCONSTANTS", "STR", "TRUE",
  "FALSE", "IDENTIFIER", "BOOL", "REAL", "INT", "VOID", "LOOP", "MATCH",
  "MUT", "PRINT", "PRINTLN", "PUB", "RETURN", "SELF", "STATIC", "WHERE",
  "USE", "WHILE", "CONST", "VAR", "','", "'('", "')'", "';'", "'>'", "'<'",
  "':'", "'['", "']'", "'{'", "'}'", "$accept", "declarator",
  "Declarator_l", "pre_expression", "U_nary", "$@1", "multp_expression",
  "Val_declation", "add_expression", "expression", "assion_expression",
  "RE_expression", "type_specifier", "parameter_list",
  "parameter_declaration", "simple_statment", "$@2", "$@3", "$@4", "$@5",
  "compound_start", "compound_end", "declaration", "$@6", "$@7", "$@8",
  "$@9", "declaration_list", "compound_statement", "$@10",
  "expression_statement", "If_After_Check", "If_After_Ltrue",
  "selection_statement", "while_srarement", "while_After_Check",
  "while_After_Ltrue", "iteration_statement", "$@11", "$@12", "$@13",
  "$@14", "$@15", "statement_list", "statement", "func_expression",
  "add_main_func_first", "function_definition", "$@16", "$@17", "$@18",
  "$@19", "external_declation", "program", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,    61,    45,    43,    42,    47,   258,    94,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
      44,    40,    41,    59,    62,    60,    58,    91,    93,   123,
     125
};
# endif

#define YYPACT_NINF -102

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-102)))

#define YYTABLE_NINF -97

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -5,   -35,  -102,   -52,  -102,    -7,   -19,  -102,  -102,    19,
     -41,   -14,   301,  -102,   -27,  -102,  -102,    48,     5,   -46,
    -102,  -102,  -102,  -102,  -102,  -102,  -102,   -48,  -102,    17,
     316,   305,  -102,   305,   305,    58,   301,  -102,    44,    34,
      32,  -102,  -102,  -102,  -102,  -102,    96,    98,    49,   316,
      51,    46,   -17,  -102,  -102,  -102,   316,   113,   316,    61,
     305,    44,   106,  -102,    71,   316,    65,  -102,  -102,  -102,
     305,    66,  -102,  -102,    73,  -102,  -102,   253,  -102,    72,
    -102,    81,    83,    -2,  -102,  -102,   236,    85,    57,    51,
     301,  -102,    33,    70,   322,  -102,    -8,  -102,  -102,  -102,
    -102,  -102,   121,  -102,   253,   301,   322,   275,   282,   112,
     275,   275,   164,  -102,   149,   275,    51,   301,   301,   301,
     301,   169,   147,  -102,    -8,   301,   301,   301,  -102,  -102,
    -102,   143,   301,   105,    -8,   322,     7,    54,   288,   108,
     322,   322,   328,  -102,   322,  -102,  -102,  -102,  -102,   301,
     301,   301,   301,  -102,  -102,   111,   132,   301,  -102,   195,
     144,   146,   150,  -102,    70,   148,   301,  -102,   151,    28,
     275,  -102,  -102,   152,    -8,   175,   253,   156,   294,   253,
     161,   169,  -102,   165,  -102,  -102,   192,   168,   163,  -102,
    -102,   177,   170,   210,  -102,   186,   253,   177,   176,  -102,
     253,   188,   253,  -102,   214,  -102
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    91,     0,    65,   100,     0,    99,   102,     0,
      54,     0,     0,    66,     0,     1,   103,     0,     0,    59,
      17,    18,    14,    15,    16,     2,     4,     0,     3,    93,
       0,     0,    58,     0,     0,     0,     0,   101,     0,     0,
       0,    38,    37,    34,    35,    36,     0,    61,     0,     0,
       5,     0,     0,    39,    97,    55,     0,     0,     0,     0,
       0,     0,     0,    92,     0,     0,     0,    60,    41,    40,
       0,     0,    57,    63,     0,    94,    52,     0,    64,     0,
       9,     0,     0,     2,    44,    47,     0,     0,     4,     6,
       8,    22,    30,    29,    70,    23,    25,    86,    87,    88,
      90,    89,     0,    84,     0,     0,     0,     0,     0,     0,
       0,     0,     2,    50,     0,     0,     7,     0,     0,     0,
       0,     2,    11,    24,    26,     0,     0,     0,    53,    98,
      85,     0,    10,     0,    77,    71,     2,    28,     0,     0,
      45,    48,     0,    51,    75,    12,    13,    21,    20,     0,
      32,    31,    33,    95,    81,     0,     0,     0,    43,     0,
       0,     0,     2,    19,    28,     0,     0,    78,     0,     0,
       0,    46,    49,     0,    82,     0,     0,     0,     0,     0,
       0,     0,    79,     0,    27,    42,     0,     0,     0,    72,
      76,    68,     0,     0,    74,     0,     0,    68,     0,    83,
      69,     0,     0,    80,     0,    73
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -102,   -12,    -1,    38,  -102,  -102,  -102,   178,  -101,   -78,
     -91,   -68,    21,  -102,   198,  -102,  -102,  -102,  -102,  -102,
    -102,  -102,   255,  -102,  -102,  -102,  -102,  -102,    64,  -102,
    -102,  -102,  -102,  -102,  -102,  -102,  -102,  -102,  -102,  -102,
    -102,  -102,  -102,   -99,  -100,  -102,  -102,  -102,  -102,  -102,
    -102,  -102,   256,  -102
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    88,    89,    90,    91,   105,    92,    28,    93,    94,
      95,    96,    46,    52,    53,    97,   110,   160,   111,   161,
      77,   129,     4,    17,    18,    35,    57,     5,   195,   196,
      98,   156,   193,    99,   100,   165,   194,   101,   155,   175,
     188,   166,   180,   102,   103,     6,    71,     7,    38,    79,
      39,    63,     8,     9
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      26,   108,   130,   123,   125,   131,    10,   137,   114,    12,
     142,    27,    36,    11,    37,   133,     1,    32,     1,    15,
      33,    34,    14,   123,    26,   -56,   124,    19,     2,   135,
     138,   130,   140,   141,    29,    50,     3,   144,   134,   117,
     118,   164,     1,    61,   123,    62,   124,   123,   164,   123,
     123,    30,     2,   123,    47,    48,   126,   127,   119,   120,
       3,    49,   -19,   -11,   -11,   109,   -29,   124,   157,   -11,
     124,    31,   124,   124,   119,   120,   124,   183,    26,   -96,
     186,    68,   122,   130,   182,    51,   130,   123,    36,   116,
     177,    75,   178,    26,   122,    55,    54,   200,   174,    56,
     130,   -62,   122,   204,   130,   145,   146,   147,   148,    58,
     124,    36,    60,    26,    26,    26,    65,   -29,   -29,   -29,
      26,   -11,   -11,   122,    67,    80,   122,    70,   122,   122,
     163,   116,   122,    74,    72,    76,    78,   163,    26,    26,
      26,   104,   106,   132,   107,    26,   115,    80,   139,   116,
     116,   116,   -19,    81,   122,    82,   169,    20,    21,    22,
      23,    24,    83,   150,   151,   152,   122,   142,   154,    80,
      84,    85,   149,    86,   167,    81,   159,    82,    87,    20,
      21,    22,    23,    24,    83,    20,    21,    22,    23,    24,
     121,   128,    84,    85,   168,    86,    80,    81,   170,    82,
      87,    20,    21,    22,    23,    24,    83,   171,    40,   172,
     173,   157,   143,   153,    84,    85,   181,    86,    80,   184,
     176,   179,    87,   187,    81,   192,    82,    59,    20,    21,
      22,    23,    24,    83,    64,   189,    66,   191,   198,   197,
      80,    84,    85,    73,    86,   202,    81,   -67,    82,    87,
      20,    21,    22,    23,    24,    83,   199,    80,   203,    69,
      13,   201,   190,    84,    85,    16,    86,     0,     0,     0,
       0,    87,    20,    21,    22,    23,    24,   112,     0,    80,
       0,     0,     0,     0,   205,    81,    80,    82,     0,    20,
      21,    22,    23,    24,    83,     0,     0,     0,     0,   113,
       0,     0,    84,    85,     0,    86,     0,     0,     0,     0,
      87,    20,    21,    22,    23,    24,   112,     0,    20,    21,
      22,    23,    24,   136,    20,    21,    22,    23,    24,   121,
      20,    21,    22,    23,    24,   121,    41,    20,    21,    22,
      23,    24,    25,    42,     0,     0,     0,    43,     0,    44,
      45,   158,    20,    21,    22,    23,    24,   185,    20,    21,
      22,    23,    24,   121,    20,    21,    22,    23,    24,   162
};

static const yytype_int16 yycheck[] =
{
      12,     3,   102,    94,    12,   104,    41,   108,    86,    61,
       3,    12,    60,    48,    62,   106,    23,    63,    23,     0,
      66,    67,    41,   114,    36,    66,    94,    41,    33,   107,
     108,   131,   110,   111,    61,    36,    41,   115,   106,     6,
       7,   142,    23,    60,   135,    62,   114,   138,   149,   140,
     141,     3,    33,   144,    33,    34,    64,    65,     4,     5,
      41,     3,     5,     6,     7,    67,    12,   135,    61,    12,
     138,    66,   140,   141,     4,     5,   144,   176,    90,    62,
     179,    60,    94,   183,   175,    41,   186,   178,    60,    90,
      62,    70,   170,   105,   106,    63,    62,   196,   166,     3,
     200,     3,   114,   202,   204,   117,   118,   119,   120,    60,
     178,    60,    66,   125,   126,   127,     3,    63,    64,    65,
     132,    64,    65,   135,    63,     4,   138,    21,   140,   141,
     142,   132,   144,    68,    63,    69,    63,   149,   150,   151,
     152,    69,    61,   105,    61,   157,    61,     4,    36,   150,
     151,   152,     5,    32,   166,    34,   157,    36,    37,    38,
      39,    40,    41,   125,   126,   127,   178,     3,    63,     4,
      49,    50,     3,    52,    63,    32,    68,    34,    57,    36,
      37,    38,    39,    40,    41,    36,    37,    38,    39,    40,
      41,    70,    49,    50,    62,    52,     4,    32,     3,    34,
      57,    36,    37,    38,    39,    40,    41,    63,    30,    63,
      62,    61,    63,    70,    49,    50,    41,    52,     4,    63,
      69,    69,    57,    62,    32,    62,    34,    49,    36,    37,
      38,    39,    40,    41,    56,    70,    58,    69,    28,    69,
       4,    49,    50,    65,    52,    69,    32,    70,    34,    57,
      36,    37,    38,    39,    40,    41,    70,     4,    70,    61,
       5,   197,    70,    49,    50,     9,    52,    -1,    -1,    -1,
      -1,    57,    36,    37,    38,    39,    40,    41,    -1,     4,
      -1,    -1,    -1,    -1,    70,    32,     4,    34,    -1,    36,
      37,    38,    39,    40,    41,    -1,    -1,    -1,    -1,    63,
      -1,    -1,    49,    50,    -1,    52,    -1,    -1,    -1,    -1,
      57,    36,    37,    38,    39,    40,    41,    -1,    36,    37,
      38,    39,    40,    41,    36,    37,    38,    39,    40,    41,
      36,    37,    38,    39,    40,    41,    31,    36,    37,    38,
      39,    40,    41,    38,    -1,    -1,    -1,    42,    -1,    44,
      45,    63,    36,    37,    38,    39,    40,    63,    36,    37,
      38,    39,    40,    41,    36,    37,    38,    39,    40,    41
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    23,    33,    41,    93,    98,   116,   118,   123,   124,
      41,    48,    61,    93,    41,     0,   123,    94,    95,    41,
      36,    37,    38,    39,    40,    41,    72,    73,    78,    61,
       3,    66,    63,    66,    67,    96,    60,    62,   119,   121,
      78,    31,    38,    42,    44,    45,    83,    83,    83,     3,
      73,    41,    84,    85,    62,    63,     3,    97,    60,    78,
      66,    60,    62,   122,    78,     3,    78,    63,    83,    85,
      21,   117,    63,    78,    68,    83,    69,    91,    63,   120,
       4,    32,    34,    41,    49,    50,    52,    57,    72,    73,
      74,    75,    77,    79,    80,    81,    82,    86,   101,   104,
     105,   108,   114,   115,    69,    76,    61,    61,     3,    67,
      87,    89,    41,    63,    80,    61,    73,     6,     7,     4,
       5,    41,    72,    81,    82,    12,    64,    65,    70,    92,
     115,   114,    74,    81,    82,    80,    41,    79,    80,    36,
      80,    80,     3,    63,    80,    72,    72,    72,    72,     3,
      74,    74,    74,    70,    63,   109,   102,    61,    63,    68,
      88,    90,    41,    72,    79,   106,   112,    63,    62,    73,
       3,    63,    63,    62,    82,   110,    69,    62,    80,    69,
     113,    41,    81,   114,    63,    63,   114,    62,   111,    70,
      70,    69,    62,   103,   107,    99,   100,    69,    28,    70,
     114,    99,    69,    70,   114,    70
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    71,    72,    72,    73,    73,    74,    74,    75,    76,
      75,    77,    77,    77,    78,    78,    78,    78,    78,    79,
      79,    79,    80,    80,    80,    80,    80,    80,    81,    82,
      82,    82,    82,    82,    83,    83,    83,    83,    83,    84,
      84,    85,    86,    86,    87,    88,    86,    89,    90,    86,
      86,    86,    91,    92,    94,    93,    95,    93,    93,    96,
      93,    93,    97,    93,    93,    98,    98,    99,   100,    99,
     101,   102,   103,   104,   105,   106,   107,   109,   110,   111,
     108,   112,   113,   108,   114,   114,   115,   115,   115,   115,
     115,   116,   117,   119,   120,   118,   121,   122,   118,   123,
     123,   123,   124,   124
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     2,     1,     0,
       3,     1,     3,     3,     1,     1,     1,     1,     1,     1,
       3,     3,     1,     1,     2,     1,     2,     7,     3,     1,
       1,     3,     3,     3,     1,     1,     1,     1,     1,     1,
       3,     3,     7,     4,     0,     0,     5,     0,     0,     5,
       2,     3,     1,     1,     0,     6,     0,     8,     4,     0,
       7,     5,     0,     8,     9,     1,     2,     0,     0,     2,
       1,     0,     0,    13,     9,     0,     0,     0,     0,     0,
      12,     0,     0,    11,     1,     2,     1,     1,     1,     1,
       1,     1,     0,     0,     0,    12,     0,     0,    10,     1,
       1,     4,     1,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
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
  unsigned long int yylno = yyrline[yyrule];
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
                       &(yyvsp[(yyi + 1) - (yynrhs)])
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
            /* Fall through.  */
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

  return yystpcpy (yyres, yystr) - yyres;
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
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
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
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
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
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
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
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
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
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

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
| yyreduce -- Do a reduction.  |
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
#line 39 "yacc.y" /* yacc.c:1646  */
    {
	int is_found_ident = 0;
	int tmp_depth = itemDepth;
	tp_fun_index = now_fun_index;

	if(tp_fun_index != 0){
		while(tmp_depth > -1){
			int index_depth = lookup((yyvsp[0].val), tmp_depth);
			if(index_depth >= 0)
			{
				strcat(jasm, "\t\tiload ");
				char index_depth_str[10];
				sprintf(index_depth_str, "%d" , index_depth);

				strcat(jasm, index_depth_str);
				strcat(jasm, "\n");
				is_found_ident = 1;
				break;
			}
			tmp_depth--;
		}
		tp_fun_index = 0;
	}

	if (is_found_ident == 0)
	{
		if (lookup((yyvsp[0].val), 0) >= 0)
		{
			strcat(jasm, "\t\tgetstatic int rust_test.");
			strcat(jasm, (yyvsp[0].val));
			
		}
		else if(strcmp(lookup_const((yyvsp[0].val)), "") != 0)
		{
			strcat(jasm, "\t\tsipush ");
			strcat(jasm, lookup_const((yyvsp[0].val)));
			strcpy((yyvsp[0].val), lookup_const((yyvsp[0].val)));
		}
		else{
			strcat(jasm, "\t\tsipush ");
			strcat(jasm, (yyvsp[0].val));
		}
		
		strcat(jasm, "\n");
	}

	if (is_print == 1)
	{		
		is_print = 2;
		strcat(jasm, unary_symbol);
		memset(unary_symbol,0,strlen(unary_symbol));
	}
}
#line 1566 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 110 "yacc.y" /* yacc.c:1646  */
    {
	if (is_print == 1)
	{
		strcpy(unary_symbol,"\t\tineg\n");
	}
}
#line 1577 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 121 "yacc.y" /* yacc.c:1646  */
    {
		char tempJasm[1000] = "";
		int is_found_ident = 0;
		int tmp_depth = itemDepth;

		tp_fun_index = now_fun_index;
		strcat(tempJasm, "\t\timul\n");
		strcpy((yyval.val), tempJasm);
	}
#line 1591 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 131 "yacc.y" /* yacc.c:1646  */
    {
		char tempJasm[1000] = "";
		int is_found_ident = 0;
		int tmp_depth = itemDepth;

		tp_fun_index = now_fun_index;
		strcat(tempJasm, "\t\tidiv\n");
		strcpy((yyval.val), tempJasm);
	}
#line 1605 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 143 "yacc.y" /* yacc.c:1646  */
    {
	strcat(jasm, "\t\tldc ");
	strcat(jasm, "\"");
	strcat(jasm, (yyvsp[0].val));
	strcat(jasm, "\"");
	strcat(jasm, "\n");
}
#line 1617 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 150 "yacc.y" /* yacc.c:1646  */
    {
	strcpy((yyval.val), (yyvsp[0].val));
}
#line 1625 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 153 "yacc.y" /* yacc.c:1646  */
    {
	strcpy((yyval.val), (yyvsp[0].val));
}
#line 1633 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 157 "yacc.y" /* yacc.c:1646  */
    {
		char tempStr[50];
	sprintf( tempStr, "%d", (yyvsp[0].int_type) );

	if (is_assigning == 0)
	{
		if (is_print != 1)
		{
			strcat(jasm, "\t\tsipush ");
			strcat(jasm, tempStr);
			strcat(jasm, "\n");
		}
	}
	else{
		strcpy((yyval.val), tempStr);
	}
	
}
#line 1656 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 176 "yacc.y" /* yacc.c:1646  */
    {
	char tempStr[50];
	sprintf( tempStr, "%g", (yyvsp[0].double_type) );
	strcpy((yyval.val), tempStr);
}
#line 1666 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 185 "yacc.y" /* yacc.c:1646  */
    {
	char tempJasm[1000] = "";
	int is_found_ident = 0;
	int tmp_depth = itemDepth;

	tp_fun_index = now_fun_index;
	strcat(tempJasm, "\t\tiadd\n");
	strcpy((yyval.val), tempJasm);
}
#line 1680 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 195 "yacc.y" /* yacc.c:1646  */
    {
	char tempJasm[1000] = "";
	int is_found_ident = 0;
	int tmp_depth = itemDepth;

	tp_fun_index = now_fun_index;
	strcat(tempJasm, "\t\tisub\n");
	strcpy((yyval.val), tempJasm);
}
#line 1694 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 214 "yacc.y" /* yacc.c:1646  */
    {
	strcat(jasm, "\t\tinvokestatic int rust_test.");
	strcat(jasm, (yyvsp[-4].val));
	strcat(jasm, "(");
	strcat(jasm, temp_parameter);
	memset(temp_parameter,0,strlen(temp_parameter));
	strcat(jasm, ")");
	strcat(jasm, "\n");

		if (lookup((yyvsp[-6].val), 0) >= 0)
		{
			strcat(jasm, "\t\tputstatic int rust_test.");
		}
		else{
			strcat(jasm, "\t\tistore ");
		}

		strcat(jasm, (yyvsp[-6].val));
		strcat(jasm, "\n");
}
#line 1719 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 238 "yacc.y" /* yacc.c:1646  */
    {
 	is_assigning =1;
 	if (strcmp((yyvsp[0].val), "\t\tisub\n") == 0 | strcmp((yyvsp[0].val), "\t\tiadd\n") == 0)
 	{
 		strcat(jasm, (yyvsp[0].val));
 	}
 	
 	int is_found_ident = 0;
	int tmp_depth = itemDepth;
	tp_fun_index = now_fun_index;

	if(tp_fun_index != 0){
		while(tmp_depth > -1){
			int index_depth = lookup((yyvsp[-2].val), tmp_depth);
			if(index_depth >= 0)
			{
				strcat(jasm, "\t\tistore ");
				char index_depth_str[10];
				sprintf(index_depth_str, "%d" , index_depth);
				strcat(jasm, index_depth_str);
				strcat(jasm, "\n");
				is_found_ident = 1;
				break;
			}
			tmp_depth--;
		}
		tp_fun_index = 0;
	}
	
	tp_fun_index = 0;

	if (is_found_ident == 0)
	{
		// check if $1 is const and avoid the const definetion
		if(strcmp(lookup_const((yyvsp[-2].val)), "") != 0)
		{
		}
		else if (lookup((yyvsp[-2].val), 0) >= 0)
		{
			strcat(jasm, "\t\tputstatic int rust_test.");
			strcat(jasm, (yyvsp[-2].val));
			strcat(jasm, "\n");
			
		}
		else{
			strcat(jasm, "\t\tsipush ");
			strcat(jasm, (yyvsp[-2].val));
			strcat(jasm, "\n");
		}
	}
 	is_assigning =0;
}
#line 1776 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 296 "yacc.y" /* yacc.c:1646  */
    {
	strcat(jasm, "\t\tisub\n");
	strcat(jasm, "\t\tifgt ");
}
#line 1785 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 301 "yacc.y" /* yacc.c:1646  */
    {
	strcat(jasm, "\t\tisub\n");
	strcat(jasm, "\t\tifle ");
}
#line 1794 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 306 "yacc.y" /* yacc.c:1646  */
    {
	if (lookup((yyvsp[-2].val), 0) >= 0)
	{
		strcat(jasm, "\tgetstatic int rust_test.");
		strcat(jasm, (yyvsp[-2].val));
		strcat(jasm, "\n");
		strcat(jasm, "\tsipush ");
		strcat(jasm, (yyvsp[0].val));
		strcat(jasm, "\n");
		strcat(jasm, "\tisub\n");
		strcat(jasm, "\tiflt ");
	}
	else{
		strcat(jasm, "\tiload ");
		strcat(jasm, (yyvsp[-2].val));
		strcat(jasm, "\n");
		strcat(jasm, "\tsipush ");
		strcat(jasm, (yyvsp[0].val));
		strcat(jasm, "\n");
		strcat(jasm, "\tisub\n");
		strcat(jasm, "\tiflt ");
	}
}
#line 1822 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 348 "yacc.y" /* yacc.c:1646  */
    {
		insert((yyvsp[-2].val), (yyvsp[0].val) , "");
		strcat(temp_parameter, (yyvsp[0].val));
		strcat(temp_parameter, ",");
	}
#line 1832 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 358 "yacc.y" /* yacc.c:1646  */
    {
		is_print=1;
		strcat(jasm, "\n\t\tgetstatic java.io.PrintStream java.lang.System.out\n");
	}
#line 1841 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 363 "yacc.y" /* yacc.c:1646  */
    {
		if(is_print==2)
			{strcat(jasm, "\t\tinvokevirtual void java.io.PrintStream.print(int)\n");
	}
	else
		{
			strcat(jasm, "\t\tinvokevirtual void java.io.PrintStream.print(java.lang.String)\n");
		}
		is_print=0;
	}
#line 1856 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 373 "yacc.y" /* yacc.c:1646  */
    {	
		is_print = 1;
		strcat(jasm, "\t\tgetstatic java.io.PrintStream java.lang.System.out\n");}
#line 1864 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 377 "yacc.y" /* yacc.c:1646  */
    {
		if(is_print==2)
		{
			strcat(jasm,"\t\tinvokevirtual void java.io.PrintStream.println(java.lang.String)\n");
		}
		else{
			strcat(jasm,"\t\tinvokevirtual void java.io.PrintStream.println(java.lang.String)\n");
		}
		is_print=0;
	}
#line 1879 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 390 "yacc.y" /* yacc.c:1646  */
    {
			strcat(jasm, (yyvsp[-1].val));
			strcat(jasm, "\t\tireturn\n");
		}
#line 1888 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 443 "yacc.y" /* yacc.c:1646  */
    {
	itemDepth++;
}
#line 1896 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 450 "yacc.y" /* yacc.c:1646  */
    {
	itemDepth--;
}
#line 1904 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 457 "yacc.y" /* yacc.c:1646  */
    {is_assigning=1;}
#line 1910 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 457 "yacc.y" /* yacc.c:1646  */
    {

		insert((yyvsp[-4].val), "const" , (yyvsp[-1].val));
		is_assigning = 0;
		if (lookup((yyvsp[-4].val), 0) >= 0)
		{
			// global variable
			strcat(jasm, "\tfield static ");
			strcat(jasm, "int");
			strcat(jasm, " ");
			strcat(jasm, (yyvsp[-4].val));
			strcat(jasm," = " );
			strcat(jasm, (yyvsp[-1].val));
			strcat(jasm, "\n");
		}
		is_assigning=0;
	}
#line 1932 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 474 "yacc.y" /* yacc.c:1646  */
    {is_assigning=1;}
#line 1938 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 474 "yacc.y" /* yacc.c:1646  */
    {
		insert((yyvsp[-6].val),(yyvsp[-3].val),(yyvsp[-1].val));
		if (lookup((yyvsp[-6].val), 0) >= 0)
		{
			// global variable
			strcat(jasm, "\tfield static ");
			strcat(jasm, (yyvsp[-3].val));
			strcat(jasm, " ");
			strcat(jasm, (yyvsp[-6].val));
			strcat(jasm," = " );
			strcat(jasm, (yyvsp[-1].val));
			strcat(jasm, "\n");
		}
		is_assigning=0;
		//let a:int;
	}
#line 1959 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 491 "yacc.y" /* yacc.c:1646  */
    {
		is_assigning=1;

		
		insert((yyvsp[-1].val),"interger","0");
		if (lookup((yyvsp[-1].val), 0) >= 0)
		{
			// global variable
			strcat(jasm, "\tfield static ");
			strcat(jasm, "int");
			strcat(jasm, " ");
			strcat(jasm, (yyvsp[-1].val));
			strcat(jasm, "\n");
		}
		is_assigning=0;

	}
#line 1981 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 508 "yacc.y" /* yacc.c:1646  */
    {is_assigning = 1;}
#line 1987 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 509 "yacc.y" /* yacc.c:1646  */
    {
		//let mut a=9;
		insert((yyvsp[-4].val),"",(yyvsp[-1].val));
		if (lookup((yyvsp[-4].val), 0) >= 0)
		{
			// global variable
			strcat(jasm, "\tfield static ");
			strcat(jasm, "int");
			strcat(jasm, " ");
			strcat(jasm, (yyvsp[-4].val));
			strcat(jasm,"=");
			strcat(jasm,(yyvsp[-1].val));
			strcat(jasm, "\n");
		}
		is_assigning = 0;
	}
#line 2008 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 525 "yacc.y" /* yacc.c:1646  */
    {
		//let mut a:int;
		is_assigning = 1;
		insert((yyvsp[-2].val), (yyvsp[0].val), "");
		if (lookup((yyvsp[-2].val), 0) >= 0)
		{
			// global variable
			strcat(jasm, "\tfield static ");
			strcat(jasm, (yyvsp[0].val));
			strcat(jasm, " ");
			strcat(jasm, (yyvsp[-2].val));
			strcat(jasm, "\n");
		}
		is_assigning = 0;
	}
#line 2028 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 540 "yacc.y" /* yacc.c:1646  */
    {is_assigning = 1;}
#line 2034 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 540 "yacc.y" /* yacc.c:1646  */
    {
		//let mut a:int =10;
		is_assigning = 1;
		insert((yyvsp[-5].val), (yyvsp[-3].val), "");
		if (lookup((yyvsp[-5].val), 0) >= 0)
		{
			// global variable
			strcat(jasm, "\tfield static ");
			strcat(jasm, (yyvsp[-3].val));
			strcat(jasm, " ");
			strcat(jasm, (yyvsp[-5].val));
			strcat(jasm, " = ");
			strcat(jasm, (yyvsp[0].val));
			strcat(jasm, "\n");
		}
		is_assigning = 0;
	}
#line 2056 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 558 "yacc.y" /* yacc.c:1646  */
    {
		insert((yyvsp[-6].val),"array",(yyvsp[-4].val));
	}
#line 2064 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 569 "yacc.y" /* yacc.c:1646  */
    {strcat(jasm, "\tLbody:\n");strcat(jasm, "\t\tgoto Lpost\n");strcat(jasm, "\tLexit:\n");itemDepth--;}
#line 2070 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 570 "yacc.y" /* yacc.c:1646  */
    {strcat(jasm, "\tLbody:\n");}
#line 2076 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 570 "yacc.y" /* yacc.c:1646  */
    {strcat(jasm, "\t\tgoto Lpost\n");strcat(jasm, "\tLexit:\n");itemDepth--;}
#line 2082 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 578 "yacc.y" /* yacc.c:1646  */
    {
	strcat(jasm, " \tL0\n");
	strcat(jasm, "\t\ticonst_0\n");
	strcat(jasm, "\t\tgoto Lfalse\n");
	strcat(jasm, "\tL0:\n");
	strcat(jasm, "\t\ticonst_1\n");
	strcat(jasm, "\tL1:\n");
	strcat(jasm, "\t\tifeq L2\n");
}
#line 2096 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 590 "yacc.y" /* yacc.c:1646  */
    {
	strcat(jasm, "\t\tgoto L3\n");
	strcat(jasm, "\tL2:");
}
#line 2105 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 596 "yacc.y" /* yacc.c:1646  */
    {strcat(jasm, "\tL3:\n");}
#line 2111 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 602 "yacc.y" /* yacc.c:1646  */
    {
	strcat(jasm,"\tLbegin:\n");
	strcat(jasm,"\t\ticonst_0\n");
	strcat(jasm,"\t\tgoto Lfalse\n");
	strcat(jasm,"\tLtrue:\n");
	strcat(jasm,"\t\ticonst_1\n");
	strcat(jasm,"\tLfalse:\n");
	strcat(jasm,"\t\tifeq\tLexit\n");


}
#line 2127 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 615 "yacc.y" /* yacc.c:1646  */
    {strcat(jasm, "\t\tgoto Lexit\n");
	strcat(jasm, "\tLext:");}
#line 2134 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 619 "yacc.y" /* yacc.c:1646  */
    {
	// move the chars of RE_expression 
	int i, len;
	int pos = 0;
	for (i = 0; i < strlen(jasm) ; ++i)
	{
		if (jasm[i] == '{')
		{
			pos = i;
		}
	}
	len = strlen("\n\tLtest:");
	 for( i = strlen(jasm); i >= pos ; i-- ) 
    {
        jasm[i+len]=jasm[i];
    }
    // insert "Ltest:"
	strncpy( &jasm[pos+1], "\n\tLtest:", len ); 

	strcat(jasm, " Ltrue\n");
	strcat(jasm, "\t\ticonst_0\n");
	strcat(jasm, "\t\tgoto Lfalse\n");
	strcat(jasm, "\tLtrue:\n");
	strcat(jasm, "\t\ticonst_1\n");
	strcat(jasm, "\tLfalse:\n");
	strcat(jasm, "\t\tifeq Lexit\n");
	strcat(jasm, "\t\tgoto Lbody\n");
}
#line 2167 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 648 "yacc.y" /* yacc.c:1646  */
    {
	strcat(jasm, "\tLpost:\n");
}
#line 2175 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 651 "yacc.y" /* yacc.c:1646  */
    {strcat(jasm, "\t\tgoto Ltest\n");}
#line 2181 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 654 "yacc.y" /* yacc.c:1646  */
    {strcat(jasm, "\tLtest:\n");}
#line 2187 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 655 "yacc.y" /* yacc.c:1646  */
    {
	strcat(jasm, " Ltrue\n");
	strcat(jasm, "\t\ticonst_0\n");
	strcat(jasm, "\t\tgoto Lfalse\n");
	strcat(jasm, "\tLtrue:\n");
	strcat(jasm, "\t\ticonst_1\n");
	strcat(jasm, "\tLfalse:\n");
	strcat(jasm, "\t\tifeq Lexit\n");
	strcat(jasm, "\t\tgoto Lbody\n");

	strcat(jasm, "\tLpost:\n");
	strcat(jasm, "\t\tgoto Ltest\n");}
#line 2204 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 687 "yacc.y" /* yacc.c:1646  */
    {
	itemDepth = 0;

	}
#line 2213 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 692 "yacc.y" /* yacc.c:1646  */
    {
	strcat(jasm, "\tmethod public static void main(java.lang.String[])\n\tmax_stack 15\n\tmax_locals 15\n\t{\n");
}
#line 2221 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 697 "yacc.y" /* yacc.c:1646  */
    {memset(temp_parameter,0,strlen(temp_parameter));now_fun_index++;function_index++;}
#line 2227 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 698 "yacc.y" /* yacc.c:1646  */
    {
		insert((yyvsp[-6].val),(yyvsp[0].val),"");

		strcat(jasm, "\tmethod public static ");
		strcat(jasm, (yyvsp[0].val));
		strcat(jasm, " ");
		strcat(jasm, (yyvsp[-6].val));
		strcat(jasm, "(");

		for (int i = 0; i < sizeof(temp_parameter)/sizeof(temp_parameter[0]); ++i)
		{
			if (temp_parameter[i] == 0)
			{
				temp_parameter[i-1] = '\0';
				break;
			}
		}
		
		strcat(jasm, temp_parameter);
		strcat(jasm, ")\n");
		strcat(jasm, "\tmax_stack 15\n\tmax_locals 15\n\t{\n");
	}
#line 2254 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 720 "yacc.y" /* yacc.c:1646  */
    {
	 	strcat(jasm, "\t}\n");
	 	now_fun_index--;
 	}
#line 2263 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 725 "yacc.y" /* yacc.c:1646  */
    {now_fun_index++;function_index++;}
#line 2269 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 727 "yacc.y" /* yacc.c:1646  */
    {now_fun_index++;}
#line 2275 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 729 "yacc.y" /* yacc.c:1646  */
    {insert((yyvsp[-8].val),"","");
	 	if (strcmp((yyvsp[-8].val),"main")==0)
	 	{
	 		strcat(jasm,"\t\treturn\n\t}\n");
	 		/* code */
	 	}
	 	now_fun_index--;
	 }
#line 2288 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2292 "y.tab.c" /* yacc.c:1646  */
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

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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
#line 750 "yacc.y" /* yacc.c:1906  */

void yyerror(const char *str){
    printf("error:%s\n",str);
}

int yywrap(){
    return 1;
}

int main()
{
	itemDepth = 0;
	hashArray = create();

	strcat(jasm, "class rust_test\n{\n ");
	yyparse();

	printf("\n\n%s\n", "------ Symbol Table: ------");
	printf("%-*s:%-*s%-*s%-*s%-*s%-*s\n", 5, "Index:", 15, "Name", 15, "Type", 20, "Value", 15, "Fun_index", 5, "Depth");
	dump();

	printf("\n\n%s\n", "------ Write Java Assembly Code Into rust_test.jasm ------");
	strcat(jasm, "}\n");
	
	FILE *fpt;
	char file_name[100];
	fpt = fopen("rust_test.jasm", "w"); 
	fprintf(fpt, jasm);
	fclose(fpt);

	
	return 0;
}







