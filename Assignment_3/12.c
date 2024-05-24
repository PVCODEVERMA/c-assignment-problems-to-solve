// Write a program to check whether a given alphabet is in uppercase or lowercase.

#include <stdio.h>
int main()
{
    int check = 'a';

    // if((check >= 'A') && (check <= 'Z'))
    //     printf("Upper\n");
    // else if((check >= 'a') && (check <= 'z'))
    //     printf('Lower\n');

    if ((check >= 65) && (check <= 90))
        printf("Upper\n");
    else if ((check >= 97) && (check <= 122))
        printf("Lower\n");

    return 0;
}