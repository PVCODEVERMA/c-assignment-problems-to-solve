// Write a program to print size of an int, a float, a char and a double type variable

#include<stdio.h>
int main()
{
    printf("size of int is %d bytes\n",sizeof(int));
    printf("size of float is %d bytes\n",sizeof(float));
    printf("size of char is %d bytes\n",sizeof(char));
    printf("size of double is %d bytes\n",sizeof(double));
    return 0;
}