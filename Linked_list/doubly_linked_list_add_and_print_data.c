#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct node
{
    int data;
    struct node *next;
    struct node *previous;
} Node;

void add_data(Node *head, int data)
{
    Node *ptr = NULL;
    Node *temp = NULL;
    ptr = head;
    temp = (Node *)malloc(sizeof(Node));
    temp->previous = NULL;
    temp->data = data;
    temp->next = NULL;

    while (ptr->next != NULL)
    {
        /* code */
        ptr = ptr->next;
    }

    ptr->next = temp;
    temp->previous = ptr->next;
}

void print_data(Node *head)
{
    if (head == NULL)
    {
        /* code */
        printf("Linked list is Empty");
    }
    Node *ptr = NULL;
    ptr = head;

    while (ptr != NULL)
    {
        /* code */
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    Node *head = NULL;
    head = (Node *)malloc(sizeof(Node));
    head->previous = NULL;
    head->data = 12;
    head->next = NULL;
    add_data(head, 44);
    add_data(head, 45);
    add_data(head, 46);
    add_data(head, 47);
    print_data(head);
    printf("\n\n");
    getch();

    return 0;
}