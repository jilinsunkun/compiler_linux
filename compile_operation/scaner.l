%{
#include <stdio.h>
#include<ctype.h>
#include "HashTable.h"
#define MAX_LINE_LENG 256
#define lineNum     		strcat(buf,yytext)
#define token(t)		{lineNum; printf("<'%s'>\n",t);}
#define captial(t) 		{for(int i = 0; i < strlen(t); i++){t[i] = toupper(t[i]);};printf("<%s>\n", t); }
#define keyword(t) 		{lineNum; captial(t)}
#define tokenInteger	{lineNum; printf("<%s:%s>\n","tokeninteger",yytext);}
#define tokenReal 		{lineNum; printf("<%s:%s>\n","tokenreal", yytext);}
#define tokenBoolean 	{lineNum; printf("<%s:%s>\n","tokenboolean",yytext);}
#define tokenId			{lineNum; printf("<%s:%s>\n","tokenid",yytext);}
#define tokenString(t,s){lineNum; printf("<%s:%s>\n","tokenstring",s);}

int linecount = 1;
char buf[MAX_LINE_LENG];
char str[512];
int num = 0;

char *itoa(int num,char *str,int radix){//num：int型原数,str:需转换成的string，radix,原进制， 
     
    /* 索引表 */
    char index[]="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    unsigned unum;/* 中间变量 */
    int i=0,j,k;
     
    /* 确定unum的值 */
    if(radix==10&&num<0){/* 十进制负数 */
        unum=(unsigned)-num;
        str[i++]='-';
    }else
        unum=(unsigned)num;/* 其他情况 */
    /* 逆序 */
    do{
        str[i++]=index[unum%(unsigned)radix];
        unum/=radix;
    }while(unum);
 
    str[i]='\0';
    /* 转换 */
    if(str[0]=='-')
        k=1;/* 十进制负数 */
    else
        k=0;
    /* 将原来的“/2”改为“/2.0”，保证当num在16~255之间，radix等于16时，也能得到正确结果 */
    for(j=k;j<(i-1)/2.0+k;j++){
        num=str[j];
        str[j]=str[i-j-1+k];
        str[i-j-1+k]=num;
    }
    return str;
}
void insert(char* token)
{
	char buf[32];
	install(token, itoa(num, buf, 10));
	num++;
}
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
"++"	{token("++");}
"--"	{token("--");}
"%"	{token("%");}
"<"	{token("<");}
">"	{token(">");}
"<="	{token("<=");}
">="	{token(">=");}
"!="	{token("!=");}
"&&"	{token("&&");}
"||"	{token("||");}
"!"	{token("!");}
"+="	{token("+=");}
"-="	{token("-=");}
"*="	{token("*=");}
"/="	{token("/=");}


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
int main(){
		    inithashtab();
			yylex();
			cleanup();//equal to dorm
		}
int yywrap()
{
	return 1;		
}