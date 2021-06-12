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

Node *add_at_Beg(Node *head, int data)
{
    Node *temp = NULL;
    temp = (Node *)malloc(sizeof(Node));
    temp->previous = NULL;
    temp->data = data;
    temp->next = NULL;
    temp->next = head;
    head->previous = temp;
    head = temp;
    return head;
}

Node *add_at_End(Node *head, int data)
{
    Node *ptr = NULL;
    Node *ptr_2 = NULL;
    ptr = head;
    ptr_2 = (Node *)malloc(sizeof(Node));
    ptr_2->previous = NULL;
    ptr_2->data = data;
    ptr_2->next = NULL;

    while (ptr->next != NULL)
    {
        /* code */
        ptr = ptr->next;
    }

    ptr->next = ptr_2;
    ptr_2->previous = ptr;
    return head;
}

Node *create_list(Node *head)
{
    int n, data, i;
    printf("Enter the number of nodes : ");
    scanf("%d", &n);

    if (n == 0)
    {
        /* code */
        return head;
    }
    printf("Enter the element of 1 nodes : ");
    scanf("%d", &data);
    head = add_to_empty(head, data);
    for (i = 1; i < n; i++)
    {
        /* code */
        printf("Enter the element of %d nodes : ", i + 1);
        scanf("%d", &data);
        head = add_at_End(head, data);
    }

    return head;
}

Node *del_last(Node *head)
{
    if (head == NULL)
    {
        /* code */
        printf("Linked list is Empty .");
    }
    else
    {
        /* code */
        Node *temp = NULL;
        Node *temp_2 = NULL;
        temp = head;
        while (temp->next != NULL)
        {
            /* code */
            temp = temp->next;
        }

        temp_2 = temp->previous;
        temp_2->next = NULL;
        free(temp);
        temp = NULL;
    }
    return head;
}

Node *del_first(Node *head)
{
    Node *temp = NULL;

    if (head == NULL)
    {
        /* code */
        printf("Linked list is Empty");
    }
    else
    {
        /* code */
        head = head->next;
        free(temp);
        temp = NULL;
        head->previous = NULL;
    }

    return head;
}

void print_data(Node *head)
{
    Node *ptr = NULL;
    ptr = head;
    if (head == NULL)
    {
        /* code */
        printf("Linked list is Empty");
    }

    while (ptr != NULL)
    {
        /* code */
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}

Node *del_in_position(Node *head, int position)
{
    Node *temp = NULL;
    Node *temp_2 = NULL;
    temp = head;

    if (position == 1)
    {
        /* code */
        head = del_first(head);
        return head;
    }
    while (position > 1)
    {
        /* code */
        temp = temp->next;
        position--;
    }
    if (temp->next == NULL)
    {
        /* code */
        head = del_last(head);
    }
    else
    {
        /* code */
        temp_2 = temp->previous;
        temp_2->next = temp->next;
        temp->next->previous = temp_2;
        free(temp);
        temp = NULL;
    }

    return head;
}

int main()
{
    int pos;
    Node *head = NULL;
    head = create_list(head);
    printf("\nList of Doubly linked list : ");
    print_data(head);
    printf("\n");
    printf("Enter the position which nodes you : ");
    scanf("%d",&pos);
    printf("\n");
    printf("After delete the last node : ");
    head = del_in_position(head,pos);
    print_data(head);
    printf("\n");
    getch();
    return 0;
}