#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "stack.h"
int showTop()
{
	if (top < 0)
	{
		printf("\nStack is empty!");
		return INT_MIN;
	}
	else
	{
		printf("\nPeak successful");
		return stack[top];
	}
}