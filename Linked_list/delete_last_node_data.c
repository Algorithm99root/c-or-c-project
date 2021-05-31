#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#pragma(1)

struct node
{
    int data;
    struct node *link;
};

void add_the_data(struct node *head, int data)
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

void print_the_data(struct node *head)
{
    if (head == NULL)
    {
        /* code */
        printf("Linked list is empty");
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

struct node *del_last(struct node *head)
{
    if (head == NULL)
    {
        /* code */
        printf("Linked list is empty");
    }
    else if (head->link == NULL)
    {
        /* code */
        free(head);
        head = NULL;
    }
    else
    {
        struct node *temp = NULL;
        temp = head;
        struct node *temp_2 = NULL;
        temp_2 = head;
        while (temp->link != NULL)
        {
            /* code */
            temp_2 = temp;
            temp = temp->link;
        }
        temp_2->link = NULL;
        free(temp);
        temp = NULL;
    }

    return head;
}

int main()
{

    struct node *head = NULL;
    head = (struct node *)malloc(sizeof(struct node));
    head->data = 12;
    head->link = NULL;

    add_the_data(head, 33);
    add_the_data(head, 67);
    add_the_data(head, 78);
    add_the_data(head, 99);
    printf("\n");
    print_the_data(head);

    head = del_last(head);
    printf("\n");
    print_the_data(head);
    printf("\n\n");
    getch();
    return 0;
}