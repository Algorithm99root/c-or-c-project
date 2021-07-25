#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct node
{
    struct node *previous;
    int data;
    struct node *next;
};

struct node *add_to_empty(struct node *head, int data)
{
    struct node *temp = NULL;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->previous = NULL;
    temp->data = data;
    temp->next = NULL;
    head = temp;
    return head;
}

struct node *add_at_End(struct node *head, int data)
{
    struct node *ptr = NULL;
    struct node *ptr_2 = NULL;
    ptr_2 = (struct node *)malloc(sizeof(struct node));
    ptr_2->previous = NULL;
    ptr_2->data = data;
    ptr_2->next = NULL;
    ptr = head;
    while (ptr->next != NULL)
    {
        /* code */
        ptr = ptr->next;
    }

    ptr->next = ptr_2;
    ptr_2->previous = ptr;
    return head;
}

struct node *create_list(struct node *head)
{
    int data, n;
    printf("Enter the Size of Doubly linked list element : ");
    scanf("%d", &n);
    printf("\n");

    if (n == 0)
    {
        /* code */
        return head;
    }
    printf("Enter the 1 element of doubly linked list : ");
    scanf("%d", &data);
    head = add_to_empty(head, data);

    for (int i = 1; i < n; i++)
    {
        /* code */
        printf("Enter the %d element of doubly linked list : ", i + 1);
        scanf("%d", &data);
        head = add_at_End(head, data);
    }

    return head;
}

void print_data(struct node *head)
{
    struct node *ptr = NULL;
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

struct node *reverse_doubly_linked_list(struct node *head)
{
    struct node *ptr = head;
    struct node *ptr_2 = ptr->next;
    ptr->next = NULL;
    ptr->previous = ptr_2;

    while (ptr_2 != NULL)
    {
        /* code */
        ptr_2->previous = ptr_2->next;
        ptr_2->next = ptr;
        ptr = ptr_2;
        ptr_2 = ptr_2->previous;
    }

    head = ptr;
    return head;
}

int main()
{

    struct node *head = NULL;
    head = create_list(head);
    printf("\n List of Doubly linked list before reversing : ");
    print_data(head);
    printf("\n List of Doubly linked list after reversing : ");
    head = reverse_doubly_linked_list(head);
    print_data(head);
    printf("\n\n");
    printf("\t\t\t Thanks for myself");
    getch();
    return 0;
}