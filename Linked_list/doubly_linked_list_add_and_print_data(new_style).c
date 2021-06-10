#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct node
{
    int data;
    struct node *next;
    struct node *previous;
} Node;

Node* head ;

void insert(int data , int position)
{
    Node* ptr = NULL;
    Node* temp = NULL;
    temp = (Node*)malloc(sizeof(Node));
    temp->previous = NULL;
    temp->data = data;
    temp->next = NULL;

    if (position == 1)
    {
        /* code */
        temp->next = head;
        head = temp;
        return;
    }
    ptr = head ;

    for (int i = 0; i < position-2; i++)
    {
        /* code */
        ptr = ptr->next;
    }

    ptr->next = temp;
    temp->previous = ptr;
 
}

void print_data()
{
    Node* ptr = head;

    while (ptr != NULL)
    {
        /* code */
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    
    
}

int main()
{
    head = NULL;
    insert(123,1);
    insert(124,2);
    insert(125,3);
    insert(126,4);
    insert(127,5);
    insert(128,6);
    print_data();

}