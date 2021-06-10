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
    temp->previous = ptr->next;
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

Node* add_at_Beg(Node* head , int data)
{
    Node* temp = NULL;
    temp = (Node*)malloc(sizeof(Node));
    temp->previous = NULL;
    temp->data = data;
    temp->next = head;
    head->previous = temp;
    head = temp;
    return head;
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
    Node* ptr = NULL;
    head  = add_at_Beg(head, 455);
    ptr = head;
    while (ptr != NULL)
    {
        /* code */
        printf("%d ", ptr->data);
        ptr = ptr->next;

    }
    printf("\n\n");
    getch();
    return 0;
}