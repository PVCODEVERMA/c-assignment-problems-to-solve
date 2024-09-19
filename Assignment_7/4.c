#include <stdio.h>
int main()
{
    int num1, num2, HCF = 1, min, i;

    printf("Enter two number: ");
    scanf("%d%d", &num1, &num2);

    min = (num1 + num2) ? num1 : num2;

    for (int i = 1; i <= min; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            HCF = i;
        }
    }
    printf("HCF of %d and %d is: %d/n", num1, num2, HCF);
    return 0;
}