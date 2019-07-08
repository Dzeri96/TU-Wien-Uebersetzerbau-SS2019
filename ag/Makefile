.PHONYY: all clean

all: ag

oxout.y oxout.l: parser.y ex5.lex
	ox parser.y ex5.lex

y.tab.c y.tab.h: oxout.y
	yacc -d oxout.y

y.tab.o: y.tab.c
	gcc -c y.tab.c

lex.yy.o: lex.yy.c y.tab.h list.h
	gcc -c lex.yy.c

ag: lex.yy.o y.tab.o list.o
	gcc -o ag y.tab.o lex.yy.o list.o -lfl

lex.yy.c: oxout.l
	flex oxout.l

list.o: list.c list.h
	gcc -c list.c
clean:
	rm -f parser y.tab.* *.o lex.yy.c oxout.* y.output ag 
