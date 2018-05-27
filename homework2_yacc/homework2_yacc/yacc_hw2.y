%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "y.tab.h"
#include "hashtable.h"
// #include "hashtable_insert.h"
int  yylex  (void);
void  yyerror  (const char *str);

%}
%start program
%union{
  char val[200];
  float float_type;
  int int_type;
  char int_id[200];
}

%token <val> STR TRUE FALSE BOOL INT VOID FLOAT
%token <int_type> INTEGER
%token BREAK CONTINUE DEFAULT ELSE MATCH MUT CHAR ENUM 
%token RETURN SELF USE STATIC STRUCT SWITCH 
%token FOR FUNC DO IF IN PRINT PRINTLN EXTERN LET LOOP PUB READ
%token LE_OP GE_OP EQ_OP NE_OP AND OR NOR EQUALS FU_OP WHILE WHERE
%token ADD_ASSIGN SUB_ASSIGN MUL_ASSIGN DIV_ASSIGN
%type  <val> value_declaration program primary_expression type_specifier declarator_list declarator
%token <int_id> IDENTIFIER
%token <float_type> FLOATTYPE


%%

primary_expression
  : value_declaration
  | declarator_list 
  | primary_expression value_declaration 
  | primary_expression declarator_list
  ;

unary_expression
  : primary_expression
  | '-' primary_expression
  ;

multiplicative_expression
  : unary_expression
  | multiplicative_expression '*' unary_expression
  | multiplicative_expression '/' unary_expression
  | multiplicative_expression '%' unary_expression
  ;

additive_expression
  : multiplicative_expression
  | additive_expression '+' multiplicative_expression
  | additive_expression '-' multiplicative_expression
  ;


relational_expression
  : additive_expression
  | relational_expression '<' primary_expression
  | relational_expression '>' primary_expression
  | relational_expression LE_OP primary_expression
  | relational_expression GE_OP primary_expression
  ;

equality_expression
  : relational_expression
  | equality_expression EQ_OP relational_expression
  | equality_expression NE_OP relational_expression
  ;

and_expression
  : equality_expression
  | and_expression AND equality_expression
  ;

exclusive_or_expression
  : and_expression
  | exclusive_or_expression '^' and_expression
  ;

inclusive_or_expression
  : exclusive_or_expression
  | inclusive_or_expression OR exclusive_or_expression
  ;

assignment_expression
  : inclusive_or_expression
  | inclusive_or_expression '=' assignment_expression
  ;

expression
  : assignment_expression
  | expression assignment_expression
  | '(' assignment_expression')' 
  ;


type_specifier
  : BOOL
  | INT
  | VOID
  | STR
  ;

value_declaration
  : STR   {
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
  | FLOATTYPE
  {
    char tempStr[50];
    sprintf( tempStr, "%g", $1 );
    strcpy($$, tempStr);
  }
  ;

// when function be called
declarator_list
  : declarator
  | declarator_list '(' declarator_list ')' 
  | declarator_list ',' declarator_list
  ;

declarator
  : IDENTIFIER  
  | value_declaration 
  ;

// when funtion be defined
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

declaration_list
  : declaration
  | declaration_list declaration
  ;

declaration
  : LET IDENTIFIER '=' value_declaration ';'{
    insert($2 , "const" , $4 );
  }
  | LET MUT IDENTIFIER ';'{
    insert( $3, "int", "" );
  }
  | LET MUT IDENTIFIER ':' type_specifier ';'{
    insert($3 , $5 , "" );
  }
  | LET MUT IDENTIFIER '=' value_declaration ';'{
    insert($3 , "" , $5 );
  }
  | LET IDENTIFIER ':' type_specifier '=' value_declaration ';' {
    insert($2 , $4 , $6 );
  }
  | LET MUT IDENTIFIER ':' type_specifier '=' value_declaration ';'{
    insert($3 , $5 , $7 );
  }
  
  ;

  simple_statment
  : IDENTIFIER '=' expression ';'
  | IDENTIFIER '=' declaration_list ';'
  | PRINT expression ';'
  | PRINTLN expression ';' 
  | READ IDENTIFIER 
  | RETURN ';'
  | RETURN expression ';'
  ;

compound_start
  : '{'
  {
    if (check == 1)
    {
      itemDepth++;
    }
    else{
      check++;
    }
  }
  ;

compound_end
  : '}'
  {
    itemDepth--;
  }
  ;

compound_statement
  : compound_start statement_list compound_end
  | compound_start declaration_list compound_end
  | compound_start declaration_list statement_list compound_end
  | compound_start compound_end
  ;

expression_statement
  :  expression 
  ;

selection_statement
  : IF '(' expression ')' statement
  | IF '(' expression ')' statement ELSE statement
  ;

iteration_statement
  : FOR '(' expression_statement ')' statement
  | FOR '(' expression_statement ";" expression_statement ')' statement
  | FOR '(' expression_statement ";"  expression_statement ";"  expression_statement ')' statement
  ;

// jump_statement
//   : GO IDENTIFIER '(' expression_statement ')'
//   ;

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
  ;

func_expression:
  FUNC {
    check = 0;
    itemDepth++;
  };

function_definition 
  : func_expression  IDENTIFIER '('   ')' compound_statement 
  {
    insert($2, "", "");
  }
  | func_expression  IDENTIFIER '(' parameter_list ')' FU_OP type_specifier compound_statement 
  {
    insert($2, $7, "");
  }
  | func_expression  IDENTIFIER '(' ')' FU_OP type_specifier compound_statement 
  {
    insert($2, $6, "");
  }
  | func_expression  IDENTIFIER '(' parameter_list ')' compound_statement 
  {
    insert($2, "", "");
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
  // check = 0;
  // itemDepth = 0;
  // hashArray= create();
  // hash_table_init();
  hash_table = create();
  yyparse();
  printf( "Symbol Table\n" );
  printf( "Id          Type      Value     Scope\n" );
  dump();
  return(0);
  // hash_table_print();
  // lookup("add");
}

//   printf("%s\n", "------Test Lookup In example.go:------");
//   printf("%-*s%-*s\n", 20 ,"Name" ,10 , "Depth");
//   if (lookup("a" , 0) >= 0 && lookup("a" , 1) >= 0)
//   {
//     printf("%-*s%-*d\n", 20 ,hashArray[lookup("a" , 0)]->idName ,5 , hashArray[lookup("a" , 0)]->depth);
//     printf("%-*s%-*d\n", 20 ,hashArray[lookup("a" , 1)]->idName ,5 , hashArray[lookup("a" , 1)]->depth);
//   }
    
//     printf("\n\n%s\n", "------Symbol Table:------");
//     printf("%-*s%-*s\n", 20 ,"Name" ,10 , "Depth");
//     printf("%-*s:%-*s%-*s%-*s%-*d\n", 5, "Index:", 20, "Name", 15, "Type", 30, "Value", 5, "Depth");
//     dump();
//     return 0;
// }
