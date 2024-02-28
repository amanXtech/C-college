#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node* next;
}node;


void traversal(node* head) {
    node* ptr = head;
    while(ptr != NULL) {
        printf("%d  " , ptr -> data);
        ptr = ptr -> next;
    }
}

node* deletion_from_beg(node* head) {
    node* ptr = head;
    head = head -> next;
    free(ptr);
    return head;
}

node* deletion_from_end(node* head) {
    node* p = head;
    node* q = head -> next;
    while(q -> next != NULL) {
        p = p -> next;
        q = q -> next;
    }
    p -> next = NULL;
    free(q);
    return head;

}

node* deletion_from_idx(node* head , int idx) {
    node* p = head;
    int count = 0;
    while(count != idx -1) {
        p = p -> next;
        count++;
    }
    node* q = p -> next;
    p -> next = p -> next -> next;
    free(q);
    return head;

}

int main()
{
    node* head = (node*) malloc(sizeof(node));
    node* second = (node*) malloc(sizeof(node));
    node* third = (node*) malloc(sizeof(node));
    node* fourth = (node*) malloc(sizeof(node));

    head -> data = 1;
    head -> next = second;
    second -> data = 2;
    second -> next = third;
    third -> data = 3;
    third -> next = fourth;
    fourth -> data = 4;
    fourth -> next = NULL;
    traversal(head);

    printf("\nAfter deletion\n");
    
    // head = deletion_from_end(head);

    head = deletion_from_idx(head , 2);

    traversal(head);

    return 0;
}