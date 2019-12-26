#ifndef _STACK_LL_H_
#define _STACK_LL_H_

struct stack
{
	int data;
	struct stack *next;
}*top;

int size;
#define CAPACITY 100

//Functions
void push(int data);
int pop();

#endif
