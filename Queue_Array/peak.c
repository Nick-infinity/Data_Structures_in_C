// Function to show the front element from the queue

#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include "queue.h"

int peak()
{
	int data;
	if(front == -1 || front > rear)
	{
		printf("\nStack is empty!");
		return INT_MIN;
	}
	else
	{
		data = queue[front];
		return data;
	}
}