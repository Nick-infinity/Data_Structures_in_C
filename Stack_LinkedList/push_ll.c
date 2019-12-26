/*
*
* Program to push elements in first node of linked list
* We can chose either tail or head to push elements
* We nee O(1) complexity so chosing head instead of tail
* 
*/
#include <stdio.h>
#include <stdlib.h>
#include "stack_ll.h"

void push(int data)
{

	struct stack *newnode = (struct stack*)malloc(sizeof(struct stack));     // Making new stack node and assigning it memory
	newnode->data = data;													 // Assigning data to newnode
	newnode->next = top;													 // linkig the old first node to newly created top node
	top = newnode;															 // Updating the top to point to newly created first node
	size++;																	 // Increasing the size counter by 1
	printf("\nData %d pushed successfully at position %d.", data, size);
	return;

}