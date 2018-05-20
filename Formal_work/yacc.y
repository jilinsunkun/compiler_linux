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


%token ADD_ADD LES_LES LE_OP GE_OP NE_OP AND_AND OR_OR ADD_OP LES_OP MUL_OP DIV_OP
%token LET BREAK CHAR CONTINUE DO ELSE ENUM EXTERN  FLOAT  FOR FN  IF IN 
%token <int_type> INTEGER
%token <double_type> REALCONSTANTS 
%token <val> STR TRUE FALSE IDENTIFIER BOOL STRINGKEYWORD REAL INT VOID
%token LOOP MATCH MUT PRINT PRINTLN PUB RETURN SELF STATIC  WHERE USE WHILE 


%start program

%type  <val> value_declaration program primary_expression type_specifier declarator_list declarator declaration_list
%type <int_type> number_declaration 

%%


type_specifier
	: BOOL
	| FLOAT
	| INT
	| VOID
	;
declaration_list
	: declaration
	| declaration_list declaration
	;

declaration
	: LET IDENTIFIER '=' value_declaration {
		insert($2, "const" , $4);
	}
	| LET IDENTIFIER type_specifier {
		insert($2, $3, "");
	}
	| LET IDENTIFIER type_specifier '=' value_declaration {
		insert($2, $3, "");
	}
	| LET IDENTIFIER '[' INTEGER ']' type_specifier {
		insert($2, "array" , $6);
	}
	;
external_declaration
	
	: declaration_list
	| IDENTIFIER '(' declarator_list ')' 
	;

program
	: external_declaration
	| program external_declaration
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








