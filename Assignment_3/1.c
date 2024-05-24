// Write a program to check whether a given number is positive or non positive.

#include<stdio.h>
int main()
{
    int x;
    printf("Enter two number\n");
    scanf("%d",&x);

    if( x> 0)
        printf("Number is positive \n");
    else if( x<0)
        printf("Number is negative \n");
    else
        printf("Number is zero");
    return 0;

}