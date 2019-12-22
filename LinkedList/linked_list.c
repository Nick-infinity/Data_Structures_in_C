/*
*  C program for multiple functions of Singly linked list
*/

#include<stdio.h>
#include<stdlib.h>

// structure of node
struct node 
{
    int data; //data
    struct node *next; //address
}*head;

/*
* Functions for linked list
*/
void createList(int n); 
void display();

int main()
{
    int n;
    printf("Enter the number of nodes to create: ");
    scanf("%d",&n);
    createList(n);
    printf("\nEntire linked list data: ");
    display();
}

// Creating a linked list
void createList(int n)
{
    struct node *tmp , *newNode;
    int data;
    head = (struct node*)malloc(sizeof(struct node));

    //terminate if memory not allocated
    if(head == NULL)
    {
        printf("\nUnable to allocate memory to head!");
        exit (0);
    }

    // creating node 1 
    printf("\nEnter the data of node 1: ");
    scanf("%d",&data);
    head->data = data;
    head->next=NULL;
    tmp = head;

    // creating remaining n-1 nodes
    for(int i =2 ; i<=n ; i++)
    {
        newNode = (struct node*)malloc(sizeof(struct node));
        if(newNode == NULL)
        {
            printf("\nUnable to allocate memory to %d node!",i);
            break;
        }
        printf("\nEnter the data of node %d: ",i);
        scanf("%d",&data);
        newNode->data = data;
        newNode->next=NULL; 
        tmp->next = newNode;      // link new node with previous node
        tmp = tmp->next;         // update tmp & set to new node

    }
    
}

// Display entire list
void display()
{
    if(head == NULL)
    {
        printf("\nList is empty!");
        exit (0);
    }
    struct node *tmp = head;
    while(tmp != NULL)
    {
        printf("\nData: %d",tmp->data); // print data of current node
        tmp = tmp->next; // move to next  node
    }

}