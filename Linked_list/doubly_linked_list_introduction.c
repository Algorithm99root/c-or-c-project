#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct node
{
    struct node *previous;
    int data;
    struct node *next;
} Node;

Node *add_to_empty(Node *head, int data)
{
    Node *temp = NULL;
    temp = (Node *)malloc(sizeof(Node));
    temp->previous = NULL;
    temp->data = data;
    temp->next = NULL;
    
    head = temp;
    return head;
}

int main()
{
    Node *head = NULL;
    head = add_to_empty(head, 13);
    printf("%d ", head->data);
    printf("\n\n");
    getch();
    return 0;
}