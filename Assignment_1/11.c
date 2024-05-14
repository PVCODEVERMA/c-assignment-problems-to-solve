// WAP to take time as an input in below given format and convert the time format and
// display the result as given below.
// User Input date format – “HH:MM”
// Output format – “HH hour and MM Minute”
// Example –
// “11:25” converted to “11 Hour and 25 Minute”


#include<stdio.h>
int main()
{
    int day ,month, year, hour, min;
    printf("Enter Day month year \n");
    scanf("%d/%d/%d", &day, &month, &year);
    
    printf("Day = %d, Month = %d, Year = %d \n", day,month,year);

    printf("Enter time in HH:MM fromat \n");
    scanf("%d:%d", &hour, &min);

    printf("Hour = %d, Minute =%d\n",hour,min);
    


}