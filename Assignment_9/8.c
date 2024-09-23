#include <stdio.h>
int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    switch (num > 0)
    {
    case 1:
        num = -num;
        printf("Converted number: %d\n", num);
        break;
    case 0:
        switch (num < 0)
        {
        case 1:
            num = -num;
            printf("converted number: %d\n", num);
            break;
        case 0:
            printf("Number is zero, no conversion needed.\n");
            break;
        }
        break;
    }
    return 0;
}