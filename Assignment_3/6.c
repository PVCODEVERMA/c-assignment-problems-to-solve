// write a program to print greater between two numbers. print one number if both are the same

#include <stdio.h>
int main()
{
    int number1, number2;
    printf("Enter a number:\n");
    scanf("%d", &number1);

    if (number1 > number2)
        printf("Number 1 is greater \n");
    else if (number1 == number2)
        printf("Number is not three digit \n");
    else
        printf("Both are equal \n");
    return 0;
}