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
%token <val> STR TRUE FALSE IDENTIFIER BOOL  REAL INT VOID
%token LOOP MATCH MUT PRINT PRINTLN PUB RETURN SELF STATIC  WHERE USE WHILE 
%token CONST VAR

%start program

%type  <val> value_declaration program primary_expression type_specifier declarator_list declarator expression  assignment_expression relational_expression additive_expression  parameter_list parameter_declaration external_declaration unary_expression declaration function_definition declaration_list  '-'

%%

value_declaration
: STR  {
	strcat(jasm, "\t\tldc ");
	strcat(jasm, "\"");
	strcat(jasm, $1);
	strcat(jasm, "\"");
	strcat(jasm, "\n");
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
};

declarator
: IDENTIFIER
{
	int is_found_ident = 0;
	int tempdepth = itemDepth;
	temp_fun_index = now_fun_index;

	if(temp_fun_index != 0){
		while(tempdepth > -1){
			int index_depth = lookup($1, tempdepth);
			if(index_depth >= 0)
			{
				strcat(jasm, "\t\tiload ");
				char index_depth_str[10];
				sprintf(index_depth_str, "%d" , index_depth);

				strcat(jasm, index_depth_str);
				strcat(jasm, "\n");
				is_found_ident = 1;
				break;
			}
			tempdepth--;
		}
		temp_fun_index = 0;
	}

	if (is_found_ident == 0)
	{
		if (lookup($1, 0) >= 0)
		{
			strcat(jasm, "\t\tgetstatic int rust_test.");
			strcat(jasm, $1);
			
		}
		else if(strcmp(lookup_const($1), "") != 0)
		{
			strcat(jasm, "\t\tsipush ");
			strcat(jasm, lookup_const($1));
			strcpy($1, lookup_const($1));
		}
		else{
			strcat(jasm, "\t\tsipush ");
			strcat(jasm, $1);
		}
		
		strcat(jasm, "\n");
	}

	if (is_print == 1)
	{		
		is_print = 2;
		strcat(jasm, unary_symbol);
		memset(unary_symbol,0,strlen(unary_symbol));
	}
} 
| value_declaration
;

// when function be called
declarator_list
	: declarator
	| declarator_list ',' declarator_list
	;


primary_expression
: declarator_list
| primary_expression declarator_list
;

unary_expression
: primary_expression 
| '-' 
{
	if (is_print == 1)
	{
		strcpy(unary_symbol,"\t\tineg\n");
	}
} 
primary_expression 
;

additive_expression
: declarator
|  additive_expression  '+'  declarator
{
	char tempJasm[1000] = "";
	int is_found_ident = 0;
	int tempdepth = itemDepth;

	temp_fun_index = now_fun_index;
	strcat(tempJasm, "\t\tiadd\n");
	strcpy($$, tempJasm);
}
| additive_expression  '-' declarator
{
	char tempJasm[1000] = "";
	int is_found_ident = 0;
	int tempdepth = itemDepth;

	temp_fun_index = now_fun_index;
	strcat(tempJasm, "\t\tisub\n");
	strcpy($$, tempJasm);
}
;

relational_expression
: additive_expression
| relational_expression '>'  primary_expression
{
	strcat(jasm, "\t\tisub\n");
	strcat(jasm, "\t\tifgt ");
}
| relational_expression LE_OP primary_expression
{
	strcat(jasm, "\t\tisub\n");
	strcat(jasm, "\t\tifle ");
}
| relational_expression '<' primary_expression
{
	if (lookup($1, 0) >= 0)
	{
		strcat(jasm, "\tgetstatic int rust_test.");
		strcat(jasm, $1);
		strcat(jasm, "\n");
		strcat(jasm, "\tsipush ");
		strcat(jasm, $3);
		strcat(jasm, "\n");
		strcat(jasm, "\tisub\n");
		strcat(jasm, "\tiflt ");
	}
	else{
		strcat(jasm, "\tiload ");
		strcat(jasm, $1);
		strcat(jasm, "\n");
		strcat(jasm, "\tsipush ");
		strcat(jasm, $3);
		strcat(jasm, "\n");
		strcat(jasm, "\tisub\n");
		strcat(jasm, "\tiflt ");
	}
}
;

