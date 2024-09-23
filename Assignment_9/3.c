#include<stdio.h>
int main()
{
    int day;
    printf("Enter day number (1-7): ");
    scanf("%d", &day);

    switch(day){
        case 1:
                printf("Happy Sunday!\n");
                break;
        case 2:
                printf("Motivational Monday!\n");
                break;
        case 3:
                printf("Terrific Tuesday!\n");
                break;
        case 4:
                printf("Wonderful Wednesday\n");
                break;
        case 5:
                printf("Thrilling Thursday!\n");
                break;
        case 6:
                printf("Fun Friday!\n");
                break;
        case 7:
                printf("supper Saturday\n");
                break;
        case 8:
                printf("Invalid day\n");
                break;

    }
    return 0;
}