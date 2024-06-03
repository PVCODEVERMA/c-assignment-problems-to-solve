// Write a program to print the first N odd natural numbers
#include <stdio.h>
int main()
{
    int i,N=2;

     for(int i = 1; i <= 2 * N; i++) {
        if(i % 2 != 0) {
            printf("%d \n", i);
        }
    }
    return 0;
}