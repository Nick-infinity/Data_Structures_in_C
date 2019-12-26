# GNU Makefie for easy compilation of Queue app
# 'make clean && make run'

CC=gcc
CFLAGS=-c -Wall

run: all
	./queue

all: queue
	
queue: queue.o enqueue.o dequeue.o display.o peak.o
	$(CC) queue.o enqueue.o dequeue.o display.o peak.o -o queue

queue.o: queue.c
	$(CC) $(CFLAGS) queue.c

enqueue.o: enqueue.c
	$(CC) $(CFLAGS) enqueue.c

dequeue.o: dequeue.c
	$(CC) $(CFLAGS) dequeue.c

display.o: display.c
	$(CC) $(CFLAGS) display.c

peak.o: peak.c
	$(CC) $(CFLAGS) peak.c

clean:
	rm -rf *.o queue 
