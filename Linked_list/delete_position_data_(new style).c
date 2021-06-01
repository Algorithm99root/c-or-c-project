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

struct node* del_position(struct node *head , int position)
{
    struct node* current = NULL;
    current = head;
    struct node* previous = NULL;
    previous = head;
    struct node* only_1 = NULL;
    only_1 = head;
   
    if (head == NULL)
    {
        /* code */
        printf("Linked list is empty");
    }
    else if (position == 1)
    {
        /* code */
        head = current->link;
        free(only_1);
        only_1 = NULL;
    }

    else
    {
       while (position != 1)
       {
           /* code */
           previous = current;
           current = current->link;
           position--;
       }
       previous->link = current->link;
       free(current);
       current = NULL;      
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
    printf("Before the deleting the last node and data = ");
    print_the_data(head);
    printf("\n\n");
    printf("After the deleting the last node and data = ");
    head = del_position(head , 1);
    print_the_data(head);
    printf("\n\n");
    getch();
    return 0;
}