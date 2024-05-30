//Write a program to print cubes of the first N natural  numbers

#include<stdio.h>
int main()
{
    int i;
    for(i=1; i<=10; i++)
    {
        printf("Natural number = %d, of cubes number = %d\n",i,i*i*i);
    }
    return 0;
}