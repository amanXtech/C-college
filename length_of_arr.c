#include<stdio.h>

int main()
{
    int arr[] = {1,2,3,4,5,6,7,89};
    int length = sizeof(arr) / sizeof(arr[0]);
    printf("The length is : %d" , length);
    return 0;
}