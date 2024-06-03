// Write a program to print the first N even natural numbers

#include<stdio.h>
int main()
{
    int i,n=10;

    for(i=1; i<=n; i++)
    {
        if(i%2 == 0){
            printf("%d\n",i);
        }
    }
}