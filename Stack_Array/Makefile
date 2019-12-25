CC=gcc
CFLAGS=-c -Wall

# GNU Makefile for stack usng array
# 'make run' will run the stack application
# 'make all' will just compile all the files
# 'make clean' will remove the precompiled files

run:	stack
	./stack

all:	stack

stack:	stack.o push.o pop.o size.o showTop.o
	$(CC) stack.o push.o pop.o size.o showTop.o -o stack

push.o:	push.c
	$(CC) $(CFLAGS) push.c

pop.o:	pop.c
	$(CC) $(CFLAGS) pop.c

size.o:	size.c
	$(CC) $(CFLAGS) size.c

showTop.o:	showTop.c
		$(CC) $(CFLAGS) showTop.c

clean:
	rm -rf *.o stack
	
