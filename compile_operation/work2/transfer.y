%{
	#include<ctype.h>
	#include<stdio.h>
	%}
%token NUMBER

%left '+' '-'
%left '*' '/'
%right UNINUS
%%

lines	:	lines expr '\n'	{printf("%g\n",$2 );}
		|	lines '\n'
		|
		|error '\n'	{yyerror("reenter previous line:");}
		;
expr	:	expr'+'expr	{$$=$1+$3;}
		|	expr'-'expr	{$$=$1-$3;}
		|	expr'*'expr	{$$=$1*$3;}
		|	expr'/'expr	{$$=$1/$3;}
		|	'('expr')'	{$$=$2;}
		|	'-'expr	%prec	UNINUS	{$$=-$2;}
		|	NUMBER
		;
%%