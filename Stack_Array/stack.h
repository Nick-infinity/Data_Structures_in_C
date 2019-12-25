#ifndef _STACK_H_
#define _STACK_H_

#define SIZE 100
extern int top; // definitions only in header files & no decalration
				// else we get duplicate decalation error while compilation
int stack[SIZE];

// functions for stack
int pop();
void push(int data);
int size();
int showTop();

#endif