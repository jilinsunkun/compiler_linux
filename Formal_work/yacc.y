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


%token ADD_ADD LES_LES LE_OP GE_OP NE_OP AND_AND OR_OR ADD_OP LES_OP MUL_OP DIV_OP OP_LE EQ_OP
%token LET BREAK CHAR CONTINUE DO ELSE ENUM EXTERN  FLOAT  FOR FN  IF IN 
%token <int_type> INTEGER
%token <double_type> REALCONSTANTS 
%token <val> STR TRUE FALSE IDENTIFIER BOOL STRINGKEYWORD REAL INT VOID
%token LOOP MATCH MUT PRINT PRINTLN PUB RETURN SELF STATIC  WHERE USE WHILE 
%token CONST VAR

%start program

%type  <val> value_declaration program pre_expression type_specifier declarator_list declarator
%type <int_type> number_declaration
%%

equality_expression
	: relational_expression
	| equality_expression EQ_OP relational_expression
	| equality_expression NE_OP relational_expression
	;

assignment_expression
	: inclusive_or_expression
	| inclusive_or_expression '=' assignment_expression
	;
	
inclusive_or_expression
	: and_expression
	| inclusive_or_expression OR_OR and_expression
	
	;
relational_expression
	: additive_expression
	| relational_expression '<' pre_expression
	| relational_expression GE_OP pre_expression
	| relational_expression '>' pre_expression
	| relational_expression LE_OP pre_expression
	;
and_expression
	: equality_expression
	| and_expression AND_AND equality_expression
	;

pre_expression
	: value_declaration
	| declarator_list 
	| pre_expression value_declaration 
	| pre_expression declarator_list
	;

expression_sta
	:  expression 
	;
expression
	: assignment_expression
	| expression assignment_expression
	;
U_nary
	: pre_expression
	| '-' pre_expression
	;

multiplicative_expression
	: U_nary
	| multiplicative_expression '*' U_nary
	| multiplicative_expression '/' U_nary
	;

additive_expression
	: multiplicative_expression
	| additive_expression '+' multiplicative_expression
	| additive_expression '-' multiplicative_expression
	;

declarator_list
	: declarator
	| declarator_list '(' declarator_list ')' 
	| declarator_list ',' declarator_list
	;

declarator
	: IDENTIFIER  
	| value_declaration 
	;

type_specifier
	: BOOL
	| INT
	| VOID
	| STR
	;

func_expression:
	FN {
		isShouldAdd = 0;
		depth++;
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
	:func_expression IDENTIFIER '('parameter_list')'  OP_LE type_specifier compound_statement
	{
		insert($2,$7,"");
	}
	|func_expression IDENTIFIER '(' parameter_list ')' compound_statement 
	{
		insert($2, "", "");
	}
	|func_expression IDENTIFIER '('  ')'  OP_LE type_specifier compound_statement
	{
		insert($2, $6, "");
	}
	| func_expression IDENTIFIER '('  ')'   compound_statement
	{
		insert($2, "", "");
	}

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

compound_start
	: '{'
	{
		if (isShouldAdd == 1)
		{
			depth++;
		}
		else{
			isShouldAdd++;
		}
	}
	;	
compound_end
	: '}'
	{
		depth--;
	}
	;
compound_statement
	: compound_start statement_list compound_end
	| compound_start declaration_list compound_end
	| compound_start declaration_list statement_list compound_end
	| compound_start compound_end
	;
iteration_statement
	: FOR '(' expression_sta ')' statement
	| FOR '(' expression_sta ";" expression_sta ')' statement
	| FOR '(' expression_sta ";"  expression_sta ";"  expression_sta ')' statement
	;

selection_statement
	: IF '(' expression ')' statement
	| IF '(' expression ')' statement ELSE statement
	;
statement_list
	: statement
	| statement_list statement
	;

statement
	: simple_statment
	| compound_statement
	| expression_sta 
	| selection_statement 
	| iteration_statement
	| while_srarement
	;
while_srarement
	:WHILE '(' expression ')' compound_statement
	;
simple_statment
	: IDENTIFIER '[' INTEGER ']' '=' expression ';'
	| PRINT expression ';'
	| PRINTLN expression ';'
	| IDENTIFIER '=' expression  ';'
	| RETURN ';'
	| RETURN expression  ';'
	;


declaration_list
	: declaration 
	| declaration_list declaration 
	;

declaration
	: LET IDENTIFIER '=' value_declaration ';'{
		insert($2, "const" , $4);
	}
	| LET IDENTIFIER ':'type_specifier'='value_declaration ';'{
		insert($2,$4,$6);
	}
	| LET MUT IDENTIFIER '=' value_declaration ';'{
		insert($3,"",$5);
	}
	| LET MUT IDENTIFIER ':'type_specifier'='value_declaration ';'{
		insert($3,$5,$7);
	}
	| LET MUT IDENTIFIER'['type_specifier','value_declaration']' ';'{
		insert($3,"array",$5);
	}
	|  LET MUT IDENTIFIER ';'{
    	insert( $3, "int", "" );
	}
	| LET MUT IDENTIFIER ':' type_specifier ';'{
    insert($3 , $5 , "" );
  }
	;
external_declaration
	: function_definition
	| declaration_list	
	| IDENTIFIER '(' declarator_list ')'
	;

program
	: external_declaration	
	| program external_declaration	
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
  	return 0;
}







