#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node;

void traverse(node *head)
{
    node *ptr = head;
    // printf("%d " , ptr -> data);
    // ptr = ptr -> next;
    // while(ptr != head) {
    //     printf("%d " , ptr -> data);
    //     ptr = ptr -> next;
    // }
    do
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);

    printf("\nTraversing ended\n");
}

node *insert_beg(node *head, int val)
{
    node *ptr = (node*) malloc(sizeof(node));
    ptr -> data = val;
    ptr -> next = head;
    node* q = head -> next;
    while( q -> next != head) {
        q = q ->next;
    }
    q -> next = ptr;
    head = ptr;

    return head;
}

node* insert_end(node* head , int val ) {
    node* p = (node*) malloc(sizeof(node));
    p -> data = val;
    node* q = head -> next;
    while(q ->next != head) {
        q = q -> next;
    }
    q -> next = p;
    p -> next = head;
    return head;

}

int main()
{
    node *head = (node *)malloc(sizeof(node));
    node *second = (node *)malloc(sizeof(node));
    node *third = (node *)malloc(sizeof(node));
    node *fourth = (node *)malloc(sizeof(node));

    head->data = 1;
    head->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = fourth;
    fourth->data = 4;
    fourth->next = head;
    printf("\nBefore insertion\n");
    traverse(head);

    // head = insert_beg(head , 9);
    head = insert_end(head , 8);
    printf("\nAfter insertion\n");
    traverse(head);

    return 0;
}