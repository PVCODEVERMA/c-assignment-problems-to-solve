// Write a program to print the fist N even natural numbers

#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            printf("Even Number = %d\n", i);
        }
    }

    return 0;
}