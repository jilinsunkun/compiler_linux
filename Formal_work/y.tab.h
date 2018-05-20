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
    LET = 270,
    BREAK = 271,
    CHAR = 272,
    CONTINUE = 273,
    DO = 274,
    ELSE = 275,
    ENUM = 276,
    EXTERN = 277,
    FLOAT = 278,
    FOR = 279,
    FN = 280,
    IF = 281,
    IN = 282,
    INTEGER = 283,
    REALCONSTANTS = 284,
    STR = 285,
    TRUE = 286,
    FALSE = 287,
    IDENTIFIER = 288,
    BOOL = 289,
    STRINGKEYWORD = 290,
    REAL = 291,
    INT = 292,
    VOID = 293,
    LOOP = 294,
    MATCH = 295,
    MUT = 296,
    PRINT = 297,
    PRINTLN = 298,
    PUB = 299,
    RETURN = 300,
    SELF = 301,
    STATIC = 302,
    WHERE = 303,
    USE = 304,
    WHILE = 305,
    CONST = 306,
    VAR = 307
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
#define LET 270
#define BREAK 271
#define CHAR 272
#define CONTINUE 273
#define DO 274
#define ELSE 275
#define ENUM 276
#define EXTERN 277
#define FLOAT 278
#define FOR 279
#define FN 280
#define IF 281
#define IN 282
#define INTEGER 283
#define REALCONSTANTS 284
#define STR 285
#define TRUE 286
#define FALSE 287
#define IDENTIFIER 288
#define BOOL 289
#define STRINGKEYWORD 290
#define REAL 291
#define INT 292
#define VOID 293
#define LOOP 294
#define MATCH 295
#define MUT 296
#define PRINT 297
#define PRINTLN 298
#define PUB 299
#define RETURN 300
#define SELF 301
#define STATIC 302
#define WHERE 303
#define USE 304
#define WHILE 305
#define CONST 306
#define VAR 307

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

#line 166 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
