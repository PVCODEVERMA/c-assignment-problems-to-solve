#include <stdio.h>

int main() {
    int a, b, c, choice;
    
    printf("Menu:\n1. Isosceles Triangle\n2. Right-angled Triangle\n3. Equilateral Triangle\n4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    
    switch(choice) {
        case 1:
            printf("Enter three sides: ");
            scanf("%d %d %d", &a, &b, &c);
            if(a == b || b == c || a == c)
                printf("Isosceles Triangle\n");
            else
                printf("Not an Isosceles Triangle\n");
            break;
        case 2:
            printf("Enter three sides: ");
            scanf("%d %d %d", &a, &b, &c);
            if(a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a)
                printf("Right-angled Triangle\n");
            else
                printf("Not a Right-angled Triangle\n");
            break;
        case 3:
            printf("Enter three sides: ");
            scanf("%d %d %d", &a, &b, &c);
            if(a == b && b == c)
                printf("Equilateral Triangle\n");
            else
                printf("Not an Equilateral Triangle\n");
            break;
        case 4:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice\n");
    }
    return 0;
}
