// Write a program to swap values of two int variables

#include<stdio.h>
int main(){
    int x = 5, y = 10, t;
    t = x;
    x= y;
    y= t;
    printf("x = %d\ny = %d",x,y);
    return 0;

}