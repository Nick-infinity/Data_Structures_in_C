/*
* Non Modulac C program to implement Queue using LinkedList
* Why? Coz im tired
*/

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

struct Queue_node
{
	int data;
	struct Queue_node *next;
};
struct Queue_node *front = NULL ;
struct Queue_node *rear = NULL;
void enqueue(int item);
int dequeue();
int peek();
void display();

int main() {
	int data , option;

	while (1)
	{
		printf("\n\n ***** MAIN MENU *****");

		printf("\n 1) Insert an element");

		printf("\n 2) Delete an element");

		printf("\n 3) Display Front element");

		printf("\n 4) Display the queue");

		printf("\n 5) EXIT");

		printf("\nEnter your option : ");

		scanf(" %d", &option);

		switch (option)
		{

		case 1:

			printf("\nEnter the element to push to queue: ");
			scanf("%d", &data);
			enqueue(data);
			break;

		case 2:

			data = dequeue();

			if (data != INT_MIN)

				printf("\n The number deleted is : %d", data);

			break;

		case 3:

			data = peek();

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

// Functions for Queue using linked list


void enqueue(int item)
{
	struct Queue_node *temp = (struct Queue_node *)malloc(sizeof(struct Queue_node));
	if (temp == NULL)
	{
		printf("\nError allocating memory to new node");
		exit(0);
	}
	temp->data = item;
	temp->next = NULL;
	if (front == NULL)
	{
		front = temp;
	}
	else
	{
		rear->next = temp;
	}
	rear = temp;
}

int dequeue()
{
	int item;
	if (front == NULL)
	{
		printf("\nQueue is empty!");
		return INT_MIN;
	}
	struct Queue_node *temp;
	temp = front;
	item = temp->data;
	front = front->next;
	free(temp);
	return item;
}

int peek()
{
	if (front == NULL)
	{
		printf("\nQueue is empty!");
		return INT_MIN;
	}
	else
	{
		return front->data;
	}
}

void display()
{
	struct Queue_node *temp;
	temp = front;
	if (front == NULL)
	{
		printf("\nQueue is empty!");
		return;
	}
	else
	{
		printf("\nQueue element are: \n");
		while (temp != NULL)
		{
			printf(" %d", temp->data);
			temp = temp->next;
		}
	}
	printf("\n\n");
}