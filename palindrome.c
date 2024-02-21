#include<stdio.h>

int main()
{
    char str[10] = "madammerry";
    int length = strlen(str);
    int count = 0;
    for(int i = 0 ; i < length/2; i++) {
        if(str[i] != str[length-i-1]) {
            count++;
        }
    } 
    if(count == 0) {
        printf("String is pallindrome\n");
    }
    else {
        printf("String is not Pallindrome");
    }
    return 0;
}