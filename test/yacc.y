%{
	#include <stdio.h>
%}
%union{
	double dval;
	int vbino;
	double var_value;
	char var_number;
}
%token <dval> NAME 
%token<var_value>  NUMBER
%precedence '='
%left '-' '+'
%left '*' '/'
%precedence NEG /* negation--unary minus */
%right '^'      /* exponentiation */
%type<var_value> statement expression

%%

statement: statement expression '\n' { printf("= %d\n", $2);}
		 | NAME '=' expression '\n' 
		 | expression '\n'{ printf("= %d\n", $1); }
		 ;
expression: expression '+' NUMBER  { $$ = $1 + $3; }
		 | expression '-' NUMBER  { $$ = $1 - $3; }
		 | NUMBER  { $$ = $1; }
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