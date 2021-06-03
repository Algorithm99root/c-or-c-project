#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct node
{
    /* data */
    int data;
    struct node *link;

} Node;

void add_data(Node *head, int data)
{
    Node *ptr = NULL;
    Node *temp = NULL;
    ptr = head;
    temp = (Node *)malloc(sizeof(Node));
    temp->data = data;
    temp->link = NULL;

    while (ptr->link != NULL)
    {
        /* code */
        ptr = ptr->link;
    }

    ptr->link = temp;
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
        ptr = ptr->link;
    }
}

Node *move_in_fornt(Node *head)
{
    Node *p ;
    Node *q ;
    if ((head == NULL) || (head->link == NULL))
    {
        /* code */
        return head;
    }
    p = head;
    q = NULL;

    while (p->link != NULL)
    {
        /* code */
        q = p;
        p = p->link;
    }

    q->link = NULL;
    p->link = head;
    head = p;

    return head;
}

int main()
{

    Node *head = NULL;
    head = (Node *)malloc(sizeof(Node));
    head->data = 11;
    head->link = NULL;

    add_data(head, 34);
    add_data(head, 36);
    add_data(head, 39);
    add_data(head, 44);
    add_data(head, 49);
    print_data(head);
    printf("\n\n");
    head = move_in_fornt(head);
    print_data(head);
    printf("\n\n");
    getch();
    return 0;
}