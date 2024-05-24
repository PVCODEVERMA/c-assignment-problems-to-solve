//Write a program which takes the length of the sides of triangle as an input. Display whether the triangle is valid or not.


#include<stdio.h>
int main()
{ 
    int a,b,c;
    printf("Enter a number: \n");
    scanf("%d%d%d",&a,&b,&c);

    if(a + b > c){
        printf("Triangle is length in c");
    }else if(a + c > b){
        printf("Triangle is length in  b");
    }else if(b + c > a){
        printf("Triangle is length in a");
    }else{
        printf("Invalid input");
    }
    return 0;
}