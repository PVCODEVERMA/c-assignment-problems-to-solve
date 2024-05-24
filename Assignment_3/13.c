//Write a program to check whether a given number is divisible by 3 and divisible by 2.


#include<stdio.h>
int main()
{
    int  number = '10';

    if((number%3 == 0) && (number%2 == 0)){
        printf("Divisible by 3");
    }else{
        printf("Divisible by 2");
    }
        

        return 0;
}