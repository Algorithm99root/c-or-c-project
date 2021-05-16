#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct node
{
    int data;
    struct node *next;
};

void print_list(struct node *n)
{
    while (n != NULL)
    {
        /* code */
        printf("%d ", n->data);
        n = n->next;
    }
}

int main()
{
    struct node *head = NULL;
    struct node *sceond = NULL;
    struct node *thrid = NULL;

    head = (struct node *)malloc(sizeof(struct node));
    sceond = (struct node *)malloc(sizeof(struct node));
    thrid = (struct node *)malloc(sizeof(struct node));
    head->data = 22;
    head->next = sceond;
    sceond->data = 2;
    sceond->next = thrid;
    thrid->data = 44;
    thrid->next = NULL;

    print_list(head);
    printf("\n");
    printf("\n");
    getch();

    return 0;
}