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
    STRINGKEYWORD = 292,
    REAL = 293,
    INT = 294,
    VOID = 295,
    LOOP = 296,
    MATCH = 297,
    MUT = 298,
    PRINT = 299,
    PRINTLN = 300,
    PUB = 301,
    RETURN = 302,
    SELF = 303,
    STATIC = 304,
    WHERE = 305,
    USE = 306,
    WHILE = 307,
    CONST = 308,
    VAR = 309
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
#define STRINGKEYWORD 292
#define REAL 293
#define INT 294
#define VOID 295
#define LOOP 296
#define MATCH 297
#define MUT 298
#define PRINT 299
#define PRINTLN 300
#define PUB 301
#define RETURN 302
#define SELF 303
#define STATIC 304
#define WHERE 305
#define USE 306
#define WHILE 307
#define CONST 308
#define VAR 309

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

#line 231 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 248 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   323

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  73
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  94
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  188

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   310

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
      63,    64,     6,     5,    65,     4,     2,     7,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    66,    72,
      61,     3,    62,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    70,     2,    71,     9,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    67,     2,    68,     2,     2,     2,     2,
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
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      69
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    37,    37,    38,    39,    43,    44,    48,    49,    53,
      54,    55,    56,    57,    60,    61,    65,    66,    67,    68,
      72,    75,    76,    77,    80,    81,    85,    86,    87,    91,
      92,    93,    97,    98,    99,   103,   104,   108,   109,   110,
     111,   112,   120,   121,   124,   130,   136,   135,   164,   164,
     185,   188,   191,   194,   200,   209,   221,   228,   229,   232,
     236,   239,   240,   241,   242,   246,   247,   248,   253,   254,
     255,   256,   257,   258,   261,   264,   265,   266,   267,   268,
     269,   274,   275,   279,   282,   285,   288,   291,   294,   297,
     302,   303,   304,   308,   309
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
  "FALSE", "IDENTIFIER", "BOOL", "STRINGKEYWORD", "REAL", "INT", "VOID",
  "LOOP", "MATCH", "MUT", "PRINT", "PRINTLN", "PUB", "RETURN", "SELF",
  "STATIC", "WHERE", "USE", "WHILE", "CONST", "VAR", "'<'", "'>'", "'('",
  "')'", "','", "':'", "'{'", "'}'", "\";\"", "'['", "']'", "';'",
  "$accept", "EQU_express", "assignment_expression",
  "inclusive_or_expression", "re_expression", "and_expression",
  "pre_expression", "expression_sta", "expression", "U_nary",
  "multp_expression", "additive_expression", "Delector_list", "declarator",
  "type_specifier", "parameter_list", "parameter_declaration",
  "func_expression", "function_definition", "$@1", "$@2", "val_delecation",
  "block_start", "block_end", "selection_statement", "statement_list",
  "block_stament", "iteration_statement", "statement", "while_srarement",
  "simple_statment", "declaration_list", "declaration", "EX_delection",
  "program", YY_NULLPTR
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
     309,    60,    62,    40,    41,    44,    58,   123,   125,   310,
      91,    93,    59
};
# endif

#define YYPACT_NINF -106

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-106)))

