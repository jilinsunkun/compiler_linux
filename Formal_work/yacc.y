%{
	#include <stdio.h>
	#include"HashTable.h"
%}
%union{
  char typeOF[200];
  char val[200];
  double double_type;
  int int_type;
  int int_val;
}
%precedence '='
%left '-' '+'
%left '*' '/'
%precedence NEG /* negation--unary minus */
%right '^'      /* exponentiation */
%type<val> constatnts type_specific

%token ADD_ADD LES_LES LE_OP GE_OP NE_OP AND_AND OR_OR ADD_OP LES_OP MUL_OP DIV_OP
%token FLOAT BOOL INT VOID
%token let
%token tokenID 
%type <val> constants 

%%


constants			:	 let  constant_equation {printf("let+constant_equation\n");}
					;

constant_equation	:	constant_type'='constant_value{$1=$3}
					;
constant_type		:	constant_name':'type_specific	{printf("%s:%s\n",$1,$3 );}
					|	constant_name
					;
constant_name		:	tokenID	{printf("%s\n",tokenID );}

					;

type_specific		:	FLOAT
					|	BOOL
					| 	INT
					| 	VOID
					;
%%
int yyerror(char *s)
{
 fprintf(stderr, "%s\n", s);
 return 0;
}
int main(void)
{
 yyparse();
 return 0;
}