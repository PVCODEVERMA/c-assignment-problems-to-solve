//Write a program to find the greatest among three given numbers. Print number once if the greatest number appears two or three times..


#include<stdio.h>
int main()
{
    int a= 10 , b=20, c=30;

    if((a>b) && (a>c))
        printf("%d is greatest\n", a);
        else if((b>a) && (b<c))
            printf("%d is not greatest\n ",b);
        else if((a == b) || (b == c) || (a == c))
            printf("Greatest number is request !\n");
    
    printf("%d id greatest number\n",c);
    return 0;
}