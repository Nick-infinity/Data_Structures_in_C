/*
* Modular C program to implement stack using arrays
* Includes Modular GNU Makefiles
*
*/

#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include "queue.h"
int rear = -1 , front = -1 ;
int option , data;

int main()
{
	while (1)
	{
		printf("\n\n ***** MAIN MENU *****");

		printf("\n 1) Insert an element");

		printf("\n 2) Delete an element");

		printf("\n 3) Peek");

		printf("\n 4) Display the queue");

		printf("\n 5) EXIT");

		printf("\nEnter your option : ");

		scanf(" %d", &option);

		switch (option)
		{

		case 1:
			if (rear > CAPACITY - 1)
			{
				printf("\nQueue Overflow! Cant enter more elements!");
				break;
			}
			else
			{
				printf("\nEnter the element to push to queue: ");
				scanf("%d", &data);
				enqueue(data);
				break;
			}

		case 2:

			data = dequeue();

			if (data != INT_MIN)

				printf("\n The number deleted is : %d", data);

			break;

		case 3:

			data = peak();

			if (data != INT_MIN)

				printf("\n The first value in queue is : %d", data);

			break;

		case 4:

			display();

			break;

		case 5:
			printf("\nExiting from the app\n");
			exit(0);

		default:
			printf("\nInvalid option selected!");
		}

	}
}