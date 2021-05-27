#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* link;
};

void at_the_first(struct node* head , int data)
{
    struct node *temp ,*ptr;
    
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;

    temp->link = head;
    
    head = temp;
    ptr = head;

    while (ptr != NULL)
    {
        /* code */
        printf("%d ",ptr->data);
        ptr = ptr->link;
    }
    

}

int main(){

    struct node* head = NULL;
    head = (struct node*)malloc(sizeof(struct node));
    head->data = 123;
    head->link = NULL;

    struct node* current = NULL;
    current = (struct node*)malloc(sizeof(struct node));
    current->data = 124;
    current->link = NULL;
    head->link = current;

    current = (struct node*)malloc(sizeof(struct node));
    current->data = 125;
    current->link = NULL;
    head->link->link = current;

    at_the_first(head, 45);
    

    
    return 0;
}