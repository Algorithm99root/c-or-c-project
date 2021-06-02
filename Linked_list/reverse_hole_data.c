#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct node
{
    int data;
    struct node *link;
};

void add_data(struct node *head, int data)
{
    struct node *ptr = NULL;
    struct node *temp = NULL;
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
    struct node *ptr = NULL;
    ptr = head;
    if (head == NULL)
    {
        /* code */
        printf("Linked list is Empty .");
    }

    while (ptr != NULL)
    {
        /* code */
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
}

struct node *reverse_hole_data(struct node *head)
{
    struct node *pre = NULL;
    struct node *next = NULL;
    while (head != NULL)
    {
        /* code */
        next = head->link;
        head->link = pre;
        pre = head;
        head = next;
    }

    head = pre;
    return head;
}

int main()
{

    struct node *head = NULL;
    head = (struct node *)malloc(sizeof(struct node));
    head->data = 12;
    head->link = NULL;
    add_data(head, 13);
    add_data(head, 89);
    add_data(head, 90);
    printf("Print the data before reverse hole data :\n");
    print_data(head);
    printf("\n\n");
    head = reverse_hole_data(head);
    printf("Print the data after reverse hole data :\n");
    print_data(head);
    printf("\n\n");
    getch();
    return 0;
}
