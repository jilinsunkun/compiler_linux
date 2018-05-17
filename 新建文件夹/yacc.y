%{
	#include <stdio.h>
	#include<stdlib.h>
	#include <ctype.h>
	#define YYSTYPE TreeNode *

%}

%union{
  char typeOF[200];
  char val[200];
  double double_type;
  int int_type;
  int int_val;
}
%token IF THEN ELSE END REPEAT READ WRITE
%token ID NUM
%token 






