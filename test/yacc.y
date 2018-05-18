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

%%


constants			:	let'+'constant_equation
					;

constant_equation	:	constant_type'='constant_value
					;
constant_type		:	constant_name':'type_specific
					|	constant_name



type_specific		:	FLOAT
					|	BOOL
					| 	REAL
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