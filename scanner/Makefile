.PHONYY: all clean

all: scanner

scanner: lex.yy.c
	gcc -o scanner lex.yy.c -lfl

lex.yy.c: ex3.lex
	flex ex3.lex

clean:
	rm -f scanner lex.yy.c
