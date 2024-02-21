#include<stdio.h>

int main()
{
    char str[100];
    printf("Enter the string : ");
    fgets(str , sizeof(str) , stdin);
    printf("String is : %s" , str);
    return 0;
}