// Write a program to print a table of N.

#include <stdio.h>
int main()
{
    int i, n = 2;
    for (i = 1; i <= 10; i++)
    {
        printf("Number = %d, for Table = %d\n", n, i, n * i);
        }
    return 0;
}