#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
int size()
{
	if (top < 0)
	{
		printf("\nStack is empty!");
		exit(0);
	}
	else
	{
		return top + 1;
	}
}