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

// node* create_node(int value) {
//     node* newNode = (node*) malloc(sizeof(node));

//     if(newNode == NULL) {
//         printf("ALlocation failed\n");
//         return newNode;
//     }

//     newNode -> data = value;
//     newNode -> next = NULL;

//     return newNode;
// }

node* insert_at_beg(node* head, int value) {
    node* ptr = (node* ) malloc(sizeof(node));
    ptr -> data = value;
    ptr -> next = head;
    head = ptr;
    return head;
}

node* insert_after_idx(node* head , int idx , int data) {
    node* ptr = (node*) malloc(sizeof(node));
    ptr -> data = data;
    // if( head == NULL) {
    //     head = ptr;
    //     head -> next = NULL;

    //     return head;
    // }
    node* p = head;
    int count = 0;
    while(count != idx - 1) {
        p = p-> next;
        count++;
    }
    ptr -> next = p -> next;
    p -> next = ptr;
    return head;

}

node* insert_at_end(node* head , int value) {
    node* ptr = (node* ) malloc(sizeof(node));
    ptr -> data = value;
    ptr -> next = NULL;
    if( head == NULL) {
        head = ptr;
        return head;
    }
    node* p = head;
    while(p -> next != NULL) {
        p = p -> next;
    }
    p -> next = ptr;
    return head;
}

int main()
{
    node* head = (node*) malloc(sizeof(node));
    node* second = (node*) malloc(sizeof(node));
    node* third = (node*) malloc(sizeof(node));

    head -> data = 1;
    head -> next = second;
    second -> data = 2;
    second -> next = third;
    third -> data = 3;
    third -> next = NULL;
    // node* head = create_node(1);
    // create_node(2);
    // create_node(3);
    // create_node(4);
    printf("List before insertion\n");
    traversal(head);

    // head = insert_at_beg(head , 50);
    head = insert_at_beg(head , 100);
    printf("\nList after insertion at beginning\n");
    traversal(head);

    head = insert_at_end(head, 9);
    head = insert_at_end(head, 18);
    printf("\nAfter insertion at end\n");
    traversal(head);

    head = insert_after_idx(head , 2, 6);
    printf("\nInserted\n");
    traversal(head);


    return 0;
}