#define YYTABLE_NINF -37

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -3,   -23,  -106,   -40,     7,  -106,    29,  -106,  -106,   217,
       5,    24,   148,   -22,  -106,  -106,  -106,   268,   137,     3,
    -106,  -106,  -106,  -106,  -106,  -106,   107,  -106,  -106,    27,
     -17,  -106,  -106,  -106,  -106,  -106,    76,   268,   137,   137,
    -106,   148,  -106,   148,    16,   -53,  -106,    23,  -106,   268,
      28,     4,    25,   113,    -1,   137,    75,    27,    82,    36,
    -106,   268,  -106,   268,  -106,  -106,   137,  -106,   137,  -106,
      43,    53,  -106,  -106,  -106,    72,    87,  -106,  -106,   158,
    -106,   148,   110,   117,     0,   240,   240,    20,   130,   278,
    -106,    14,  -106,    18,    33,   192,   148,  -106,   278,  -106,
     206,   210,    -1,   145,  -106,  -106,   196,  -106,  -106,  -106,
    -106,  -106,   158,   148,   240,   240,   240,   184,    81,    89,
    -106,    95,   240,   160,   278,   278,   278,   278,   148,   148,
     148,   148,   278,    -1,   145,  -106,   278,   278,   278,   278,
    -106,  -106,  -106,   196,   -37,    73,   102,   156,  -106,  -106,
    -106,   165,  -106,    33,    33,  -106,   192,   148,   148,   148,
     148,    14,  -106,  -106,   206,   206,  -106,   234,   240,   234,
    -106,   228,    87,  -106,    17,   211,   240,  -106,   234,   240,
     234,   119,  -106,   179,  -106,  -106,   234,  -106
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    45,     0,     0,    90,    91,    81,    93,     0,
       0,     0,     0,     0,    82,     1,    94,     0,     0,     0,
      53,    54,    50,    51,    52,    35,     0,    32,    36,    48,
       0,    41,    40,    37,    38,    39,     0,     0,     0,     0,
      88,     0,    92,     0,     0,     0,    42,     0,    83,     0,
       0,     0,     0,     0,    34,     0,     0,     0,     0,     0,
      85,     0,    89,     0,    33,    44,     0,    43,     0,    84,
       0,     0,    46,    49,    86,     0,     0,    87,    55,     0,
      47,     0,     0,     0,    35,     0,     0,     0,     0,     0,
      56,    14,    21,     5,     2,     7,    24,    70,    20,    26,
      29,     9,    17,    16,    64,    71,     0,    69,    72,    59,
      73,    68,     0,    25,     0,     0,     0,     0,     0,     0,
      79,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    19,    18,    23,     0,     0,     0,     0,
      61,    60,    62,     0,     0,     0,     0,     0,    77,    78,
      80,     0,    22,     4,     3,     6,     8,    13,    11,    10,
      12,    15,    27,    28,    31,    30,    63,     0,     0,     0,
      76,     0,     0,    65,     0,    57,     0,    74,     0,     0,
       0,     0,    66,     0,    58,    75,     0,    67
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -106,   116,   -79,  -106,    94,   118,    35,  -105,   -72,    86,
     103,  -106,    -8,  -106,   255,  -106,   194,  -106,  -106,  -106,
    -106,   -12,  -106,   -90,  -106,   140,   -74,  -106,   -89,  -106,
    -106,   174,    -5,   246,  -106
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,    27,    36,    45,    46,     4,     5,    76,
      47,   103,    79,   104,   105,   106,   107,   108,   109,   110,
     111,     6,     7,     8,     9
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      28,    14,    80,   116,    26,    30,    37,    61,    17,   144,
     123,    56,    57,   118,   119,   121,   140,   141,    10,   135,
       1,   126,   142,    12,    81,    50,    11,   167,   124,    28,
       2,    28,   168,    53,   127,    54,   125,    59,     3,   135,
     135,    29,   135,   145,   146,   128,   129,   155,    13,    70,
     151,    71,     1,   166,   141,    48,    20,    21,    22,    23,
      24,    25,    41,   174,    43,    19,   135,   135,    44,    38,
     117,    18,   135,    39,   183,    40,    62,    81,   173,    49,
     175,   178,    55,    89,   134,    81,   179,    58,   133,   182,
      63,   184,   120,    81,   130,   131,    66,   187,   177,    81,
      60,   134,   135,    68,   181,   133,    81,    14,    69,    20,
      21,    22,    23,    24,    25,    74,   113,    20,    21,    22,
      23,    24,    25,    81,    75,    20,    21,    22,    23,    24,
      25,    20,    21,    22,    23,    24,    25,   169,    20,    21,
      22,    23,    24,    25,    77,   134,   134,   134,   134,   133,
     133,   133,   133,   148,    78,    20,    21,    22,    23,    24,
      25,   149,    81,   157,   158,   159,   160,   150,    31,    81,
      41,    42,    43,   114,   170,    32,    41,    64,    43,    33,
     115,     1,    34,    35,    20,    21,    22,    23,    24,    25,
      82,   185,    83,   122,    20,    21,    22,    23,    24,    84,
      81,    20,    21,    22,    23,    24,    25,   132,    85,    86,
     -36,    87,   136,   137,   138,   139,    88,    15,   153,   154,
     147,    89,   162,   163,   152,    78,    90,   171,    82,   172,
      83,   176,    20,    21,    22,    23,    24,    84,    81,   180,
       1,   164,   165,   186,    81,   156,    85,    86,   161,    87,
       2,    67,   143,   112,    88,    16,     0,     0,     3,    89,
       0,     0,     0,    78,    90,     0,    82,     0,    83,     0,
      20,    21,    22,    23,    24,    84,    20,    21,    22,    23,
      24,    25,    81,     0,    85,    86,     0,    87,     0,     0,
       0,     0,    88,    51,    52,     0,     0,    89,     0,     0,
       0,    78,     0,    89,    20,    21,    22,    23,    24,     0,
      65,     0,     0,     0,    20,    21,    22,    23,    24,    25,
       0,    72,     0,    73
};

