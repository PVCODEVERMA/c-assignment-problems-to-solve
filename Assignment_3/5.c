// Write a program to check whether a given number is a three digit number or not.

#include<stdio.h>
int main()
{
    int number;
    printf("Enter a number:\n");
    scanf("%d",&number);

    if((number > 99) && (number < 1000))
        printf("Number is three digit \n");
    else
    printf("Number is not three digit \n");
    return 0;
}