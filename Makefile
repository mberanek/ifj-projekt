CFLAGS=-std=c99 -Wall -pedantic -g

ALL: scanner.o symtable.o interpret.o parser.o main.o
	gcc $(CFLAGS) -o  scanner.o symtable.o interpret.o parser.o main.o

scanner.o: scanner.c
	gcc $(CFLAGS) -c scanner.c

symtable.o: symtable.c
	gcc $(CFLAGS) -c sýmtable.c

parser.o: parser.c
	gcc $(CFLAGS) -c parser.c

interpret.o: interpret.c
	gcc $(CFLAGS) -c interpret.c

main.o: main.c
	gcc $(CFLAGS) -c main.c

clean:
	rm -f *.o
