#include<stdio.h>

void print(int n)
{
    int i;
    for(i=1; i<=n; i++)
    printf("%d ",i);
}

int main()
{
    print(10);
    return 0;
}