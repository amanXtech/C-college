#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node;

int isEmpty(node *top)
{
    return top == NULL;
}

int isFull(node *top)
{
    node *p = (node *)malloc(sizeof(node));
    return p == NULL;
}

node *push(node *top, int val)
{
    node *ptr = (node *)malloc(sizeof(node));
    if (ptr == NULL)
    {
        printf("Stack overflow\n");
    }
    else
    {
        ptr->data = val;
        ptr->next = top;
        top = ptr;
    }
    return top;
}

int pop(node **top)
{
    if (isEmpty(*top))
    {
        printf("Stack underflow\n");
        return -1;
    }
    else
    {
        node *ptr = *top;
        int n = ptr->data;
        *top = (*top)->next;
        free(ptr);
        return n;
    }
}

void traverse(node * top) {
    if(isEmpty(top)) {
        printf("Stack underflow\n");
        return;
    }
    else {
        node * ptr = top;
        while( ptr  != NULL) {
            printf("%d  " , ptr -> data);
            ptr = ptr -> next;
        }
        return;
    }
}

int peak(int pos , node * top) {
    node * ptr = top;
    int count = 0;
    while(count < pos -1 && ptr != NULL) {
        ptr = ptr -> next;
        count++;
    }
    return ptr -> data;
}


int main()
{
    node *top = (node *)malloc(sizeof(node));
    top = NULL;

    top = push(top , 1);
    top = push(top , 2);
    top = push(top , 3);
    top = push(top , 4);
    top = push(top , 5);
    top = push(top , 6);

    // if (isEmpty(top))
    // {
    //     printf("Stack underflow\n");
    // }
    // if (isFull(top))
    // {
    //     printf("Stack overflow\n");
    // }
    traverse(top);

    // printf("\nPopped %d \n" , pop(&top));
    // printf("\nPopped %d \n" , pop(&top));
    // printf("\nPopped %d \n" , pop(&top));
    // printf("\nPopped %d \n" , pop(&top));
    // printf("\nPopped %d \n" , pop(&top));
    // printf("\nPopped %d \n" , pop(&top));
    // traverse(top);
    printf("Element at 3 is %d \n" , peak(3 ,top));

    return 0;
}