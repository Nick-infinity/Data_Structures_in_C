#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "stack.h"
int pop()
{
	if (top < 0)
	{
		printf("\nStack is empty!");
		return INT_MIN;
	}
	else
	{
		printf("\nData popped out successfully\n");
		return stack[top--]; // pop out the element then decrease the top by 1

	}
}