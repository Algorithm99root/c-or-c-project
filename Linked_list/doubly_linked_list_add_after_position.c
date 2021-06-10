#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct node
{
    struct node *previous;
    int data;
    struct node *next;
} Node;

void add_data(Node *head, int data)
{
    Node *ptr = NULL;
    Node *temp = NULL;
    temp = (Node *)malloc(sizeof(Node));
    temp->previous = NULL;
    temp->data = data;
    temp->next = NULL;
    ptr = head;

    while (ptr->next != NULL)
    {
        /* code */
        ptr = ptr->next;
    }

    ptr->next = temp;
    temp->previous = ptr;
}

void print_data(Node* head)
{
    Node* ptr = NULL;
    ptr = head;

    if (head == NULL)
    {
        /* code */
        printf("Linked list is empty");
    }

    while (ptr != NULL)
    {
        /* code */
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    
    
}

void after_add_position(Node* head , int data , int position )
{
    Node* newP = NULL;
    Node* temp = NULL;
    Node* temp2 = NULL;
    temp = head;
    newP = (Node*)malloc(sizeof(Node));
    newP->previous = NULL;
    newP->data = data;
    newP->next = NULL;

    while (position != 1)
    {
        /* code */
        temp = temp->next;
        position--;
    }

    if (temp->next == NULL)
    {
        /* code */
        temp->next = newP;
        newP->previous = temp;
    }
    else
    {
        /* code */
        temp2 = temp->next;
        temp->next = newP;
        temp2->previous = newP;
        newP->next = temp2;
        newP->previous = temp;
    }


}

int main()
{

    Node *head = NULL;
    head = (Node *)malloc(sizeof(Node));
    head->previous = NULL;
    head->data = 11;
    head->next = NULL;

    add_data(head ,123);
    add_data(head ,124);
    add_data(head ,125);
    add_data(head ,126);
    print_data(head);
    printf("\n");
    after_add_position(head,1234, 3);
    print_data(head);
   
       
    printf("\n");
    getch();
    return 0;
}