#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct node
{
    int data;
    struct node *link;
};

void add_first(struct node** head , int data)
{
    struct node* ptr = NULL;
    ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->link = NULL;
    ptr->link = *head;

    *head = ptr;
}

int main(){

    struct node* head = NULL;
    head = (struct node*)malloc(sizeof(struct node));
    head->data = 12;
    head->link = NULL;

    struct node* ptr = NULL;
    ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data = 45;
    ptr->link = NULL;

    head->link = ptr;

    int data = 333;
    add_first(&head,data);

    ptr = head;

    while (ptr != NULL)
    {
        /* code */
        printf("%d ",ptr->data);
        ptr = ptr->link;
    }
    printf("\n\n");
    getch();
      
    return 0;
}