#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct node
{
    int data;
    struct node *link;
};

struct node *add_the_data_End(struct node *ptr, int data) // this function time complexity is =  O(1)
{
    struct node *temp = NULL;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;

    ptr->link = temp;
    return temp;
}

int main()
{

    struct node *head = NULL;
    head = (struct node *)malloc(sizeof(struct node));
    head->data = 13;
    head->link = NULL;
    struct node *ptr = NULL;
    ptr = head;

    ptr = add_the_data_End(ptr, 66);
    ptr = add_the_data_End(ptr, 77);
    ptr = add_the_data_End(ptr, 89);
    ptr = add_the_data_End(ptr, 909);

    ptr = head;

    while (ptr != NULL)
    {
        /* code */
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }

    printf("\n");
    getch();

    return 0;
}