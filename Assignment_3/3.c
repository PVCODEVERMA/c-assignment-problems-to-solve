// Write a program to check whether a given is an even number or odd number.


#include<stdio.h>
int main()
{
    int number;
    printf("Enter a number \n");
    scanf("%d",&number);

    if(number*2 == 0)
        printf("Number is even");
    else
    {
        printf("Number is odd");
    }

    return 0;
}