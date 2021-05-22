#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct node
{

    int data;
    struct node *link;
};

void print_of_nodes(struct node *head);
void print_of_data(struct node *head);

int main()
{
    struct node *head = NULL;
    head = (struct node *)malloc(sizeof(struct node));
    head->data = 34;
    head->link = NULL;

    struct node *current = NULL;
    current = (struct node *)malloc(sizeof(struct node));
    current->data = 66;
    current->link = NULL;
    head->link = current;

    current = (struct node *)malloc(sizeof(struct node));
    current->data = 89;
    current->link = NULL;
    head->link->link = current;

    current = (struct node *)malloc(sizeof(struct node));
    current->data = 122;
    current->link = NULL;
    head->link->link->link = current;

    print_of_nodes(head);
    printf("\n");
    print_of_data(head);
    printf("\n");
    getch();

    return 0;
}

void print_of_nodes(struct node *head)
{
    int count = 0;
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
        count++;
        ptr = ptr->link;
    }

    printf("The number of nodes is = %d ", count);
}

void print_of_data(struct node *head)
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