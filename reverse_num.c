#include <stdio.h>

int main()
{
    int num = -958;
    int new_num = 0;
    int rem;
    while (num > 0 || num < 0)
    {
        rem = num % 10;
        num = num / 10;
        new_num = new_num * 10 + rem;
    }
    printf("%d" , new_num);
    return 0;
}