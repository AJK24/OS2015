CC=gcc
CFLAGS=-c -Wall

all:hello

hello: main.o fibonacci.o hello.o
	$(CC) main.o fibonacci.o hello.o -o hello
main.o: main.c
	$(CC) $(CFLAGS) main.c
fibonacci.o : fibonacci.c
	$(CC) $(CFLAGS) fibonacci.c
hello.o:hello.c
	$(CC) $(CFLAGS) hello.c
clean:
	rm -rf *.o hello
