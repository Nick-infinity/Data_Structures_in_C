/*
* Modular C program to implement stack using arrays
* Includes Modular GNU Makefiles
*
* TO DO: Implement stack via Dynamic array!
* Will be implemented via malloc
*/

#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
int top = -1; // decalration always in c files

int main()
{
	int data , choice , sizek , topElement;
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
			printf("Enter data to push into stack: ");
			scanf("%d", &data);

			// Push element to stack
			push(data);
			break;

		case 2:
			data = pop();

			// If stack is not empty
			if (data != -1) // controlling the output via -1 return
				printf("Data => %d\n", data);
			break;

		case 3:
			// easy implementaion without function!
			//printf("Stack size: %d\n", top+1);
			sizek = size();
			if (sizek != -1)
				printf("\nStack size: %d", sizek);
			break;

		case 4:
			topElement = showTop();
			if (topElement != -1)
				printf("\nTop element: %d", topElement);
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