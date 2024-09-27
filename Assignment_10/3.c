#include <stdio.h>
int evenOrOdd(int n)
{
    return (n % 2 == 0);
}
int main()
{
    if (evenOrOdd(5) == 1)
    {
        printf("Even\n\n");
    }
    else
        printf("Odd\n\n");
}