assignment_expression
:  IDENTIFIER  '='   additive_expression 
 {
 	is_assigning =1;
 	if (strcmp($3, "\t\tisub\n") == 0 | strcmp($3, "\t\tiadd\n") == 0)
 	{
 		strcat(jasm, $3);
 	}
 	
 	int is_found_ident = 0;
	int tempdepth = itemDepth;
	temp_fun_index = now_fun_index;

	if(temp_fun_index != 0){
		while(tempdepth > -1){
			int index_depth = lookup($1, tempdepth);
			if(index_depth >= 0)
			{
				strcat(jasm, "\t\tistore ");
				char index_depth_str[10];
				sprintf(index_depth_str, "%d" , index_depth);
				strcat(jasm, index_depth_str);
				strcat(jasm, "\n");
				is_found_ident = 1;
				break;
			}
			tempdepth--;
		}
		temp_fun_index = 0;
	}
	
	temp_fun_index = 0;

	if (is_found_ident == 0)
	{
		// check if $1 is const and avoid the const definetion
		if(strcmp(lookup_const($1), "") != 0)
		{
		}
		else if (lookup($1, 0) >= 0)
		{
			strcat(jasm, "\t\tputstatic int rust_test.");
			strcat(jasm, $1);
			strcat(jasm, "\n");
			
		}
		else{
			strcat(jasm, "\t\tsipush ");
			strcat(jasm, $1);
			strcat(jasm, "\n");
		}
	}
 	is_assigning =0;
}
;

expression
: unary_expression
| assignment_expression
| expression assignment_expression
| relational_expression
| expression relational_expression
| IDENTIFIER '=' IDENTIFIER '(' declarator_list  ')' ';'
{
	strcat(jasm, "\t\tinvokestatic int rust_test.");
	strcat(jasm, $3);
	strcat(jasm, "(");
	strcat(jasm, "int,int");
	strcat(jasm, ")");
	strcat(jasm, "\n");

		if (lookup($1, 0) >= 0)
		{
			strcat(jasm, "\t\tputstatic int rust_test.");
		}
		else{
			strcat(jasm, "\t\tistore ");
		}

		strcat(jasm, $1);
		strcat(jasm, "\n");
}
;

type_specifier
	: BOOL
	| INT
	| VOID
	| STR
	| FLOAT
	;


// when funtion be defined
parameter_list
: parameter_declaration
| parameter_list ','  parameter_declaration 
;

parameter_declaration
	: IDENTIFIER ':' type_specifier 
	{
		insert($1, $3 , "");
		strcat(temp_parameter, $3);
		strcat(temp_parameter, ",");
	}
	;
simple_statment
	: IDENTIFIER '[' INTEGER ']' '=' expression ';'
	| IDENTIFIER '=' expression  ';'
	| PRINT 
	{
		is_print=1;
		strcat(jasm, "\n\t\tgetstatic java.io.PrintStream java.lang.System.out\n");
	}
	expression
	{
		if(is_print==2)
			{strcat(jasm, "\t\tinvokevirtual void java.io.PrintStream.print(int)\n");
	}
	else
		{
			strcat(jasm, "\t\tinvokevirtual void java.io.PrintStream.print(java.lang.String)\n");
		}
		is_print=0;
	} ';'
	| PRINTLN {	
		is_print = 1;
		strcat(jasm, "\t\tgetstatic java.io.PrintStream java.lang.System.out\n");}
	expression 
	{
		if(is_print==2)
		{
			strcat(jasm,"\t\tinvokevirtual void java.io.PrintStream.println(java.lang.String)\n");
		}
		else{
			strcat(jasm,"\t\tinvokevirtual void java.io.PrintStream.println(java.lang.String)\n");
		}
		is_print=0;
	}
	';'
	| RETURN ';'
	| RETURN expression  ';'
		{
			strcat(jasm, $2);
			strcat(jasm, "\t\tireturn\n");
		}
	;

/*
simple_statment
: IDENTIFIER '[' INTEGER ']' '=' expression
| declaration
| PRINT
{
	is_print = 1;
	strcat(jasm, "\n\t\tgetstatic java.io.PrintStream java.lang.System.out\n");
}
 expression
{
	if (is_print == 2)
	{
		strcat(jasm, "\t\tinvokevirtual void java.io.PrintStream.print(int)\n");
	}
	else{
		strcat(jasm, "\t\tinvokevirtual void java.io.PrintStream.print(java.lang.String)\n");
	}
	is_print = 0;
}
| PRINTLN 
{
	is_print = 1;
	strcat(jasm, "\t\tgetstatic java.io.PrintStream java.lang.System.out\n");
} 
expression
{
	if (is_print == 2)
	{
		strcat(jasm, "\t\tinvokevirtual void java.io.PrintStream.println(int)\n");
	}
	else{
		strcat(jasm, "\t\tinvokevirtual void java.io.PrintStream.println(java.lang.String)\n");
	}
	is_print = 0;
	
}
| RETURN
| RETURN expression
{
	strcat(jasm, $2);
	strcat(jasm, "\t\tireturn\n");
}
;
*/
compound_start
: '{'
{
	itemDepth++;
}
;

