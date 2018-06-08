a.out:y.tab.c lex.yy.c
	 gcc y.tab.c lex.yy.c -ll -ly
y.tab.h y.tab.c: yacc.y
	 bison -y -d yacc.y
lex.yy.c:scaner.l
	flex scaner.l

clean:
	rm -f *.o lex.yy.c y.tab.c y.tab.h *.out  *.jasm