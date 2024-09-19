#include <stdio.h>
int main()
{
    int n, i;
    printf("All prime number from 1 to 100 are as follows\n");

    for(n=1; n<=100; n++)
    {
        for(i=2; i<=n/2; i++)
        {
            if(n%i==0)
            break;
        }
        if(i>n/2)
            printf("%d\n",n);
    }
    return 0;
}