static const yytype_int16 yycheck[] =
{
      12,     6,    76,     3,    12,    17,     3,     3,     3,   114,
      89,    64,    65,    85,    86,    87,   106,   106,    41,    98,
      23,     3,   112,    63,     4,    37,    49,    64,    14,    41,
      33,    43,    69,    41,    16,    43,    22,    49,    41,   118,
     119,    63,   121,   115,   116,    12,    13,   126,    41,    61,
     122,    63,    23,   143,   143,    72,    36,    37,    38,    39,
      40,    41,    63,   168,    65,    41,   145,   146,    41,    66,
      70,    66,   151,    70,   179,    72,    72,     4,   167,     3,
     169,    64,    66,    63,    96,     4,    69,    64,    96,   178,
      65,   180,    72,     4,    61,    62,    21,   186,   172,     4,
      72,   113,   181,    21,   176,   113,     4,   112,    72,    36,
      37,    38,    39,    40,    41,    72,    81,    36,    37,    38,
      39,    40,    41,     4,    71,    36,    37,    38,    39,    40,
      41,    36,    37,    38,    39,    40,    41,    64,    36,    37,
      38,    39,    40,    41,    72,   157,   158,   159,   160,   157,
     158,   159,   160,    72,    67,    36,    37,    38,    39,    40,
      41,    72,     4,   128,   129,   130,   131,    72,    31,     4,
      63,    64,    65,    63,    72,    38,    63,    64,    65,    42,
      63,    23,    45,    46,    36,    37,    38,    39,    40,    41,
      32,    72,    34,    63,    36,    37,    38,    39,    40,    41,
       4,    36,    37,    38,    39,    40,    41,    15,    50,    51,
      65,    53,     6,     7,     4,     5,    58,     0,   124,   125,
      36,    63,   136,   137,    64,    67,    68,    71,    32,    64,
      34,     3,    36,    37,    38,    39,    40,    41,     4,    28,
      23,   138,   139,    64,     4,   127,    50,    51,   132,    53,
      33,    57,   112,    79,    58,     9,    -1,    -1,    41,    63,
      -1,    -1,    -1,    67,    68,    -1,    32,    -1,    34,    -1,
      36,    37,    38,    39,    40,    41,    36,    37,    38,    39,
      40,    41,     4,    -1,    50,    51,    -1,    53,    -1,    -1,
      -1,    -1,    58,    38,    39,    -1,    -1,    63,    -1,    -1,
      -1,    67,    -1,    63,    36,    37,    38,    39,    40,    -1,
      55,    -1,    -1,    -1,    36,    37,    38,    39,    40,    41,
      -1,    66,    -1,    68
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    23,    33,    41,    90,    91,   104,   105,   106,   107,
      41,    49,    63,    41,   105,     0,   106,     3,    66,    41,
      36,    37,    38,    39,    40,    41,    85,    86,    94,    63,
      94,    31,    38,    42,    45,    46,    87,     3,    66,    70,
      72,    63,    64,    65,    41,    88,    89,    93,    72,     3,
      94,    87,    87,    85,    85,    66,    64,    65,    64,    94,
      72,     3,    72,    65,    64,    87,    21,    89,    21,    72,
      94,    94,    87,    87,    72,    71,    92,    72,    67,    95,
      99,     4,    32,    34,    41,    50,    51,    53,    58,    63,
      68,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    94,    96,    97,    98,    99,   100,   101,
     102,   103,   104,    79,    63,    63,     3,    70,    81,    81,
      72,    81,    63,    75,    14,    22,     3,    16,    12,    13,
      61,    62,    15,    85,    94,    75,     6,     7,     4,     5,
      96,   101,    96,    98,    80,    81,    81,    36,    72,    72,
      72,    81,    64,    77,    77,    75,    78,    79,    79,    79,
      79,    74,    82,    82,    83,    83,    96,    64,    69,    64,
      72,    71,    64,   101,    80,   101,     3,    99,    64,    69,
      28,    81,   101,    80,   101,    72,    64,   101
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    73,    74,    74,    74,    75,    75,    76,    76,    77,
      77,    77,    77,    77,    78,    78,    79,    79,    79,    79,
      80,    81,    81,    81,    82,    82,    83,    83,    83,    84,
      84,    84,    85,    85,    85,    86,    86,    87,    87,    87,
      87,    87,    88,    88,    89,    90,    92,    91,    93,    91,
      94,    94,    94,    94,    94,    95,    96,    97,    97,    98,
      98,    99,    99,    99,    99,   100,   100,   100,   101,   101,
     101,   101,   101,   101,   102,   103,   103,   103,   103,   103,
     103,   104,   104,   105,   105,   105,   105,   105,   105,   105,
     106,   106,   106,   107,   107
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     3,     3,     1,     3,     1,     3,     1,
       3,     3,     3,     3,     1,     3,     1,     1,     2,     2,
       1,     1,     3,     2,     1,     2,     1,     3,     3,     1,
       3,     3,     1,     4,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     3,     1,     0,     9,     0,     7,
       1,     1,     1,     1,     1,     1,     1,     5,     7,     1,
       2,     3,     3,     4,     2,     5,     7,     9,     1,     1,
       1,     1,     1,     1,     5,     7,     4,     3,     3,     2,
       3,     1,     2,     5,     7,     6,     8,     9,     4,     6,
       1,     1,     4,     1,     2
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
        case 44:
#line 125 "yacc.y" /* yacc.c:1646  */
    {
		insert((yyvsp[-2].val), (yyvsp[0].val) , "");
	}
#line 1496 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 130 "yacc.y" /* yacc.c:1646  */
    {
		isShouldAdd = 0;
		depth++;
	}
#line 1505 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 136 "yacc.y" /* yacc.c:1646  */
    {	
		memset(temp_parameter,0,strlen(temp_parameter)); 
		now_fun_index++; 
		function_index++;
		insert((yyvsp[-5].val),(yyvsp[0].val),"");
		strcat (jasm,"\tmethod public static ");
		strcat (jasm,(yyvsp[-5].val));
		strcat (jasm," ");
		strcat (jasm,(yyvsp[-5].val));
		strcat(jasm,"(");
	
		for (int i = 0; i < sizeof(temp_parameter)/sizeof(temp_parameter[0]); ++i)
			{
				if (temp_parameter[i] == 0)
				{
					temp_parameter[i-1] = '\0';
					break;
				}
			}
		strcat(jasm,temp_parameter);
		strcat(jasm,")\n");
		strcat(jasm,"\tmax_stack 15\n\tmax_locals 15\n\t{\n");
	}
#line 1533 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 160 "yacc.y" /* yacc.c:1646  */
    {
		strcat (jasm,"\t}\n");
		now_fun_index--;
	}
#line 1542 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 164 "yacc.y" /* yacc.c:1646  */
    {now_fun_index++;function_index++;}
#line 1548 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 185 "yacc.y" /* yacc.c:1646  */
    {
		strcpy((yyval.val), (yyvsp[0].val));
	}
#line 1556 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 188 "yacc.y" /* yacc.c:1646  */
    {
		strcpy((yyval.val), (yyvsp[0].val));
	}
#line 1564 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 191 "yacc.y" /* yacc.c:1646  */
    {
		strcpy((yyval.val), (yyvsp[0].val));
	}
#line 1572 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 195 "yacc.y" /* yacc.c:1646  */
    {
		char tempStr[50];
		sprintf( tempStr, "%d", (yyvsp[0].int_type) );
		strcpy((yyval.val), tempStr);
	}
#line 1582 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 201 "yacc.y" /* yacc.c:1646  */
    {
		char tempStr[50];
		sprintf( tempStr, "%g", (yyvsp[0].double_type) );
		strcpy((yyval.val), tempStr);
	}
#line 1592 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 210 "yacc.y" /* yacc.c:1646  */
    {
		if (isShouldAdd == 1)
		{
			depth++;
		}
		else{
			isShouldAdd++;
		}
	}
#line 1606 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 222 "yacc.y" /* yacc.c:1646  */
    {
		depth--;
	}
#line 1614 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 233 "yacc.y" /* yacc.c:1646  */
    {
		statment_number=statment_number+1;
	}
#line 1622 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 279 "yacc.y" /* yacc.c:1646  */
    {
		insert((yyvsp[-3].val), "const" , (yyvsp[-1].val));
	}
#line 1630 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 282 "yacc.y" /* yacc.c:1646  */
    {
		insert((yyvsp[-5].val),(yyvsp[-3].val),(yyvsp[-1].val));
	}
#line 1638 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 285 "yacc.y" /* yacc.c:1646  */
    {
		insert((yyvsp[-3].val),"",(yyvsp[-1].val));
	}
#line 1646 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 288 "yacc.y" /* yacc.c:1646  */
    {
		insert((yyvsp[-5].val),(yyvsp[-3].val),(yyvsp[-1].val));
	}
#line 1654 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 291 "yacc.y" /* yacc.c:1646  */
    {
		insert((yyvsp[-6].val),"array",(yyvsp[-4].val));
	}
#line 1662 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 294 "yacc.y" /* yacc.c:1646  */
    {
    	insert( (yyvsp[-1].val), "int", "" );
	}
#line 1670 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 297 "yacc.y" /* yacc.c:1646  */
    {
    	insert((yyvsp[-3].val) , (yyvsp[-1].val) , "" );
  }
#line 1678 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1682 "y.tab.c" /* yacc.c:1646  */
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
#line 311 "yacc.y" /* yacc.c:1906  */

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
  		depth = 0;
		hashArray = create();

		strcat(jasm, "class go_test\n{\n ");
		yyparse();

		printf("\n\n%s\n", "------ Symbol Table: ------");
		printf("%-*s:%-*s%-*s%-*s%-*s%-*s\n", 5, "Index:", 15, "Name", 15, "Type", 20, "Value", 15, "Fun_index", 5, "Depth");
		dump();

		printf("\n\n%s\n", "------ Write Java Assembly Code Into go_test.jasm ------");
		strcat(jasm, "}\n");
		
		FILE *fpt;
		char file_name[100];
		fpt = fopen("go_test.jasm", "w"); 
		fprintf(fpt, jasm);
		fclose(fpt);

		char command[100] = "";
		printf("\n\n%s\n", "------ Convert go_test.jasm To go_test.class By javaa program------");
		strcat(command, "./javaa go_test.jasm");
		printf("%s%s\n\n", "Execute linux command1: ", command);
		system(command);

		// clear the command string 
		memset(command, '\0', sizeof(command)-1);

		printf("\n\n%s\n", "------ Result After Run go_test.class ------");
		strcat(command, "java go_test");
		printf("%s%s\n\n", "Execute linux command2: ", command);
		system(command);
		return 0;
}







