#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

// Traversing and printing the list
void traverse(struct Node *head)
{
    struct Node *temp = head;
    while(temp != NULL)
    {
     printf("%d ",temp->data);
     temp = temp->next;
    }
}

int main()
{
    // malloc is lenghty as compared to new in cpp
    struct Node *head = (struct Node*)malloc(sizeof(struct Node)); 
    struct Node *second = (struct Node*)malloc(sizeof(struct Node));
    struct Node *third = (struct Node*)malloc(sizeof(struct Node));

    head->data = 1;
    head->next = second;
    second->data =2;
    second->next = third;
    third->data=3;
    third->next=NULL;
    traverse(head);
    return 0;
}
