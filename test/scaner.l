%{
#include <stdio.h>
#include <stdlib.h>
#include "y.tab.h"
%}
%%
[0-9]+ {
 yylval.var_value = atoi(yytext);
 return NUMBER;
 }
[a-z] {
 yylval.var_number = yytext[0] - 'a';
 return NAME;
 }
'$' return 0;
[ \t] ;
\n return '\n';
. return yytext[0];
%%