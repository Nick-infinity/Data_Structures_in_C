# GNU Makefile to run the program #
# 'make clean && make run' will run the application
# 'make clean' to remove precompiled files

CC=gcc
CFLAGS=-c  -Wall

run: stack_ll
	./stack_ll

all: stack_ll

stack_ll: stack_ll.o push_ll.o pop_ll.o
	$(CC) stack_ll.o push_ll.o pop_ll.o -o stack_ll

stack_ll.o: stack_ll.c
	$(CC) $(CFLAGS) stack_ll.c

push_ll.o: push_ll.c
	$(CC) $(CFLAGS) push_ll.c

pop_ll.o: pop_ll.c
	$(CC) $(CFLAGS) pop_ll.c

clean:
	rm -rf *.o stack_ll
