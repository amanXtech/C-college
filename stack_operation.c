#include <stdio.h>
#include <stdlib.h>

typedef struct stack
{
    int size;
    int top;
    int *arr;
} stack;

int isFull(stack *ptr)
{
    return ptr->top == ptr->size - 1;
}

int isEmpty(stack *ptr)
{
    return ptr->top == -1;
}

void push(stack *ptr, char val)
{
    if (!isFull(ptr))
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
        return;
    }
    else
    {
        printf("Stack is full\n");
        return;
    }
}

int pop(stack *ptr)
{
    if (!isEmpty(ptr))
    {
        int el = ptr->arr[ptr->top];
        ptr->top--;
        return el;
    }
    else
    {
        printf("Stack is empty\n");
        return -1;
    }
}

int peak(stack *ptr, int i)
{
    if (ptr->top - i + 1 < 0)
    {
        printf("This position is invalid\n");
        return -1;
    }
    else
    {
        return ptr->arr[ptr->top - i + 1];
    }
}

int main()
{
    stack *s = (stack *)malloc(sizeof(stack));
    if (s == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }
    // printf("Enter the size of stack\n");
    // scanf("%d", &(s->size));
    s->size = 20;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));
    push(s, 1);
    push(s, 2);
    push(s, 3);
    push(s, 4);
    push(s, 5);
    push(s, 6);
    push(s, 7);
    push(s, 8);
    push(s, 9);
    push(s, 10);

    // printf("%d\n" , s ->arr[0]);
    printf("Popped element is : %d\n", pop(s));
    printf("Popped element is : %d\n", pop(s));
    printf("Popped element is : %d\n", pop(s));
    printf("Popped element is : %d\n", pop(s));
    printf("Popped element is : %d\n", pop(s));
    printf("Element at %d position is %d\n" , 3 , peak(s , 3));

    return 0;
}