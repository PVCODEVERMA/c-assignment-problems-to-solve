#include <stdio.h>

// Function to calculate factorial of a number
int fact(int n)
{
    int i, f = 1;

    for (i = 1; i <= n; i++)
        f = f * i;
    return f;
}

// Function to calculate combination C(n, r)
int comb(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));  // Corrected the formula
}

// Function to calculate permutation P(n, r)
int per(int n, int r)
{
    return fact(n) / fact(n - r);
}

int main()
{
    printf("Combination = %d\n", comb(10, 2));  // Added format specifier
    printf("Permutation = %d\n", per(10, 2));   // Added format specifier
    return 0;
}
