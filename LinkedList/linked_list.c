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
void insertNodeatbeg(int data);
void insertNodeatEnd(int data);
void insertAtPosition(int data , int postion);
void deleteAtBeg();
void deleteAtEnd();
void deleteAtPosition(int position);
void deleteAll();

int main()
{
    int n;
    char consent;
    printf("Enter the number of nodes to create: ");
    scanf("%d", &n);
    createList(n);
    printf("\nEntire linked list data: ");
    display();

    printf("\nAdding node at beginning!");
    insertNodeatbeg(0);
    printf("\nEntire linked list data: ");
    display();

    printf("\nAdding node at ending");
    insertNodeatEnd(4);
    printf("\nEntire linked list data: ");
    display();

    printf("\nAdding node at postion");
    insertAtPosition(9, 3);
    printf("\nEntire linked list data: ");
    display();

    printf("\nDeleting the first node.");
    deleteAtBeg();
    printf("\nEntire linked list data: ");
    display();

    printf("\nDeleting the node at end!");
    deleteAtEnd();
    printf("\nEntire linked list data: ");
    display();

    printf("\nDeleting a node at position");
    deleteAtPosition(3);
    printf("\nEntire linked list data: ");
    display();

    printf("\nWARNING- Deleting all nodes! \nProceed? [y/n]");
    scanf("%s", &consent);
    if (consent == 'y' || consent == 'Y')
    {
        deleteAll();
    }
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
    if (head == NULL)
    {
        printf("\nUnable to allocate memory to head!");
        exit (0);
    }

    // creating node 1
    printf("\nEnter the data of node 1: ");
    scanf("%d", &data);
    head->data = data;
    head->next = NULL;
    tmp = head;

    // creating remaining n-1 nodes
    for (int i = 2 ; i <= n ; i++)
    {
        newNode = (struct node*)malloc(sizeof(struct node));
        if (newNode == NULL)
        {
            printf("\nUnable to allocate memory to %d node!", i);
            break;
        }
        printf("\nEnter the data of node %d: ", i);
        scanf("%d", &data);
        newNode->data = data;
        newNode->next = NULL;
        tmp->next = newNode;      // link new node with previous node
        tmp = tmp->next;         // update tmp & set to new node

    }
    printf("\nLIST CREATED SUCCESSFULLY");

}

// Display entire list
void display()
{
    if (head == NULL)
    {
        printf("\nList is empty!");
        exit (0);
    }
    struct node *tmp = head;
    while (tmp != NULL)
    {
        printf("\nData: %d", tmp->data); // print data of current node
        tmp = tmp->next; // move to next  node
    }

}

// inserting node at beginning of the list
void insertNodeatbeg(int data)
{
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    if (newNode == NULL) {
        printf("\nUnable to allocate memory to beginning node!");
        exit(0);
    }
    newNode->data = data;
    newNode->next = head;  // setting link of new head node
    head = newNode;        // setting new node as head node
    printf("\nNODE ADDED AT BEGGINING SUCCESSFULLY");
}

// inserting node at end
void insertNodeatEnd(int data)
{
    struct node *newNode, *temp;

    newNode = (struct node*)malloc(sizeof(struct node));

    if (newNode == NULL)
    {
        printf("Unable to allocate memory to end node.");
        exit(0);
    }
    else
    {
        newNode->data = data; // Link the data part
        newNode->next = NULL;

        temp = head;

        // Traverse to the last node
        while (temp->next != NULL)
            temp = temp->next;

        temp->next = newNode; // Link address part

        printf("\nDATA INSERTED AT END SUCCESSFULLY");
    }
}

// inserting node at given postion
void insertAtPosition(int data, int postion)
{
    struct node *newNode, *temp;
    int count  = 1;
    temp = head; //setting temp as head reference for traversing
    newNode = (struct node*)malloc(sizeof(struct node));
    if (newNode == NULL)
    {
        printf("Unable to allocate memory to middle node");
        exit(0);
    }
    else
    {
        newNode->data = data; //setting data of new node
        while (temp != NULL)
        {

            temp = temp->next;
            count++;                 // counting the posiitons
            if (count == postion - 1) { // exiitng the loop  1 position before
                break;
            }
            else
            {
                printf("\nPosition %d is  not found in the list!");
                return;
            }
        }
        newNode->next = temp->next; // ponting new node to next node of current node
        temp->next = newNode;      // updating the previous node to point to newly added node
        printf("\nNODE ADDED AT %d POSITION SUCCESSFULLY", postion);
    }
}

// deleting very first node
void deleteAtBeg()
{
    if (head == NULL)
    {
        printf("\nList is empty!");
        exit(0);
    }
    else
    {
        struct node *todelete = head; // storing the head in temporary node
        head = head->next;            // updating head to next node
        free(todelete);               // free the temporary node from memory
        printf("\nSUCCESSFULLY DELTED FIRST NODE");
    }
}

// deleting a node at end of the list
void deleteAtEnd()
{
    struct node *temp = head; // passing reff. of head to temp
    if (head == NULL)
    {
        printf("\nList is empty!");
        exit(0);
    }
    else
    {
        while (temp->next->next != NULL) // moving to second last node
        {
            temp = temp->next;
        }
        free(temp->next); // freeing the last node while being on second last node
        temp->next = NULL; // setting link of new last node to NULL
    }
}

// deleting node at a partcular position
void deleteAtPosition(int position)
{
    struct node *temp , *todelete;
    temp = head;
    int count = 1;
    if (head == NULL)
    {
        printf("\nList is empty!");
        exit(0);
    }
    else
    {
        while (temp != NULL)
        {
            temp = temp->next;
            count++;
            if (count == position - 1)   // moving to position-1 node
            {
                break;
            }
        }
        todelete = temp->next;           // storng to be deleted node in separeate node
        temp->next = todelete->next;     // setting link for current node to node adter todelete node
        free(todelete);
        printf("\nNODE DELEED AT %d POSITION SUCCESSFULLY", position);
        return;
    }
    printf("\nUnable to find the %d position in the list!", position);

}

// deleting complete list
void deleteAll()
{
    struct node *temp = head;
    while (head != NULL)
    {
        temp = head;
        head = head->next;
        free(temp);
    }
    printf("\nDELETED LIST SUCCESSFULLY");
}