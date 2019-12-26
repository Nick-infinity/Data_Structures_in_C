/*
*
* Modular C program to implement stack using Singly LinkedLists
* Includes Modular GNU Makefiles
*
*/


#include <stdio.h>
#include <stdlib.h>
#include "stack_ll.h"
int size = 0; // to keep track of size of stack and end conditions
int main()
{
	int data , choice;
	while (1)
	{
		printf("-----------Stack operations-----------");
		printf("\n1) PUSH");
		printf("\n2) POP");
		printf("\n3) SIZE");
		printf("\n4) SHOW TOP ELEMENT");
		printf("\n5) EXIT");
		printf("\n");
		scanf("%d", &choice);

		switch (choice)
		{
		case 1:
			if (size > CAPACITY-1)  // size starts from 0
			{
				printf("\nStack overflow!");
				exit(0);
			}
			printf("Enter data to push into stack: ");
			scanf("%d", &data);

			// Push element to stack
			push(data);
			break;

		case 2:
			// popping out data of top element
			data = pop();
			if (data > 0)
			{
				printf("\nData => %d", data);
				break;
			}
			printf("\nStack is empty!\nCant pop more element!");
			break;

		case 3:
			printf("Stack size: %d\n", size);
			break;

		case 4:
			if (size == 0)
			{
				printf("\nStack is empty!");
				break;
			}
			printf("\nTop element: %d", top->data);
			break;

		case 5:
			printf("Exiting from app.\n");
			exit(0);
			break;

		default:
			printf("Invalid choice, please try again.\n");
		}
		printf("\n \n");

	}
	return 0;
}
