%{
#include <stdio.h>
#include<ctype.h>

#define MAX_LINE_LENG 256
#define lineNum     		strcat(buf,yytext)
#define token(t)		{lineNum; printf("<'%s'>\n",t);return t;}
#define captial(t) 		{for(int i = 0; i < strlen(t); i++){t[i] = toupper(t[i]);};printf("<%s>\n", t); }
#define keyword(t) 		{ captial(t) ;strcpy(yylval.val, yytext);return t;}

#define tokenoperation(t)	{strcpy(yylval.val, yytext); printf("<'%s'>\n",t);return t;}

#define tokenInteger	{yylval.int_type = atoi(yytext);return (INTEGER);}
#define tokenReal 		{sscanf(yytext, "%lf", &yylval.double_type);return (REALCONSTANTS);}
#define tokenBoolean 	{lineNum; printf("<%s:%s>\n","tokenboolean",yytext);}
#define tokenId			{strcpy(yylval.val, yytext);return (IDENTIFIER);}
#define tokenString(t,s){lineNum; printf("<%s:%s>\n","tokenstring",s);}
#include"y.tab.h"
int linecount = 1;
char buf[MAX_LINE_LENG];
char str[512];


%}
%x	String
%x 	commion
%x  Commionex
digit      [0-9]
integer      {digit}+
real         -?(([0-9]+)([0-9]*\.[0-9]+)([eE][-+]?[0-9]+)?)
letter       [a-zA-Z]
id           {letter}({letter}|{digit})*
whitespace   [ \t]+


%%
"("	{token("(");}
")"	{token(")");}
","	{token(",");}
":"	{token(":");}
";"	{token(";");}
"["	{token("[");}
"]"	{token("]");}
"{"	{token("}");}
"+"	{token("+");}
"-"	{token("-");}
"*"	{token("*");}
"/"	{token("/");}
"%"	{token("%");}
"<"	{token("<");}
">"	{token(">");}
"!"	{token("!");}

"++"	{strcpy(yylval.val, yytext);return (ADD_ADD);}
"--"	{strcpy(yylval.val, yytext);return (LES_LES);}
"<="	{strcpy(yylval.val, yytext);return (LE_OP);}
">="	{strcpy(yylval.val, yytext);return (GE_OP);}
"!="	{strcpy(yylval.val, yytext);return (NE_OP);}
"&&"	{strcpy(yylval.val, yytext);return (AND_AND);}
"||"	{strcpy(yylval.val, yytext);return (OR_OR);}
"+="	{strcpy(yylval.val, yytext);return (ADD_OP);}
"-="	{strcpy(yylval.val, yytext);return (LES_OP);}
"*="	{strcpy(yylval.val, yytext);return (MUL_OP);}
"/="	{strcpy(yylval.val, yytext);return (DIV_OP);}

"let"	{strcpy(yylval.val, yytext);return (LET);}
"break"	{strcpy(yylval.val, yytext);return (BREAK);}
"char"	{strcpy(yylval.val, yytext);return (CHAR);}
"continue"	{strcpy(yylval.val, yytext);return (CONTINUE);}
"do"	{strcpy(yylval.val, yytext);return (DO);}
"else"	{strcpy(yylval.val, yytext);return (ELSE);}
"enum"	{strcpy(yylval.val, yytext);return (ENUM);}
"extern"	{strcpy(yylval.val, yytext);return (EXTERN);}
"false"	{strcpy(yylval.val, yytext);return (FALSE);}
"float"	{strcpy(yylval.val, yytext);return (FLOAT);}
"for"	{strcpy(yylval.val, yytext);return (FOR);}
"fn"	{strcpy(yylval.val, yytext);return (FN);}
"int"	{strcpy(yylval.val, yytext);return (INT);}
"if"	{strcpy(yylval.val, yytext);return (IF);}
"in"	{strcpy(yylval.val, yytext);return (IN);}

"loop"	{strcpy(yylval.val, yytext);return (LOOP);}
"match"	{strcpy(yylval.val, yytext);return (MATCH);}
"mut"	{strcpy(yylval.val, yytext);return (MUT);}
"print"	{strcpy(yylval.val, yytext);return (PRINT);}
"println"	{strcpy(yylval.val, yytext);return (PRINTLN);}
"pub"	{strcpy(yylval.val, yytext);return (PUB);}
"return"	{strcpy(yylval.val, yytext);return (RETURN);}
"self"	{strcpy(yylval.val, yytext);return (SELF);}
"static"	{strcpy(yylval.val, yytext);return (STATIC);}
"true"	{strcpy(yylval.val, yytext);return (TRUE);}
"where"	{strcpy(yylval.val, yytext);return (WHERE);}
"use"	{strcpy(yylval.val, yytext);return (USE);}
"while"	{strcpy(yylval.val, yytext);return (WHILE);}
"bool"	{strcpy(yylval.val, yytext);return (BOOL);}
{id}  		        {tokenId;}
{integer}     		{tokenInteger;}
{real}        		{tokenReal;}

"//"          		{
               		lineNum;
                	BEGIN Commionex;
            		  }
<Commionex>\n 	{
                      lineNum;
                      printf("%d: %s", linecount++, buf);
                      buf[0] = '\0';
                      BEGIN 0;
                    }
<Commionex>.    {
                      lineNum;
                    }
"/*"               {
                      lineNum;
                      BEGIN commion;
                    }
<commion>\n {
                      lineNum;
                      printf("%d: %s", linecount++, buf);
                      buf[0] = '\0';
                     	}
<commion>"*/"	{
                      		lineNum;
                      		BEGIN 0;
                    	}
<commion>.     {
                      		lineNum;
                    	}
\"          		{
              			lineNum;
              			BEGIN String;
              		}

<String>\" 		{
                    	char c = input();
                    	if(c=='\"')
                    {
                    	strcat(buf,"\"");
                    	strcat(str,yytext);
                    	lineNum;
                    }
                    	else
                    {
                    	tokenString("string",str);
                    	unput(c);
                    	str[0] = '\0';
                    	BEGIN 0;
                    }
                  	}
<String>.     	{
                      lineNum;
                      strcat(str,yytext);
                    }
                    
[ \t]*  			{lineNum;}
\n 			  		{
        			lineNum;
        			printf("%d: %s", linecount++, buf);
        			buf[0] = '\0';
        			}

%%






