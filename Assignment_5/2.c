// Write a program to print the first N natural numbers.

#include<stdio.h>
int main()
{
    int i,n=20, nat;
    if(n<0){
        printf("Please a enter natural number\n");
    }else{
        for(i=1; i<=n; i++)
        nat += i;
        printf("Fast number= %d, is natural = %d",n, nat );
    }
    return 0;
}