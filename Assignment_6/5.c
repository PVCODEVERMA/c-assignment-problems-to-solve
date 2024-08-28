#include<Stdio.h>
int main()
{
    int f = 1, i = 1,N;
    printf("Enter a number:" );
    scanf("%d",&N);

    for(i=1; i<=N;i++)
    {
        f = f * i;
    }
    printf("\n factorial of %d is %d",N,f);
    return 0;
}