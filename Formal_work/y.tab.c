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
#define YYFINAL  16
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   337

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  71
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  48
/* YYNRULES -- Number of rules.  */
#define YYNRULES  93
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  188

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
      63,    64,     6,     5,    60,     4,     2,     7,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    66,    65,
      62,     3,    61,     2,     2,     2,     2,     2,     2,     2,
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
       0,    38,    38,    45,    48,    51,    58,    66,   120,   125,
     126,   131,   132,   136,   138,   137,   148,   149,   159,   172,
     173,   178,   183,   210,   266,   267,   268,   269,   270,   271,
     294,   295,   296,   297,   298,   304,   305,   309,   317,   318,
     320,   325,   319,   335,   339,   335,   350,   351,   404,   411,
     419,   419,   424,   424,   428,   446,   464,   479,   479,   497,
     503,   504,   508,   509,   509,   513,   517,   529,   535,   540,
     569,   572,   539,   575,   576,   575,   595,   596,   600,   601,
     602,   603,   607,   612,   617,   618,   617,   644,   644,   657,
     658,   659,   663,   664
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
  "USE", "WHILE", "CONST", "VAR", "','", "'>'", "'<'", "'('", "')'", "';'",
  "':'", "'['", "']'", "'{'", "'}'", "$accept", "value_declaration",
  "declarator", "declarator_list", "primary_expression",
  "unary_expression", "$@1", "additive_expression",
  "relational_expression", "assignment_expression", "expression",
  "type_specifier", "parameter_list", "parameter_declaration",
  "simple_statment", "$@2", "$@3", "$@4", "$@5", "compound_start",
  "compound_end", "declaration", "$@6", "$@7", "$@8", "declaration_list",
  "compound_statement", "$@9", "expression_statement", "If_After_Check",
  "If_After_Ltrue", "selection_statement", "iteration_statement", "$@10",
  "$@11", "$@12", "$@13", "$@14", "statement_list", "statement",
  "func_expression", "add_main_func_first", "function_definition", "$@15",
  "$@16", "$@17", "external_declaration", "program", YY_NULLPTR
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
      44,    62,    60,    40,    41,    59,    58,    91,    93,   123,
     125
};
# endif

#define YYPACT_NINF -123

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-123)))

