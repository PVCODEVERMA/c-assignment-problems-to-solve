// Write a program to check whether given number is divisible by 5 or not

#include<stdio.h>
int main()
{
    int number;
    printf("Enter a number \n");
    scanf("%d",&number);

    if((number%5) ==0)
        printf("Number is divisible \n");
    else
        printf("Number is not divisible \n");

        return 0;
}