all: codea

scanner.c: oxout.l
	flex -oscanner.c oxout.l 

scanner.o: scanner.c parser.h list.h tree.h
	gcc -g -c -ansi -pedantic -Wall scanner.c -D_GNU_SOURCE

codea: parser.o list.o code.o assembler.o tree.o scanner.o
	gcc -o codea list.o parser.o assembler.o tree.o code.o scanner.o -lfl

list.o: list.c list.h
	gcc -g -c -ansi -pedantic -Wall list.c -D_GNU_SOURCE
	
tree.o: tree.c tree.h
	gcc -g -c -ansi -pedantic -Wall tree.c -D_GNU_SOURCE
	
assembler.o: assembler.c assembler.h
	gcc -g -c -ansi -pedantic -Wall assembler.c

parser.o: parser.c parser.h list.h
	gcc -g -c -ansi -pedantic parser.c
	
parser.c parser.h: oxout.y
	yacc -d oxout.y -o parser.c

oxout.y oxout.l: codea.y codea.flex
	ox codea.y codea.flex
	
code.o: code.c tree.h
	gcc -g -c -ansi -pedantic -Wall code.c -D_GNU_SOURCE

code.c: code.bfe
	bfe < code.bfe | iburg > code.c

clean:
	rm -f codea *.o oxout.* lex.yy.c code.c parser.c parser.h scanner.c