compound_end
: '}'
{
	itemDepth--;
}
;


declaration
	: LET {is_assigning = 1;} IDENTIFIER '=' value_declaration {

		insert($3, "const" , $5);
		is_assigning = 0;
	}
	| LET IDENTIFIER {is_assigning=1;}':'type_specifier'='value_declaration ';'{
		insert($2,$5,$7);
		//let a:int;
	}
	| LET MUT IDENTIFIER ';'
	{
		is_assigning=1;

		
		insert($3,"interger","0");
		if (lookup($3, 0) >= 0)
		{
			// global variable
			strcat(jasm, "\tfield static ");
			strcat(jasm, "int");
			strcat(jasm, " ");
			strcat(jasm, $3);
			strcat(jasm, "\n");
		}
		is_assigning=0;

	}
	| LET MUT IDENTIFIER '=' value_declaration ';'
	{
		//let mut a=9;
		is_assigning = 1;
		insert($3,"",$5);
		if (lookup($3, 0) >= 0)
		{
			// global variable
			strcat(jasm, "\tfield static ");
			strcat(jasm, "int");
			strcat(jasm, " ");
			strcat(jasm, $3);
			strcat(jasm,"=");
			strcat(jasm,$5);
			strcat(jasm, "\n");
		}
		is_assigning = 0;
	}
	| LET MUT IDENTIFIER ':'type_specifier {
		//let mut a:int;
		is_assigning = 1;
		insert($3, $5, "");
		if (lookup($3, 0) >= 0)
		{
			// global variable
			strcat(jasm, "\tfield static ");
			strcat(jasm, $5);
			strcat(jasm, " ");
			strcat(jasm, $3);
			strcat(jasm, "\n");
		}
		is_assigning = 0;
	}
	| LET MUT IDENTIFIER ':' type_specifier {is_assigning = 1;} '=' value_declaration {
		//let mut a:int =10;
		is_assigning = 1;
		insert($3, $5, "");
		if (lookup($3, 0) >= 0)
		{
			// global variable
			strcat(jasm, "\tfield static ");
			strcat(jasm, $5);
			strcat(jasm, " ");
			strcat(jasm, $3);
			strcat(jasm, " = ");
			strcat(jasm, $8);
			strcat(jasm, "\n");
		}
		is_assigning = 0;
	}

	| LET MUT IDENTIFIER'['type_specifier','value_declaration']' ';'{
		insert($3,"array",$5);
	}
	;
	
declaration_list
: declaration
| declaration_list declaration
;

compound_statement
:  {strcat(jasm, "\tLbody:\n");strcat(jasm, "\t\tgoto Lpost\n");strcat(jasm, "\tLexit:\n");itemDepth--;}  
| {strcat(jasm, "\tLbody:\n");} statement_list {strcat(jasm, "\t\tgoto Lpost\n");strcat(jasm, "\tLexit:\n");itemDepth--;}  
;

expression_statement
:  expression
;

If_After_Check:
{
	strcat(jasm, " \tL0\n");
	strcat(jasm, "\t\ticonst_0\n");
	strcat(jasm, "\t\tgoto Lfalse\n");
	strcat(jasm, "\tL0:\n");
	strcat(jasm, "\t\ticonst_1\n");
	strcat(jasm, "\tL1:\n");
	strcat(jasm, "\t\tifeq L2\n");
}
;

If_After_Ltrue:
{
	strcat(jasm, "\t\tgoto L3\n");
	strcat(jasm, "\tL2:");
};

selection_statement
: IF '('  expression If_After_Check ')'  '{'  statement_list  '}' If_After_Ltrue ELSE '{'  statement_list  '}' {strcat(jasm, "\tL3:\n");}  
;

