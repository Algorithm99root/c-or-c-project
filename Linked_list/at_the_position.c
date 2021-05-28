#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct node
{
    int data;
    struct node *link;
};

void at_the_end(struct node *head, int data)
{

    struct node *ptr, *temp;
    ptr = head;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;

    while (ptr->link != NULL)
    {
        /* code */
        ptr = ptr->link;
    }
    ptr->link = temp;
}

void print_data(struct node *head)
{
    if (head == NULL)
    {
        /* code */
        printf("Linked list is Empty");
    }
    struct node *ptr = NULL;
    ptr = head;

    while (ptr != NULL)
    {
        /* code */
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
}

void at_the_position(struct node *head, int data, int position)
{
    struct node *ptr = head;
    struct node *ptr_2 = NULL;
    ptr_2 = (struct node *)malloc(sizeof(struct node));
    ptr_2->data = data;
    ptr_2->link = NULL;
    position--;

    while (position != 1)
    {
        /* code */
        ptr = ptr->link;
        position--;
    }

    ptr_2->link = ptr->link;
    ptr->link = ptr_2;
}

int main()
{

    struct node *head = NULL;
    head = (struct node *)malloc(sizeof(struct node));
    head->data = 12;
    head->link = NULL;

    at_the_end(head, 6);
    at_the_end(head, 7);
    at_the_end(head, 9);
    at_the_end(head, 13);
    at_the_end(head, 16);
    at_the_end(head, 19);
    print_data(head);
    printf("\n");
    at_the_position(head, 23, 3);
    print_data(head);
    printf("\n\n");
    getch();

    return 0;
}