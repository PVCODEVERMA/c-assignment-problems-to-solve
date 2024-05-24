//Write a program to check whether a given number is positive ,negative or zero.
#include<stdio.h>
int main()
{
    int number;
    printf("Enter a number \n");
    scanf("%d",&number);
    if(number > 0){
        printf("Positive number");
    }else if (number < 0){
        printf("Negative number");
    }else{
        printf("Zero");
    }

    return 0;
    
}