iteration_statement
:  FOR  '('   relational_expression 
{
	// move the chars of relational_expression 
	int i, len;
	int pos = 0;
	for (i = 0; i < strlen(jasm) ; ++i)
	{
		if (jasm[i] == '{')
		{
			pos = i;
		}
	}
	len = strlen("\n\tLtest:");
	 for( i = strlen(jasm); i >= pos ; i-- ) 
    {
        jasm[i+len]=jasm[i];
    }
    // insert "Ltest:"
	strncpy( &jasm[pos+1], "\n\tLtest:", len ); 

	strcat(jasm, " Ltrue\n");
	strcat(jasm, "\t\ticonst_0\n");
	strcat(jasm, "\t\tgoto Lfalse\n");
	strcat(jasm, "\tLtrue:\n");
	strcat(jasm, "\t\ticonst_1\n");
	strcat(jasm, "\tLfalse:\n");
	strcat(jasm, "\t\tifeq Lexit\n");
	strcat(jasm, "\t\tgoto Lbody\n");
} 
';'
{
	strcat(jasm, "\tLpost:\n");
}
  assignment_expression {strcat(jasm, "\t\tgoto Ltest\n");} ')'  '{' compound_statement  '}'

|
FOR  '('  assignment_expression ';' {strcat(jasm, "\tLtest:\n");} relational_expression 
{
	strcat(jasm, " Ltrue\n");
	strcat(jasm, "\t\ticonst_0\n");
	strcat(jasm, "\t\tgoto Lfalse\n");
	strcat(jasm, "\tLtrue:\n");
	strcat(jasm, "\t\ticonst_1\n");
	strcat(jasm, "\tLfalse:\n");
	strcat(jasm, "\t\tifeq Lexit\n");
	strcat(jasm, "\t\tgoto Lbody\n");

	strcat(jasm, "\tLpost:\n");
	strcat(jasm, "\t\tgoto Ltest\n");}
 ')' 
 '{'  compound_statement '}'

;


statement_list
: statement
| statement_list statement
;

statement
: simple_statment
| expression_statement
| selection_statement
| iteration_statement
;

func_expression:
	FN {
	itemDepth = 0;

	};
add_main_func_first:
{
	strcat(jasm, "\tmethod public static void main(java.lang.String[])\n\tmax_stack 15\n\tmax_locals 15\n\t{\n");
};

function_definition:
	func_expression IDENTIFIER '('{memset(temp_parameter,0,strlen(temp_parameter));now_fun_index++;function_index++;}parameter_list')'  OP_LE type_specifier
	{
		insert($2,$8,"");

		strcat(jasm, "\tmethod public static ");
		strcat(jasm, $2);
		strcat(jasm, " ");
		strcat(jasm, $8);
		strcat(jasm, "(");

		for (int i = 0; i < sizeof(temp_parameter)/sizeof(temp_parameter[0]); ++i)
		{
			if (temp_parameter[i] == 0)
			{
				temp_parameter[i-1] = '\0';
				break;
			}
		}
		
		strcat(jasm, temp_parameter);
		strcat(jasm, ")\n");
		strcat(jasm, "\tmax_stack 15\n\tmax_locals 15\n\t{\n");
	} 
	'{'statement_list '}'{
	 	strcat(jasm, "\t}\n");
	 	now_fun_index--;
 	}
 	| func_expression  IDENTIFIER '('')' {insert($2,"","");now_fun_index++;} add_main_func_first  compound_start  statement_list  compound_end 
	 {
	 	if (strcmp($2,"main")==0)
	 	{
	 		strcat(jasm,"\t\treturn\n\t}\n");
	 		/* code */
	 	}
	 	now_fun_index--;
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
	/*isShouldAdd = 0;
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
  	int a=0;
  	if(statment_number==0)
  	{
  		printf("statment_number wrong\n");
  	}
  	return 0;*/
	itemDepth = 0;
	hashArray = create();

	strcat(jasm, "class rust_test\n{\n ");
	yyparse();

	printf("\n\n%s\n", "------ Symbol Table: ------");
	printf("%-*s:%-*s%-*s%-*s%-*s%-*s\n", 5, "Index:", 15, "Name", 15, "Type", 20, "Value", 15, "Fun_index", 5, "Depth");
	dump();

	printf("\n\n%s\n", "------ Write Java Assembly Code Into rust_test.jasm ------");
	strcat(jasm, "}\n");
	
	FILE *fpt;
	char file_name[100];
	fpt = fopen("rust_test.jasm", "w"); 
	fprintf(fpt, jasm);
	fclose(fpt);

	char command[100] = "";
	printf("\n\n%s\n", "------ Convert rust_test.jasm To rust_test.class By javaa program------");
	strcat(command, "./javaa rust_test.jasm");
	printf("%s%s\n\n", "Execute linux command1: ", command);
	system(command);

	// clear the command string 
	memset(command, '\0', sizeof(command)-1);

	printf("\n\n%s\n", "------ Result After Run rust_test.class ------");
	strcat(command, "java rust_test");
	printf("%s%s\n\n", "Execute linux command2: ", command);
	system(command);
	return 0;
}







