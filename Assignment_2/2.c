// Write a program to print a given number without its last digit.

#include <stdio.h>
int main()
{
    int x;
    printf("Enter the Number\n");
    scanf("%d",&x);
    printf("Number without its last digit\n%d",x/10);
    return 0;
}