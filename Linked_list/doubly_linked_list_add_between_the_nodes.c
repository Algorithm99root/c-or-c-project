#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct node
{
    struct node *previous;
    int data;
    struct node *next;
} Node;

Node *add_to_empty(Node *head, int data)
{
    Node *temp = NULL;
    temp = (Node *)malloc(sizeof(Node));
    temp->previous = NULL;
    temp->data = data;
    temp->next = NULL;
    head = temp;
    return head;
}

Node *add_at_Beg(Node *head, int data)
{
    Node *temp = NULL;
    temp = (Node *)malloc(sizeof(Node));
    temp->previous = NULL;
    temp->data = data;
    temp->next = NULL;
    temp->next = head;
    head->previous = temp;
    head = temp;
    return head;
}

Node *add_at_End(Node *head, int data)
{
    Node *ptr = NULL;
    Node *ptr_2 = NULL;
    ptr = head;
    ptr_2 = (Node *)malloc(sizeof(Node));
    ptr_2->previous = NULL;
    ptr_2->data = data;
    ptr_2->next = NULL;

    while (ptr->next != NULL)
    {
        /* code */
        ptr = ptr->next;
    }

    ptr->next = ptr_2;
    ptr_2->previous = ptr;
    return head;
}

Node *add_before_position(Node *head, int data, int position)
{
    Node *newP = NULL;
    Node *temp = head;
    Node *temp_2 = NULL;
    newP = add_to_empty(newP, data);
    int pos = position;
    while (pos > 2)
    {
        /* code */
        temp = temp->next;
        pos--;
    }
    if (position == 1)
    {
        /* code */
        head = add_at_Beg(head, data);
    }
    else
    {
        /* code */
        temp_2 = temp->next;
        temp->next = newP;
        temp_2->previous = newP;
        newP->next = temp_2;
        newP->previous = temp;
    }

    return head;
}

int main()
{
    Node *head = NULL;
    Node *ptr = NULL;
    head = add_to_empty(head, 12);
    head = add_at_End(head, 34);
    head = add_at_End(head, 44);
    head = add_at_End(head, 56);
    head = add_at_End(head, 78);
    head = add_before_position(head, 89, 1);
    ptr = head;

    while (ptr != NULL)
    {
        /* code */
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
    getch();

    return 0;
}