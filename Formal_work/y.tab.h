/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
#line 6 "yacc.y" /* yacc.c:1909  */

  char typeOF[200];
  char val[200];
  double double_type;
  int int_type;
  int int_val;

#line 170 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
