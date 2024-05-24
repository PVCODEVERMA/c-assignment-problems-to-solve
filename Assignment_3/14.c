// Write a program to check whether a given number is divisible by 7 or divisible by 3.

#include <stdio.h>
int main()
{
    int number;
    printf("Enter a number: \n");
    scanf("%d",&number);

    if ((number % 7 == 0) ^ (number % 3 == 0))
    {
        printf("Divisible by 3");
    }
    else
    {
        printf("Divisible by 2");
    }

    return 0;
}