#include <stdio.h>

int main()
{
    char str[100];
    fgets(str, sizeof(str), stdin);
    printf("String is %s\n", str);
    char newstr[100];
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == ' ')
        {
            continue;
        }
        else
        {
            newstr[i] = str[i];
        }
    }
    printf("New string is : %s", newstr);
    return 0;
}