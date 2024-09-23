#include<stdio.h>
int main()
{
    int num;

    printf("Enter a number even: ");
    scanf("%d",&num);

    switch (num % 2 == 0){
        case 1: 
                num = num + 1;
                printf("The upper nearest add number is: %d\n", num);
                break;

        case 0:
                printf("The number is not even\n");
                break;
    }
    return 0;
}