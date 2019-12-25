#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
int showTop()
{
	if(top<0)
	{
		printf("\nStack is empty!");
		return-1;
	}
	else
	{
		printf("\nPeak successful");
		return stack[top];
	}
}