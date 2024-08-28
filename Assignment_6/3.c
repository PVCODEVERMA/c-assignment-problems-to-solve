#include<stdio.h>
int main()
{
    int i = 1,N,sum = 0;

    printf("Enter a natural number: ");
    scanf("%d",&N);

    while(i<=N){
        sum=sum+2*i-1;
        i++;

    }
    printf("sum is %d\n",sum);
    return 0;


}