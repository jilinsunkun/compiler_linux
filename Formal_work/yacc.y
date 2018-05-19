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

%token <val> STR TRUE FALSE IDENTIFIER BOOL STRINGKEYWORD REAL  VOID FLOAT
%token <double_type> REALCONSTANTS LET
%token <int_type> INTEGER
%token  BREAK CASE CONST CONTINUE DEFAULT ELSE FOR FUNC GO IF 
%token IMPORT INT NIL PRINT PRINTLN  RETURN  
%token STRUCT SWITCH VAR  WHILE READ

%start program

%type  <val> value_declaration program primary_expression type_specifier declarator_list declarator

%type <int_type> number_declaration
%%


type_specifier		:	FLOAT
					|	BOOL
					| 	INT
					| 	VOID
					;

value_declaration
					: STR  {
						strcpy($$, $1);
					}
					| TRUE  {
						strcpy($$, $1);
					}
					| FALSE {
						strcpy($$, $1);
					}
					| INTEGER 
					{
						char tempStr[50];
						sprintf( tempStr, "%d", $1 );
						strcpy($$, tempStr);
					}
					| REALCONSTANTS 
					{
						char tempStr[50];
						sprintf( tempStr, "%g", $1 );
						strcpy($$, tempStr);
					}
					;

declaration_list
					: declaration
					| declaration_list declaration
					;
declaration	
					: LET IDENTIFIER '=' value_declaration {
						insert($2, "const" , $4);
					}
					| VAR IDENTIFIER type_specifier {
						insert($2, $3, "");
					}
					| VAR IDENTIFIER type_specifier '=' value_declaration {
						insert($2, $3, "");
					}
					| VAR IDENTIFIER '[' INTEGER ']' type_specifier {
						insert($2, "array" , $6);
					}

external_declaration
					: declaration_list
					| IDENTIFIER '(' declarator_list ')' 
					;

declaration_list
					: declaration
					| declaration_list declaration
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








