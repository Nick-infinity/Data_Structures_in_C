/*
*
* Program to pop elements out from head of linked list
* We can chose either tail or head to apply pop operation
* We nee O(1) complexity so chosing head instead of tail
* 
*/

#include <stdio.h>
#include <stdlib.h>
#include "stack_ll.h"
int pop()
{
	if (size > 0)
	{
		struct stack *tempNode = top;  // Making a temporary node to store the head node
		top = tempNode->next;          // Breaking link from top node and linking to seconf node
		int data = tempNode->data;     
		free(tempNode);                // Freeing the redundant top node
		size--;						   // Decreasing size counter by 1
		return data;
	}
	return 0;
}