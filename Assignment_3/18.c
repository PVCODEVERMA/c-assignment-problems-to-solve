//Write a program which taken the month number as an input and display number of days in that month.
// 1 -31, 2-28/29, 3- 31, 4-30, 5-31,6 -

#include<stdio.h>
int main()
{
    int month_number;
    printf("Enter Month Number: \n");
    scanf("%d",&month_number);

    switch (month_number){
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        printf("number of days: 31\n");
        break;
        case 4: case 6: case 9: case 11:
        printf("Number of days: 30\n");
        break;
        case 2:
        printf("Number of days: 28 or 29 (leap year)\n");
        break;
        default:
        printf("Invalid month number. Please enter a valid value (1-12).\n");
        
    }
    return 0;
}