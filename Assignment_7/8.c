#include<stdio.h>
int main()
{
    int l,u,x, i;
    printf("Enter two numbers");
    scanf("%d%d",&l,&u);
    for(x=l+1;x<=u-l;x++){
        for(i=2;i<x;i++)
            if(x%i == 0)
            break;
        if(i==x)
            printf("%d", x);
    }
    return 0;
}