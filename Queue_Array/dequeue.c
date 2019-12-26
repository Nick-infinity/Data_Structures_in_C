// Function to pop out front element from the stack in queue

#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include "queue.h"
int dequeue()
{
	int data = INT_MIN;
	if (front == -1 || front > rear)
	{
		printf("\nQueue is empty! Underflow!");
		return INT_MIN;                               // this is imp to check for the desired condition
	}
	else
	{
		data = queue[front];	// first return then increament front by 1
		front += 1;
		if (front > rear)	// if front > rear after the dequeue then reset front and rear
		{
			front = -1 ;
			rear = -1;

		}
		return data;
	}
}