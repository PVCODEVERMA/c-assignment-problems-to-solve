#include <stdio.h>

int fact(int n)
{
    int i, f = 1;

    for (i = 1; i <= n; i++)
        f = f * i;
    return f;
}

int main()
{
    printf("Factorial is = %d\n", fact(5));
    return 0;  // Proper return from main function
}
