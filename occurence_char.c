#include<stdio.h>

int main()
{
    char str[100];
    printf("Enter the string\n");
    fgets( str , sizeof(str) , stdin);
    printf("Enter the char you want to find\n");
    char c;
    int count = 0;
    scanf("%c" , &c);
    for(int  i= 0 ; i < strlen(str) ; i++) {
        if(str[i] == c) {
            count++;
            printf("Your char is found at index %d \n" , i);
        }
    }
    printf("This char occured %d times \n" , count);
    return 0;
}