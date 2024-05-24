// Write a program to check whether a given year is a leap or not.
//Conditions
//Divisible by 4
//Not divisible by 100
//Divisible by 400
// ((year%4==0) && (year%100 !==0)) || (year%400 ==0)

#include<stdio.h>
int main()
{
    int year;
    printf("Enter leap year: \n");
    scanf("%d",&year);

    if(((year%4==0) && (year%100 != 0)) || (year%400 ==0 ))
        printf("%d is a leap year\n", year);
    else
        printf("%d is not leap year\n", year);
    return 0;
}

