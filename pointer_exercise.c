#include<stdio.h>

int main()
{
    // int x = 10;
    // int* ptr = &x;
    // printf("%p\n" , ptr); // address in hexa decimal form
    // printf("%u" , &x); // address in binary form
    // int arr[] = {1,2,3,4,5};
    // int* ptr = &arr[2];
    // printf("%d\n" , *ptr);
    int arr[] = {1,2,3,4,5};
    int* ptr = arr +3; // arr means arr[0] and +3 means arr[0 + 3]
    printf("%d\n" , *ptr);
    return 0;
}