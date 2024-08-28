#include <stdio.h>
int main()
{
    int f = 0, N, i = 2;
    printf("Enter a number:");
    scanf("%d", &N);

    for (i = 2; i < N; i++)
    {  % i == 0)
        {
            f = 1;
            break;
        }
    }
    if (f == 0)
        printf("prime");
    else
        printf("Not Prime");

    printf("%d",f);
    return 0;
}