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

%type  <val> val_delecation program pre_expression type_specifier Delector_list declarator expression assignment_expression inclusive_or_expression and_expression  EQU_express re_expression additive_expression multp_expression
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
	{
		int is_found_ident = 0;
		int tempdepth = depth;
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
				strcat(jasm, "\t\tgetstatic int go_test.");
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
func_expression:
	FN {
		isShouldAdd = 0;
		depth++;
	};
function_definition:
	func_expression IDENTIFIER '(' parameter_list ')' OP_LE type_specifier
	{	
		memset(temp_parameter,0,strlen(temp_parameter)); 
		now_fun_index++; 
		function_index++;
		insert($2,$7,"");
		strcat (jasm,"\tmethod public static ");
		strcat (jasm,$2);
		strcat (jasm," ");
		strcat (jasm,$2);
		strcat(jasm,"(");
	
		for (int i = 0; i < sizeof(temp_parameter)/sizeof(temp_parameter[0]); ++i)
			{
				if (temp_parameter[i] == 0)
				{
					temp_parameter[i-1] = '\0';
					break;
				}
			}
		strcat(jasm,temp_parameter);
		strcat(jasm,")\n");
		strcat(jasm,"\tmax_stack 15\n\tmax_locals 15\n\t{\n");
	}
	'{' statement_list '}'
	{ 
		strcat (jasm,"\t}\n");
		now_fun_index--;
	}
	| func_expression  IDENTIFIER '('')' 
	{insert($2,"","");now_fun_index++;}
	 add_main_func_first  block_start  statement_list  block_end 
	 {
	 	if (strcmp($2,"main")==0)
	 	{
	 		strcat(jasm,"\t\treturn\n\t}\n");
	 		/* code */
	 	}
	 	now_fun_index--;
	 }
	
	/*:func_expression IDENTIFIER '('parameter_list')'  OP_LE type_specifier block_stament
	{
		insert($2,$7,"");
	}*/
	/*|func_expression IDENTIFIER '(' parameter_list ')' block_stament 
	{
		insert($2, "", "");
	}
	|func_expression IDENTIFIER '('  ')'  OP_LE type_specifier block_stament
	{
		insert($2, $6, "");
	}
	| func_expression IDENTIFIER '('  ')'   block_stament
	{
		insert($2, "", "");
	}*/
	;
val_delecation
	: STR   {
		strcat(jasm, "\t\tldc ");
		strcat(jasm, "\"");
		strcat(jasm, $1);
		strcat(jasm, "\"");
		strcat(jasm, "\n");
	}
	| TRUE {
		strcpy($$, $1);
	}
	| FALSE {
		strcpy($$, $1);
	}
	| INTEGER 
	{
		char tempStr[50];
		sprintf( tempStr, "%d", $1 );

		if (is_assigning == 0)
		{
			if (is_print != 1)
			{
				strcat(jasm, "\t\tsipush ");
				strcat(jasm, tempStr);
				strcat(jasm, "\n");
			}
		}
		else{
			strcpy($$, tempStr);
		}
	}
	| REALCONSTANTS 
	{
		
		char tempStr[50];
		sprintf( tempStr, "%g", $1 );
		strcpy($$, tempStr);
	};

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
	
block_stament
		//: block_start statement_list block_end
		// | block_start declaration_list block_end
		// | block_start declaration_list statement_list block_end
		// | block_start block_end
	:|  {strcat(jasm, "\tLbody:\n");strcat(jasm, "\t\tgoto Lpost\n");strcat(jasm, "\tLexit:\n");depth--;}  
	| {strcat(jasm, "\tLbody:\n");} statement_list {strcat(jasm, "\t\tgoto Lpost\n");strcat(jasm, "\tLexit:\n");depth--;}  
	;
	
block_end
	: '}'
	{
		depth--;
	}
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
statement_list
	: statement
	{
		statment_number=statment_number+1;
	}
	| statement_list statement
	;
iteration_statement
	: FOR '(' expression_sta ')' statement
	| FOR '(' expression_sta ";" expression_sta ')' statement
	| FOR '(' expression_sta ";"  expression_sta ";"  expression_sta ')' statement
	;


statement
	: simple_statment
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


declaration_list
	: declaration 
	| declaration_list declaration 
	;

declaration
	: LET IDENTIFIER '=' val_delecation ';'{
		insert($2, "const" , $4);
		is_assigning=0;

	}
	| LET IDENTIFIER ':'type_specifier'='val_delecation ';'{
		insert($2,$4,$6);
	}
	| LET MUT IDENTIFIER '=' val_delecation ';'{
		insert($3,"",$5);
		printf("%s\n",$3 );
		if(lookup($3,0)>=0)
		{
			is_assigning=1;
			strcat(jasm,"\tfiled static");
			strcat(jasm,$5);
			strcat(jasm," ");
			strcat(jasm,$3);
			strcat(jasm," = ");
			strcat(jasm,$5);
			strcat(jasm,"\n");
		}
	}
	| LET MUT IDENTIFIER ':'type_specifier'='val_delecation ';'{
		insert($3,$5,"");
		if(lookup($3,0)>=0)
		{
			is_assigning=1;
			strcat(jasm,"\tfiled static");
			strcat(jasm,$5);
			strcat(jasm," ");
			strcat(jasm,$3);
			strcat(jasm," = ");
			strcat(jasm,$7);
			strcat(jasm,"\n");
		}
		is_assigning=0;
	}
	| LET MUT IDENTIFIER'['type_specifier','val_delecation']' ';'{
		insert($3,"array",$5);
	}
	| LET MUT IDENTIFIER ';'{
    	insert( $3, "int", "" );
    	if(lookup($3,0)>=0)
    	{
    		strcat(jasm,"\tfiled static");
    		strcat(jasm,"interger");
    		strcat(jasm," ");
    		strcat(jasm,$3);
    		strcat(jasm,"\n");
    	}
	}
	| LET MUT IDENTIFIER ':' type_specifier ';'{
    	insert($3 , $5 , "" );
    	//global variable
    	if(lookup($3,0)>=0)
		{
			strcat(jasm,"\tfiled static ");
			strcat(jasm,$5);
			strcat(jasm, " ");
			strcat(jasm,$3);
			strcat(jasm,"\n");
		}
		is_assigning=0;
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
  		depth = 0;
		hashArray = create();

		strcat(jasm, "class go_test\n{\n ");
		yyparse();

		printf("\n\n%s\n", "------ Symbol Table: ------");
		printf("%-*s:%-*s%-*s%-*s%-*s%-*s\n", 5, "Index:", 15, "Name", 15, "Type", 20, "Value", 15, "Fun_index", 5, "Depth");
		dump();

		printf("\n\n%s\n", "------ Write Java Assembly Code Into go_test.jasm ------");
		strcat(jasm, "}\n");
		
		FILE *fpt;
		char file_name[100];
		fpt = fopen("go_test.jasm", "w"); 
		fprintf(fpt, jasm);
		fclose(fpt);

		char command[100] = "";
		printf("\n\n%s\n", "------ Convert go_test.jasm To go_test.class By javaa program------");
		strcat(command, "./javaa go_test.jasm");
		printf("%s%s\n\n", "Execute linux command1: ", command);
		system(command);

		// clear the command string 
		memset(command, '\0', sizeof(command)-1);

		printf("\n\n%s\n", "------ Result After Run go_test.class ------");
		strcat(command, "java go_test");
		printf("%s%s\n\n", "Execute linux command2: ", command);
		system(command);
		return 0;
}







