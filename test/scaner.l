%{
#include <stdio.h>
#include<ctype.h>

#define MAX_LINE_LENG 256
#define lineNum     		strcat(buf,yytext)
#define token(t)		{lineNum; printf("<'%s'>\n",t);return t;}
#define captial(t) 		{for(int i = 0; i < strlen(t); i++){t[i] = toupper(t[i]);};printf("<%s>\n", t); }
#define keyword(t) 		{lineNum; captial(t) ;return t;}

#define tokenoperation(t)	{strcpy(yylval.val, yytext); printf("<'%s'>\n",t);return t;}

#define tokenInteger	{lineNum; printf("<%s:%s>\n","tokeninteger",yytext);}
#define tokenReal 		{lineNum; printf("<%s:%s>\n","tokenreal", yytext);}
#define tokenBoolean 	{lineNum; printf("<%s:%s>\n","tokenboolean",yytext);}
#define tokenId			{lineNum; printf("<%s:%s>\n","tokenid",yytext);}
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

"++"	{tokenoperation(ADD_ADD);}
"--"	{tokenoperation(LES_LES);}
"<="	{tokenoperation(LE_OP);}
">="	{tokenoperation(GE_OP);}
"!="	{tokenoperation(NE_OP);}
"&&"	{tokenoperation(AND_AND);}
"||"	{tokenoperation(OR_OR);}
"+="	{tokenoperation(ADD_OP);}
"-="	{tokenoperation(LES_OP);}
"*="	{tokenoperation(MUL_OP);}
"/="	{tokenoperation(DIV_OP);}


"break"	{keyword(yytext);}
"char"	{keyword(yytext);}
"continue"	{keyword(yytext);}
"do"	{keyword(yytext);}
"else"	{keyword(yytext);}
"enum"	{keyword(yytext);}
"extern"	{keyword(yytext);}
"false"	{keyword(yytext);}
"float"	{keyword(yytext);}
"for"	{keyword(yytext);}
"fn"	{keyword(yytext);}
"int"	{keyword(yytext);}
"if"	{keyword(yytext);}
"in"	{keyword(yytext);}
"let"	{keyword(yytext);}
"loop"	{keyword(yytext);}
"match"	{keyword(yytext);}
"mut"	{keyword(yytext);}
"print"	{keyword(yytext);}
"println"	{keyword(yytext);}
"pub"	{keyword(yytext);}
"return"	{keyword(yytext);}
"self"	{keyword(yytext);}
"static"	{keyword(yytext);}
"true"	{keyword(yytext);}
"where"	{keyword(yytext);}
"use"	{keyword(yytext);}
"while"	{keyword(yytext);}
"bool"	{tokenBoolean("BOOL");}
{id}  		{tokenId;}
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
