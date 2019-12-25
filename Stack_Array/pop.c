#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
int pop()
{
	if(top<0)
	{
		printf("\nStack is empty!");
		return -1;
	}
	else
	{
		printf("\nData popped out successfully\n");
		return stack[top--]; // pop out the element then decrease the top by 1
		
	}
}