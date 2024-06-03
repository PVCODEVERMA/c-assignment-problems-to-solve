// The program will print the first 5 odd natural numbers followed by the same numbers in reverse order in c
#include <stdio.h>

int main()
{
    int N = 10;

    for (int i = N-1; i >= 0; i--)
    {
        printf("%d \n", 2 * i+1);
    }

    return 0;
}
