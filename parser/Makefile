.PHONYY: all clean

all: parser

parser.tab.c parser.tab.h: parser.y
	bison -d parser.y

parser.tab.o: parser.tab.c
	gcc -c parser.tab.c

lex.yy.o: lex.yy.c
	gcc -c lex.yy.c

parser: lex.yy.o parser.tab.o
	gcc -o parser parser.tab.o lex.yy.o -lfl

lex.yy.c: ex4.lex parser.tab.h
	flex ex4.lex

clean:
	rm -f parser *.h *.o *.c
