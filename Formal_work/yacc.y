%{
	

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
%token CONST VAR

%start program

%type  <val> value_declaration program  type_specifier declarator_list declarator declaration_list
%%

declarator_list
	: declarator
	| declarator_list '(' declarator_list ')' 
	| declarator_list ','
	;

declarator
	: IDENTIFIER  
	| value_declaration 
	;

type_specifier
	: BOOL
	| FLOAT
	| INT
	| VOID
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

func_expression:
	FUNC {
		isShouldAdd = 0;
		itemDepth++;
	};
parameter_list
	: parameter_declaration
	| parameter_list ',' parameter_declaration
	;
parameter_declaration
	: IDENTIFIER ':' type_specifier 
	{
		insert($1, $3 , "");
	}
	;
function_definition
	:func_expression	type_specifier	IDENTIFIER '('parameter_list')' compound_statement
	{
		insert($3,$2,"")
	}
	|func_expression IDENTIFIER '(' parameter_list ')' compound_statement 
	{
		insert($2, "", "");
	}
	|func_expression type_specifier IDENTIFIER '('  ')' compound_statement 
	{
		insert($3, $2, "");
	}
	| func_expression IDENTIFIER '('  ')' compound_statement 
	{
		insert($2, "", "");
	}
compound_start
	: '{'
	{
		if (isShouldAdd == 1)
		{
			itemDepth++;
		}
		else{
			isShouldAdd++;
		}
	}
	;	
compound_end
	: '}'
	{
		itemDepth--;
	}
	;
compound_statement:
	: compound_start statement_list compound_end
	| compound_start declaration_list compound_end
	| compound_start declaration_list statement_list compound_end
	| compound_start compound_end
	;
statement_list
	: statement
	| statement_list statement
	;

statement
	: simple_statment
	| compound_statement
	| expression_statement 
	| selection_statement 
	| iteration_statement 
	| jump_statement 
	;
simple_statment
	: IDENTIFIER '[' INTEGER ']' '=' expression 
	| PRINT expression
	| PRINTLN expression 
	| READ IDENTIFIER 
	| RETURN 
	| RETURN expression
	;
expression_statement
	:  expression 
	;
selection_statement
	: IF '(' expression ')' statement
	| IF '(' expression ')' statement ELSE statement
	;

declaration_list
	: declaration {printf("call declaration\n");}
	| declaration_list declaration {printf("call declaration_list declaration\n");}
	;

declaration
	: LET IDENTIFIER '=' value_declaration {
		insert($2, "const" , $4);
	}
	| LET IDENTIFIER ':'type_specifier'='value_declaration{
		insert($2,$4,$6);
	}
	| LET MUT IDENTIFIER '=' value_declaration{
		insert($3,"",$5);
	}
	| LET MUT IDENTIFIER ':'type_specifier'='value_declaration{
		insert($3,$5,$7);
	}
	| LET MUT IDENTIFIER'['type_specifier','value_declaration']'{
		insert($3,"array",$5);
	}
	
	;
external_declaration
	
	: declaration_list	{printf("call declaration_list\n");}
	| IDENTIFIER '(' declarator_list ')' 
	;

program
	: external_declaration	{printf("call external_declaration\n");}
	| program external_declaration	{printf("call external_declaration\n");}
	;
%%
void yyerror(const char *str){
    printf("error:%s\n",str);
}

int yywrap(){
    return 1;
}

int main()
{
	isShouldAdd = 0;
	itemDepth = 0;
	hashArray = create();

    yyparse();
    

    printf("%s\n", "------Test Lookup In example.go:------");
    printf("%-*s%-*s\n", 20 ,"Name" ,10 , "Depth");
    if (lookup("a" , 0) >= 0 && lookup("a" , 1) >= 0)
    {
    	printf("%-*s%-*d\n", 20 ,hashArray[lookup("a" , 0)]->idName ,5 , hashArray[lookup("a" , 0)]->depth);
    	printf("%-*s%-*d\n", 20 ,hashArray[lookup("a" , 1)]->idName ,5 , hashArray[lookup("a" , 1)]->depth);
    }
    
    printf("\n\n%s\n", "------Symbol Table:------");
    printf("%-*s%-*s\n", 20 ,"Name" ,10 , "Depth");
    printf("%-*s:%-*s%-*s%-*s%-*d\n", 5, "Index:", 20, "Name", 15, "Type", 30, "Value", 5, "Depth");
  	dump();
  	return 0;
}







