%{
#include "y.tab.h"
	extern int yylex();
	extern int yyerorr(char *);
%}

number	[0-9]+\.?|[0-9]*\.[0-9]+
%%
[ ]	{	}
{number}	{sscanf(yytext,"%lf",&yylval);	
			return NUMBER;}
\n|.	{return yytext[0];}
%%
int main(){
	yylex();
}
int yywrap()
{
	return 1;
}