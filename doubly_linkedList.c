#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node* prev;
    struct node* next;
}node;

void traversal(node* head) {
    node* ptr = head;
    while(ptr != NULL) {
        printf("%d  " , ptr -> data);
        ptr = ptr -> next;
    }
}

node* insert_at_idx(node* head , int val, int idx) {
    node* p = (node*) malloc(sizeof(node));
    p -> data = val;
    node* q = head;
    int count = 0;
    while(count != idx -1) {
        q = q -> next;
        count++;
    }
    p -> next = q -> next;
    p -> prev = q;
    q -> next = p;
    p -> next -> prev = p;

    return head;

}

int main()
{
    node *head = (node *)malloc(sizeof(node));
    node *second = (node *)malloc(sizeof(node));
    node *third = (node *)malloc(sizeof(node));
    node *fourth = (node *)malloc(sizeof(node));

    head -> prev = NULL;
    head->data = 1;
    head->next = second;
    second -> prev = head;
    second->data = 2;
    second->next = third;
    third -> prev = second;
    third->data = 3;
    third->next = fourth;
    fourth -> prev = third;
    fourth->data = 4;
    fourth->next = NULL;
    traversal(head);

    printf("\nAfter Insert\n");
    head = insert_at_idx(head , 9, 2);
    traversal(head);

    return 0;
}