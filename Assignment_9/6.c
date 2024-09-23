#include <stdio.h>
int main()
{
    int year=2024;
    switch (year % 100 == 0)
    {
    case 0:
        switch (year % 4 == 0)
        {
        case 0:
            printf("Non Leap year\n\n");
            break;

        case 1:
            printf("Leap year\n\n");
            break;
        }
        break;

    case 1:
        switch (year % 400 == 0)
        {
        case 0:
            printf("Non Leap year\n\n");
            break;

        case 1:
            printf("Leap year\n\n");
            break;
        }
    }
    return 0;
}