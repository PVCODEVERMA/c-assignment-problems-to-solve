// write a program to print the 10 odd natural numbers;

#include <stdio.h>

int main()
{
    int i;

    for (i = 1; i <= 10; i += 2)
    {
        printf("%d\n", i);
    }

    return 0;
}