#define YYTABLE_NINF -63

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -14,   -31,  -123,   -55,  -123,   -12,   -27,  -123,  -123,    49,
    -123,   -15,   -10,   268,  -123,   -34,  -123,  -123,   -29,    -2,
      36,  -123,  -123,  -123,  -123,  -123,  -123,  -123,  -123,   -44,
     -22,   272,   195,  -123,   272,   272,   195,   268,  -123,  -123,
      20,  -123,  -123,  -123,  -123,  -123,    47,     3,    67,    13,
    -123,    18,  -123,    23,   -39,  -123,   195,  -123,    76,   195,
      15,   272,    20,    70,    28,   195,    35,  -123,   208,  -123,
    -123,   272,  -123,  -123,    39,  -123,    45,    51,    -1,  -123,
    -123,   188,    40,    18,   268,  -123,    54,    -6,  -123,   290,
    -123,  -123,  -123,  -123,   107,  -123,  -123,  -123,   268,   290,
     226,   232,    74,   226,   226,   113,  -123,   248,    18,   268,
     268,   268,   268,   268,   130,  -123,    -6,  -123,  -123,  -123,
    -123,    65,   268,    -6,    72,   290,     4,   189,   254,    68,
     290,   290,   296,  -123,  -123,  -123,   268,   268,   268,   268,
     208,    73,  -123,    85,   268,  -123,   147,    88,    89,    92,
      54,   126,  -123,   268,    99,   -26,   226,  -123,  -123,  -123,
     120,    -6,   208,   104,   260,   130,  -123,   106,   148,  -123,
    -123,   108,   105,  -123,   110,   103,   153,   103,   121,   208,
     114,   125,  -123,   208,   208,  -123,   167,  -123
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    82,     0,    60,    90,     0,    89,    92,     0,
      52,     0,     0,     0,    61,     0,     1,    93,     0,     0,
       0,     5,     6,     2,     3,     4,     7,     8,     9,     0,
      84,     0,     0,    54,     0,     0,     0,     0,    91,    87,
       0,    34,    33,    30,    31,    32,     0,     0,    56,     0,
      51,    10,    83,     0,     0,    35,     0,    55,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    48,     0,    37,
      36,     0,    53,    58,     0,    14,     0,     0,     7,    40,
      43,     0,     9,    11,    13,    24,    19,    27,    25,    65,
      78,    79,    80,    81,     0,    76,    85,    59,     0,     0,
       0,     0,     0,     0,     0,     7,    46,     0,    12,     0,
       0,     0,     0,     0,     7,    16,    28,    26,    49,    88,
      77,     0,    15,    69,     0,    66,     7,    19,     0,     0,
      41,    44,     0,    47,    18,    17,    21,    20,    22,     0,
       0,     0,    73,     0,     0,    39,     0,     0,     0,     7,
      23,     0,    70,     0,     0,     0,     0,    42,    45,    86,
       0,    74,     0,     0,     0,     0,    71,     0,     0,    29,
      38,     0,     0,    67,     0,    63,     0,    63,     0,     0,
       0,     0,    75,    64,     0,    72,     0,    68
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -123,   218,   -13,    -9,     9,  -123,  -123,   -58,   -84,   -77,
     -68,    71,  -123,   128,  -123,  -123,  -123,  -123,  -123,  -123,
    -123,   197,  -123,  -123,  -123,  -123,    32,  -123,  -123,  -123,
    -123,  -123,  -123,  -123,  -123,  -123,  -123,  -123,  -122,   -91,
    -123,  -123,  -123,  -123,  -123,  -123,   201,  -123
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    27,    82,    83,    84,    85,    98,    86,    87,    88,
      89,    46,    54,    55,    90,   103,   147,   104,   148,    68,
     119,     4,    12,    18,    58,     5,   178,   179,    91,   143,
     176,    92,    93,   141,   160,   171,   153,   167,    94,    95,
       6,    60,     7,    40,   121,    52,     8,     9
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      28,    32,   101,   120,    29,   116,   111,   132,    13,     1,
      10,     1,   117,   107,    15,   123,    37,    11,   151,     2,
      38,    62,   124,   116,    28,    63,    19,     3,    51,    30,
     117,    20,   125,   128,    37,   130,   131,    31,   163,    36,
     168,   116,    39,   127,   116,   -16,   116,   116,   117,    16,
      56,   117,   -16,   117,   117,   112,   113,   183,   109,   110,
     120,    53,   186,    33,    34,    35,   102,   144,    57,   161,
     -57,    28,     1,    59,   150,   108,   115,   120,    37,    65,
     116,   150,     2,   166,    67,    28,   115,   117,   164,    61,
       3,    71,   120,    72,   115,   120,   134,   135,    28,    28,
      28,   -16,   -16,    74,    97,    48,    49,   122,    99,    28,
     129,    75,   115,   108,   100,   115,   132,   115,   115,   115,
     136,   137,   138,    28,    28,    28,   115,   108,   108,   108,
      75,    28,    69,   139,   140,   155,   146,   142,   152,    76,
     115,    77,    96,    21,    22,    23,    24,    25,    78,   154,
     156,   115,    75,   157,   158,   144,    79,    80,    76,    81,
      77,   165,    21,    22,    23,    24,    25,    78,   162,   169,
     172,    75,   174,   -62,   175,    79,    80,   118,    81,   177,
      76,   180,    77,   184,    21,    22,    23,    24,    25,    78,
      70,   182,    75,   109,   110,   185,   159,    79,    80,    76,
      81,    77,    14,    21,    22,    23,    24,    25,    78,   181,
      17,     0,    75,     0,     0,     0,    79,    80,   173,    81,
       0,   -23,     0,   -23,    21,    22,    23,    24,    25,   105,
      75,    21,    22,    23,    24,    25,    75,   187,   -23,   -23,
      76,   -23,    77,     0,    21,    22,    23,    24,    25,    78,
      47,     0,     0,   106,    50,     0,     0,    79,    80,   -23,
      81,     0,    21,    22,    23,    24,    25,   105,    21,    22,
      23,    24,    25,   126,    64,     0,     0,    66,     0,     0,
       0,     0,     0,    73,    21,    22,    23,    24,    25,   114,
      21,    22,    23,    24,    25,   114,    21,    22,    23,    24,
      25,   114,     0,    41,    21,    22,    23,    24,    25,    26,
      42,     0,     0,   133,    43,     0,    44,    45,     0,   145,
       0,     0,     0,     0,     0,   170,    21,    22,    23,    24,
      25,   114,    21,    22,    23,    24,    25,   149
};

