// Write a program to check whether the given number is even or odd using a bitwise
// operator.

#include <stdio.h>

int main() {
    int num;

  
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num & 1) {
        printf("%d is an odd number.\n", num);
    } else {
        printf("%d is an even number.\n", num);
    }

    return 0;
}
