#include <stdio.h>

int main()
{
    int choice, a, b;

    printf("Menu:\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);
        printf("Result: %d\n", a + b);
        break;
    case 2:
        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);
        printf("Result: %d\n", a - b);
        break;
    case 3:
        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);
        printf("Result: %d\n", a * b);
        break;
    case 4:
        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);
        if (b != 0)
            printf("Result: %.2f\n", (float)a / b);
        else
            printf("Cannot divide by zero\n");
        break;
    case 5:
        printf("Exiting...\n");
        break;
    default:
        printf("Invalid choice\n");
    }
    return 0;
}