static const yytype_int16 yycheck[] =
{
      13,     3,     3,    94,    13,    89,    12,     3,    63,    23,
      41,    23,    89,    81,    41,    99,    60,    48,   140,    33,
      64,    60,    99,   107,    37,    64,    41,    41,    37,    63,
     107,    41,   100,   101,    60,   103,   104,    66,    64,     3,
     162,   125,    64,   101,   128,     5,   130,   131,   125,     0,
       3,   128,    12,   130,   131,    61,    62,   179,     4,     5,
     151,    41,   184,    65,    66,    67,    67,    63,    65,   153,
       3,    84,    23,    60,   132,    84,    89,   168,    60,     3,
     164,   139,    33,   160,    69,    98,    99,   164,   156,    66,
      41,    21,   183,    65,   107,   186,   109,   110,   111,   112,
     113,    61,    62,    68,    65,    34,    35,    98,    63,   122,
      36,     4,   125,   122,    63,   128,     3,   130,   131,   132,
     111,   112,   113,   136,   137,   138,   139,   136,   137,   138,
       4,   144,    61,     3,    69,   144,    68,    65,    65,    32,
     153,    34,    71,    36,    37,    38,    39,    40,    41,    64,
       3,   164,     4,    65,    65,    63,    49,    50,    32,    52,
      34,    41,    36,    37,    38,    39,    40,    41,    69,    65,
      64,     4,    64,    70,    69,    49,    50,    70,    52,    69,
      32,    28,    34,    69,    36,    37,    38,    39,    40,    41,
      62,    70,     4,     4,     5,    70,    70,    49,    50,    32,
      52,    34,     5,    36,    37,    38,    39,    40,    41,   177,
       9,    -1,     4,    -1,    -1,    -1,    49,    50,    70,    52,
      -1,    32,    -1,    34,    36,    37,    38,    39,    40,    41,
       4,    36,    37,    38,    39,    40,     4,    70,    49,    50,
      32,    52,    34,    -1,    36,    37,    38,    39,    40,    41,
      32,    -1,    -1,    65,    36,    -1,    -1,    49,    50,    70,
      52,    -1,    36,    37,    38,    39,    40,    41,    36,    37,
      38,    39,    40,    41,    56,    -1,    -1,    59,    -1,    -1,
      -1,    -1,    -1,    65,    36,    37,    38,    39,    40,    41,
      36,    37,    38,    39,    40,    41,    36,    37,    38,    39,
      40,    41,    -1,    31,    36,    37,    38,    39,    40,    41,
      38,    -1,    -1,    65,    42,    -1,    44,    45,    -1,    65,
      -1,    -1,    -1,    -1,    -1,    65,    36,    37,    38,    39,
      40,    41,    36,    37,    38,    39,    40,    41
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    23,    33,    41,    92,    96,   111,   113,   117,   118,
      41,    48,    93,    63,    92,    41,     0,   117,    94,    41,
      41,    36,    37,    38,    39,    40,    41,    72,    73,    74,
      63,    66,     3,    65,    66,    67,     3,    60,    64,    64,
     114,    31,    38,    42,    44,    45,    82,    72,    82,    82,
      72,    74,   116,    41,    83,    84,     3,    65,    95,    60,
     112,    66,    60,    64,    72,     3,    72,    69,    90,    82,
      84,    21,    65,    72,    68,     4,    32,    34,    41,    49,
      50,    52,    73,    74,    75,    76,    78,    79,    80,    81,
      85,    99,   102,   103,   109,   110,    82,    65,    77,    63,
      63,     3,    67,    86,    88,    41,    65,    81,    74,     4,
       5,    12,    61,    62,    41,    73,    79,    80,    70,    91,
     110,   115,    75,    79,    80,    81,    41,    78,    81,    36,
      81,    81,     3,    65,    73,    73,    75,    75,    75,     3,
      69,   104,    65,   100,    63,    65,    68,    87,    89,    41,
      78,   109,    65,   107,    64,    74,     3,    65,    65,    70,
     105,    79,    69,    64,    81,    41,    80,   108,   109,    65,
      65,   106,    64,    70,    64,    69,   101,    69,    97,    98,
      28,    97,    70,   109,    69,    70,   109,    70
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    71,    72,    72,    72,    72,    72,    73,    73,    74,
      74,    75,    75,    76,    77,    76,    78,    78,    78,    79,
      79,    79,    79,    80,    81,    81,    81,    81,    81,    81,
      82,    82,    82,    82,    82,    83,    83,    84,    85,    85,
      86,    87,    85,    88,    89,    85,    85,    85,    90,    91,
      93,    92,    94,    92,    92,    92,    92,    95,    92,    92,
      96,    96,    97,    98,    97,    99,   100,   101,   102,   104,
     105,   106,   103,   107,   108,   103,   109,   109,   110,   110,
     110,   110,   111,   112,   114,   115,   113,   116,   113,   117,
     117,   117,   118,   118
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     2,     1,     0,     3,     1,     3,     3,     1,
       3,     3,     3,     3,     1,     1,     2,     1,     2,     7,
       1,     1,     1,     1,     1,     1,     3,     3,     7,     4,
       0,     0,     5,     0,     0,     5,     2,     3,     1,     1,
       0,     5,     0,     8,     4,     6,     5,     0,     8,     9,
       1,     2,     0,     0,     2,     1,     0,     0,    13,     0,
       0,     0,    12,     0,     0,    11,     1,     2,     1,     1,
       1,     1,     1,     0,     0,     0,    12,     0,     9,     1,
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
#line 38 "yacc.y" /* yacc.c:1646  */
    {
	strcat(jasm, "\t\tldc ");
	strcat(jasm, "\"");
	strcat(jasm, (yyvsp[0].val));
	strcat(jasm, "\"");
	strcat(jasm, "\n");
}
#line 1502 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 45 "yacc.y" /* yacc.c:1646  */
    {
	strcpy((yyval.val), (yyvsp[0].val));
}
#line 1510 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 48 "yacc.y" /* yacc.c:1646  */
    {
	strcpy((yyval.val), (yyvsp[0].val));
}
#line 1518 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 52 "yacc.y" /* yacc.c:1646  */
    {
		char tempStr[50];
		sprintf( tempStr, "%d", (yyvsp[0].int_type) );
		strcpy((yyval.val), tempStr);
	
}
#line 1529 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 59 "yacc.y" /* yacc.c:1646  */
    {
	char tempStr[50];
	sprintf( tempStr, "%g", (yyvsp[0].double_type) );
	strcpy((yyval.val), tempStr);
}
#line 1539 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 67 "yacc.y" /* yacc.c:1646  */
    {
	int is_found_ident = 0;
	int tempdepth = itemDepth;
	temp_fun_index = now_fun_index;

	if(temp_fun_index != 0){
		while(tempdepth > -1){
			int index_depth = lookup((yyvsp[0].val), tempdepth);
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
			tempdepth--;
		}
		temp_fun_index = 0;
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
#line 1597 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 138 "yacc.y" /* yacc.c:1646  */
    {
	if (is_print == 1)
	{
		strcpy(unary_symbol,"\t\tineg\n");
	}
}
#line 1608 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 150 "yacc.y" /* yacc.c:1646  */
    {
	char tempJasm[1000] = "";
	int is_found_ident = 0;
	int tempdepth = itemDepth;

	temp_fun_index = now_fun_index;
	strcat(tempJasm, "\t\tiadd\n");
	strcpy((yyval.val), tempJasm);
}
#line 1622 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 160 "yacc.y" /* yacc.c:1646  */
    {
	char tempJasm[1000] = "";
	int is_found_ident = 0;
	int tempdepth = itemDepth;

	temp_fun_index = now_fun_index;
	strcat(tempJasm, "\t\tisub\n");
	strcpy((yyval.val), tempJasm);
}
#line 1636 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 174 "yacc.y" /* yacc.c:1646  */
    {
	strcat(jasm, "\t\tisub\n");
	strcat(jasm, "\t\tifgt ");
}
#line 1645 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 179 "yacc.y" /* yacc.c:1646  */
    {
	strcat(jasm, "\t\tisub\n");
	strcat(jasm, "\t\tifle ");
}
#line 1654 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 184 "yacc.y" /* yacc.c:1646  */
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
#line 1682 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 211 "yacc.y" /* yacc.c:1646  */
    {
 	is_assigning =1;
 	if (strcmp((yyvsp[0].val), "\t\tisub\n") == 0 | strcmp((yyvsp[0].val), "\t\tiadd\n") == 0)
 	{
 		strcat(jasm, (yyvsp[0].val));
 	}
 	
 	int is_found_ident = 0;
	int tempdepth = itemDepth;
	temp_fun_index = now_fun_index;

	if(temp_fun_index != 0){
		while(tempdepth > -1){
			int index_depth = lookup((yyvsp[-2].val), tempdepth);
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
			tempdepth--;
		}
		temp_fun_index = 0;
	}
	
	temp_fun_index = 0;

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
#line 1739 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 272 "yacc.y" /* yacc.c:1646  */
    {
	strcat(jasm, "\t\tinvokestatic int rust_test.");
	strcat(jasm, (yyvsp[-4].val));
	strcat(jasm, "(");
	strcat(jasm, "int,int");
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
#line 1763 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 310 "yacc.y" /* yacc.c:1646  */
    {
		insert((yyvsp[-2].val), (yyvsp[0].val) , "");
		strcat(temp_parameter, (yyvsp[0].val));
		strcat(temp_parameter, ",");
	}
#line 1773 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 320 "yacc.y" /* yacc.c:1646  */
    {
		is_print=1;
		strcat(jasm, "\n\t\tgetstatic java.io.PrintStream java.lang.System.out\n");
	}
#line 1782 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 325 "yacc.y" /* yacc.c:1646  */
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
#line 1797 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 335 "yacc.y" /* yacc.c:1646  */
    {	
		is_print = 1;
		strcat(jasm, "\t\tgetstatic java.io.PrintStream java.lang.System.out\n");}
#line 1805 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 339 "yacc.y" /* yacc.c:1646  */
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
#line 1820 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 352 "yacc.y" /* yacc.c:1646  */
    {
			strcat(jasm, (yyvsp[-1].val));
			strcat(jasm, "\t\tireturn\n");
		}
#line 1829 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 405 "yacc.y" /* yacc.c:1646  */
    {
	itemDepth++;
}
#line 1837 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 412 "yacc.y" /* yacc.c:1646  */
    {
	itemDepth--;
}
#line 1845 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 419 "yacc.y" /* yacc.c:1646  */
    {is_assigning = 1;}
#line 1851 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 419 "yacc.y" /* yacc.c:1646  */
    {

		insert((yyvsp[-2].val), "const" , (yyvsp[0].val));
		is_assigning = 0;
	}
#line 1861 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 424 "yacc.y" /* yacc.c:1646  */
    {is_assigning=1;}
#line 1867 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 424 "yacc.y" /* yacc.c:1646  */
    {
		insert((yyvsp[-6].val),(yyvsp[-3].val),(yyvsp[-1].val));
		//let a:int;
	}
#line 1876 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 429 "yacc.y" /* yacc.c:1646  */
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
#line 1898 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 447 "yacc.y" /* yacc.c:1646  */
    {
		//let mut a=9;
		is_assigning = 1;
		insert((yyvsp[-3].val),"",(yyvsp[-1].val));
		if (lookup((yyvsp[-3].val), 0) >= 0)
		{
			// global variable
			strcat(jasm, "\tfield static ");
			strcat(jasm, "int");
			strcat(jasm, " ");
			strcat(jasm, (yyvsp[-3].val));
			strcat(jasm,"=");
			strcat(jasm,(yyvsp[-1].val));
			strcat(jasm, "\n");
		}
		is_assigning = 0;
	}
#line 1920 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 464 "yacc.y" /* yacc.c:1646  */
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
#line 1940 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 479 "yacc.y" /* yacc.c:1646  */
    {is_assigning = 1;}
#line 1946 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 479 "yacc.y" /* yacc.c:1646  */
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
#line 1968 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 497 "yacc.y" /* yacc.c:1646  */
    {
		insert((yyvsp[-6].val),"array",(yyvsp[-4].val));
	}
#line 1976 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 508 "yacc.y" /* yacc.c:1646  */
    {strcat(jasm, "\tLbody:\n");strcat(jasm, "\t\tgoto Lpost\n");strcat(jasm, "\tLexit:\n");itemDepth--;}
#line 1982 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 509 "yacc.y" /* yacc.c:1646  */
    {strcat(jasm, "\tLbody:\n");}
#line 1988 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 509 "yacc.y" /* yacc.c:1646  */
    {strcat(jasm, "\t\tgoto Lpost\n");strcat(jasm, "\tLexit:\n");itemDepth--;}
#line 1994 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 517 "yacc.y" /* yacc.c:1646  */
    {
	strcat(jasm, " \tL0\n");
	strcat(jasm, "\t\ticonst_0\n");
	strcat(jasm, "\t\tgoto Lfalse\n");
	strcat(jasm, "\tL0:\n");
	strcat(jasm, "\t\ticonst_1\n");
	strcat(jasm, "\tL1:\n");
	strcat(jasm, "\t\tifeq L2\n");
}
#line 2008 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 529 "yacc.y" /* yacc.c:1646  */
    {
	strcat(jasm, "\t\tgoto L3\n");
	strcat(jasm, "\tL2:");
}
#line 2017 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 535 "yacc.y" /* yacc.c:1646  */
    {strcat(jasm, "\tL3:\n");}
#line 2023 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 540 "yacc.y" /* yacc.c:1646  */
    {
	// move the chars of relational_expression 
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
#line 2056 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 569 "yacc.y" /* yacc.c:1646  */
    {
	strcat(jasm, "\tLpost:\n");
}
#line 2064 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 572 "yacc.y" /* yacc.c:1646  */
    {strcat(jasm, "\t\tgoto Ltest\n");}
#line 2070 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 575 "yacc.y" /* yacc.c:1646  */
    {strcat(jasm, "\tLtest:\n");}
#line 2076 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 576 "yacc.y" /* yacc.c:1646  */
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
#line 2093 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 607 "yacc.y" /* yacc.c:1646  */
    {
	itemDepth = 0;

	}
#line 2102 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 612 "yacc.y" /* yacc.c:1646  */
    {
	strcat(jasm, "\tmethod public static void main(java.lang.String[])\n\tmax_stack 15\n\tmax_locals 15\n\t{\n");
}
#line 2110 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 617 "yacc.y" /* yacc.c:1646  */
    {memset(temp_parameter,0,strlen(temp_parameter));now_fun_index++;function_index++;}
#line 2116 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 618 "yacc.y" /* yacc.c:1646  */
    {
		insert((yyvsp[-6].val),(yyvsp[0].val),"");

		strcat(jasm, "\tmethod public static ");
		strcat(jasm, (yyvsp[-6].val));
		strcat(jasm, " ");
		strcat(jasm, (yyvsp[0].val));
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
#line 2143 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 640 "yacc.y" /* yacc.c:1646  */
    {
	 	strcat(jasm, "\t}\n");
	 	now_fun_index--;
 	}
#line 2152 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 644 "yacc.y" /* yacc.c:1646  */
    {insert((yyvsp[-2].val),"","");now_fun_index++;}
#line 2158 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 645 "yacc.y" /* yacc.c:1646  */
    {
	 	if (strcmp((yyvsp[-7].val),"main")==0)
	 	{
	 		strcat(jasm,"\t\treturn\n\t}\n");
	 		/* code */
	 	}
	 	now_fun_index--;
	 }
#line 2171 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2175 "y.tab.c" /* yacc.c:1646  */
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
#line 666 "yacc.y" /* yacc.c:1906  */

void yyerror(const char *str){
    printf("error:%s\n",str);
}

int yywrap(){
    return 1;
}

int main()
{
	/*isShouldAdd = 0;
	depth = 0;
	hashArray = create();

    yyparse();
    
    if (lookup("a" , 0) >= 0 && lookup("a" , 1) >= 0)
    {
    	printf("%-*s%-*d\n", 20 ,hashArray[lookup("a" , 0)]->idName ,5 , hashArray[lookup("a" , 0)]->depth);
    	printf("%-*s%-*d\n", 20 ,hashArray[lookup("a" , 1)]->idName ,5 , hashArray[lookup("a" , 1)]->depth);
    }
    
    printf("\n\n%s\n", "------Symbol Table:------");
    printf("%-*s%-*s\n", 20 ,"Name" ,10 , "Depth");
    printf("%-*s:%-*s%-*s%-*s%-*s\n", 5, "Index", 20, "Name", 15, "Type", 30, "Value", 5, "Depth");
  	dump();
  	int a=0;
  	if(statment_number==0)
  	{
  		printf("statment_number wrong\n");
  	}
  	return 0;*/
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

	char command[100] = "";
	printf("\n\n%s\n", "------ Convert rust_test.jasm To rust_test.class By javaa program------");
	strcat(command, "./javaa rust_test.jasm");
	printf("%s%s\n\n", "Execute linux command1: ", command);
	system(command);

	// clear the command string 
	memset(command, '\0', sizeof(command)-1);

	printf("\n\n%s\n", "------ Result After Run rust_test.class ------");
	strcat(command, "java rust_test");
	printf("%s%s\n\n", "Execute linux command2: ", command);
	system(command);
	return 0;
}







