#include<stdio.h>

int main()
{
    char str[20] = "aman singh";
    int length = strlen(str);
    int i,j;
    printf("The string is : %s\n" ,str);
    for(i = 0 , j = length - 1; i<j ; i++ , j--) {
        char c = str[i];
        str[i] = str[j];
        str[j] = c;
    }
    printf("Reversed string is : %s\n" , str);
    return 0;
}