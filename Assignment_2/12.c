// Write a program to take a three digit number from the user and rotate its digits by
// one position towards the right.

// #include<stdio.h>
// int main()
// {
//     int x = 123 , R, temp;
//     R = x%10;
//     temp = x/10;
//     x = (R*100)+temp;
//     printf("%d",x);
  
//     return 0;
// }

#include <stdio.h>

int main() {
    int number, originalNumber, rotatedNumber;

   
    printf("Enter a three-digit number: ");
    scanf("%d", &number);

 
    originalNumber = number;

    int digit1 = number / 100;
    int digit2 = (number / 10) % 10;
    int digit3 = number % 10;

    rotatedNumber = digit3 * 100 + digit1 * 10 + digit2;

    
    printf("Original number: %d\n", originalNumber);
    printf("Rotated number: %d\n", rotatedNumber);

    return 0;
}
