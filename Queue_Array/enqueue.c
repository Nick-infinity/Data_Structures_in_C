// Function to push elements at rear of array in queue

#include <stdlib.h>
#include <stdio.h>
#include "queue.h"

void enqueue(int data)
{
	if (rear > CAPACITY - 1)     // checking for overflow
	{
		printf("\nQueue Overflow!");
		exit(0);
	}
	if (rear == -1 && front == -1)
	{
		front += 1;				// setting front and rear for initial start
		rear += 1;
	}
	else
	{
		rear += 1;				// increamenting rear by 1
	}
	queue[rear] = data;       // then pushing the data
	return;
}