#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct node
{
    int data;
    struct node* next;
}Node;

Node* head ;


void print_data()
{
    Node* ptr = head;

    while (ptr != NULL)
    {
        /* code */
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
    
}

void insert(int data , int pos)
{
    Node* temp = NULL;
    Node* ptr = NULL;
    temp = (Node*)malloc(sizeof(Node));
    temp->data = data;
    temp->next = NULL;
    if (pos == 1)
    {
        /* code */
        temp->next = head;
        head = temp;
        return ;
    }
    ptr = head;
    for ( int i = 0; i < pos-2; i++)
    {
        /* code */
        ptr = ptr->next;
    }

    ptr->next = temp;
}  

int main(){

    head = NULL;
    insert(12, 1);
    insert(13, 2);
    insert(14, 3);
    insert(15 ,4);
    insert(16, 5);
    print_data();
    printf("\n\n");
    getch();
    
    return 0;
}