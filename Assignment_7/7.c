#include<stdio.h>
int main()
{

    int i, N, flag, a=10, b=30;

    for(N = a; N <= b; N++)
    {
        flag = 0;
        for (i = 2; i <= N/2; i++)
        {
            if(N%i == 0)
            {
                flag++;
                break;
            }
        }
        if(flag == 0 && N != 1)
        {
            printf("%d", N);
        }
        return 0;
    }
}
