#include<stdio.h>
int main()
{
    int N, sum;
    printf("Enter a positive integer: ");
    scanf("%d",&N);

    sum = N * (N + 1) / 2;
    printf("The sum of the first %d natural numbers is : %d\n", N,sum);

    return 0;
}