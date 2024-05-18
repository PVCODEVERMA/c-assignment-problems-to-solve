// Write a program to input a three digit number and display the sum of the digits.
// #include<stdio.h>
// int main()
// {
    
//     int x = 256, b = 0;
//     b = x%10;
//     x = x/10;
//     b = (x%10)+b;
//     x = x/10;
//     b = x+b;
//     printf("sum=%d",b);
//     return 0;
// }

#include<stdio.h>
int main()
{
    int number,a,b,c,sum;

    printf("Enter a three-digit number:");
    scanf("%d",&number);
    a = a/100;
    b = (a/10) %10;
    c = number % 10;

    sum = a + b + c;
    printf("Sum of digits: %d\n",sum);
    return 0;
}