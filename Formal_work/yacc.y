%{

	#include <stdlib.h>
	#include<string.h>
	#include"HashTable.h"

	int statment_number;
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

%type  <val> val_delecation program pre_expression type_specifier Delector_list declarator
%%

EQU_express
	: re_expression
	| EQU_express EQ_OP re_expression
	| EQU_express NE_OP re_expression
	;

assignment_expression
	: inclusive_or_expression
	| inclusive_or_expression '=' assignment_expression
	;
	
inclusive_or_expression
	: and_expression
	| inclusive_or_expression OR_OR and_expression
	
	;
re_expression
	: additive_expression
	| re_expression '<' pre_expression
	| re_expression GE_OP pre_expression
	| re_expression '>' pre_expression
	| re_expression LE_OP pre_expression
	;
and_expression
	: EQU_express
	| and_expression AND_AND EQU_express
	;

pre_expression
	: val_delecation
	| Delector_list 
	| pre_expression val_delecation 
	| pre_expression Delector_list
	;

expression_sta
	:  expression 
	;
expression
	: assignment_expression
	| '(' assignment_expression ')'
	| expression assignment_expression
	;
U_nary
	: pre_expression
	| '-' pre_expression
	;

multp_expression
	: U_nary
	| multp_expression '*' U_nary
	| multp_expression '/' U_nary
	;

additive_expression
	: multp_expression
	| additive_expression '+' multp_expression
	| additive_expression '-' multp_expression
	;

Delector_list
	: declarator
	| Delector_list '(' Delector_list ')' 
	| Delector_list ',' Delector_list
	;

declarator
	: IDENTIFIER  
	| val_delecation 
	;

type_specifier
	: BOOL
	| INT
	| VOID
	| STR
	| FLOAT
	;

add_main_func_first:
{
	strcat(jasm, "\tmethod public static void main(java.lang.String[])\n\tmax_stack 15\n\tmax_locals 15\n\t{\n");
};
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
		insert($1, $3 , "","");
	}
	;
function_definition:
		func_expression type_specifier IDENTIFIER '('
		{
			insert($3,$2,"","");
			memset(temp_parameter,0,strlen(temp_parameter));
			now_fun_index++;
			function_index++;
		}
		parameter_list ')'
		{
			strcat(jasm,"\tmethod public static");
			strcat(jasm,$2);
			strcat(jasm," ");
			strcat(jasm,$3);
			strcat(jasm,"(");
			for (int i = 0; i < sizeof(temp_parameter)/sizeof(temp_parameter[0]); ++i)
			{
				if (temp_parameter[i]==0)
				{
					temp_parameter[i-1]='\0';
					break;
					/* code */
				}
				/* code */
			}
			strcat(jasm,temp_parameter);
			strcat(jasm,")\n");
			strcat(jasm,"\tmax_stack 15\n\tmax_locals 15\n\t{\n");
		}
		 '{' statement_list '}'
		 {
		 	strcat(jasm,"\t}\n");
		 	now_fun_index--;
		 }
	| func_expression type_specifier IDENTIFIER '('{now_fun_index++;function_index++;}
	 {insert($3,$2,"","");now_fun_index++;}
	 add_main_func_first block_stament statement_list block_end
	 {
	 	if (strcmp($3,"main")==0)
	 	{
	 		strcat(jasm,"\t\treturn\n\t}\n");

	 	}
	 	now_fun_index--;
	 }
	 ;

val_delecation
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

block_start
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
block_end
	: '}'
	{
		depth--;
	}
	;

selection_statement
	: IF '(' expression ')' statement
	| IF '(' expression ')' statement ELSE statement
	;
statement_list
	: statement
	{
		statment_number=statment_number+1;
	}
	| statement_list statement
	;
block_stament
	: block_start statement_list block_end
	| block_start declaration_list block_end
	| block_start declaration_list statement_list block_end
	| block_start block_end
	;
iteration_statement
	: FOR '(' expression_sta ')' statement
	| FOR '(' expression_sta ";" expression_sta ')' statement
	| FOR '(' expression_sta ";"  expression_sta ";"  expression_sta ')' statement
	;


statement
	: simple_statment
	| block_stament
	| expression_sta 
	| selection_statement 
	| iteration_statement
	| while_srarement
	;
while_srarement
	:WHILE '(' expression ')' block_stament
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
	: LET IDENTIFIER '=' val_delecation ';'{
		insert($2, "" , $4,"const");
	}
	| LET IDENTIFIER ':'type_specifier'='val_delecation ';'{
		insert($2,$4,$6,"const");
	}
	| LET MUT IDENTIFIER '=' val_delecation ';'{
		insert($3,"",$5,"");
	}
	| LET MUT IDENTIFIER ':'type_specifier'='val_delecation ';'{
		insert($3,$5,$7,"");
	}
	| LET MUT IDENTIFIER'['type_specifier','val_delecation']' ';'{
		insert($3,"array",$5,"");
	}
	|  LET MUT IDENTIFIER ';'{
    	insert( $3, "int", "" ,"");
	}
	| LET MUT IDENTIFIER ':' type_specifier ';'{
    	insert($3 , $5 , "" ,"");
  }
	;
EX_delection
	: function_definition
	| declaration_list	
	| IDENTIFIER '(' Delector_list ')'
	;

program
	: EX_delection	
	| program EX_delection	
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
    printf("%-*s:%-*s%-*s%-*s%-*s  %s\n", 5, "Index", 20, "Name", 15, "Type", 15, "Value", 5, "Depth", "Const");
  	dump();
  	int a=0;
  	if(statment_number==0)
  	{
  		printf("statment_number wrong\n");
  	}
  	while(a<=depth)
  	{
  		printf("Depth%d\t ", depth);
  		printf("thr look return number is%d\t",lookup("main",0) );
  		printf("thisdepth is%d\n",a );
  	a++;
  	}
  	return 0;
}







