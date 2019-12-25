#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
void push(int data)
{
	if(top>= SIZE)  // Check for overflow
	{
		printf("\nStack overflow!");
		exit(0);
	}
	else
	{
		stack[++top] = data; // Increament top by 1 then push the element at new top
		printf("\nData %d pushed to stack at position %d",data,top);
	}
}