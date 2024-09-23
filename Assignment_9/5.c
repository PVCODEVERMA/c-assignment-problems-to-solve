#include<stdio.h>
int main()
{
    int var;
    printf("Enter a number: ");
    scanf("%d",&var);

    switch(var){
        case 1:
                printf("Good\n");
                
        case 2:
                printf("better\n");
        case 3:
                printf("best\n");
        default:
                printf("Invalid\n");

    }
    return 0;
}