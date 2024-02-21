#include <stdio.h>

int main()
{
    int size;
    printf("Enter the size\n");
    scanf("%d", &size);
    int arr[size];
    int *point = arr;
    printf("Enter the array elements\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", point + i);
    }
    printf("The array is\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", *(point + i));
    }
    return 0;
}