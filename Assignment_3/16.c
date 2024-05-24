//Write a program to check whether a given character is an alphabet (uppercase), an alphabet (lower case), a digit or a special character.


#include<stdio.h>
int main()
{
    int check = 'a';

    if((check >= 65) && (check <= 90))
        printf("Upper\n");
    else if((check >= 97) && (check <= 122))
        printf("Lower\n");
    else if((check >= 48) && (check < 57))
        printf("Digit\n");
    else
        printf("Special Character");
    
    return 0;

}