#include<stdio.h>
int main()
{
    int i,sum = 0, N;
    printf("Enter a natural number: ");
    scanf("%d",&N);

    for(i=1; i<=N; i++){
        sum = sum + i * i ;

    }
    printf("Sum is %d", sum);
}