#include<stdio.h>

int main()
{
    char str[30];
    printf("Enter the string\n");
    fgets(str , sizeof(str) , stdin);
    printf("The string is : %s" , str);
    int vowels = 0;
    int consonants = 0;
    for(int i = 0; i< strlen(str) ; i++) {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' ||str[i] == 'u') {
            vowels++;
        }
        else {
            consonants++;
        }
    }
    printf("Number of Vowels are : %d\n" , vowels);
    printf("Number of Consonants are : %d\n" , consonants);
    return 0;
}