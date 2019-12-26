// Function to display full queue

#include <stdlib.h>
#include <stdio.h>
#include "queue.h"
void display()
{
	if(front == -1 || front>rear)
	{
		printf("\nQueue is Empty!");
		exit(0);
	}
	else
	{
		for(int i = front ; i <= rear ; i++)
		{
			printf("  %d",queue[i]);
		}
	}
}