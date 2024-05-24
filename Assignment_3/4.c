// Write a program to check whether a given number is an even number or an odd number without using % operator.

//note
// modulo operator % are time conguming  
//number = 15, 1111 & 0001 = 1
//number = 4 , 100 & 001 = 0

#include<stdio.h>
int main()
{
    int number;
    printf("Enter a number \n");
    scanf("%d",&number);

    if((number & 1) == 1)
    {
        printf("Number is odd \n");
    }
    else
    {
        printf("Number is even \n");
    }

    return 0;
}

// #include<stdio.h>
// int main()
// {
//     int number;
//     printf("Enter a number \n");
//     scanf("%d",&number);

//     if((number / 1) == 1)
//     {
//         printf("Number is odd \n");
//     }
//     else
//     {
//         printf("Number is even \n");
//     }

//     return 0;
// }