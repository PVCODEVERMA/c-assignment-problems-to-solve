#include<stdio.h>
int main()
{
    int N, i= 1, sum = 0;

    printf("Enter a positive value: ");
    scanf("%d",&N);

    for(int i = 1; i <= N; i++) {
        sum += 2 * i;
    }
    printf("The sum of fist %d even natural numbers is: %d\n", N, sum);
    return 0;
    

}