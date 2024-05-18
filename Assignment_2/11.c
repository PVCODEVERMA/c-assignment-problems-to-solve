// Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR
// and convert it into USD.

#include<stdio.h>
int main()
{
    int INR = 100, USD = 0;
    USD = INR/76.23;
    printf("INR value = %d and USD value = %d",INR,USD);
    return 0;
}