// I am just a header file

#ifndef _QUEUE_H_
#define _QUEUE_H_
#define CAPACITY 100

int rear , front;
int queue[CAPACITY];

void enqueue(int data);
int dequeue();
void display();
int peak();  //Display the front element


#endif