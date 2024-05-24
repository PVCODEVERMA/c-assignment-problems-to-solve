// Write a program to take marks of 5 subjects from the user.Assume marks are given out of 100 and passing marks is 33. Now display whether the candidate passed the examination or failed.
#include <stdio.h>
int main()
{
    int s1, s2, s3, s4, s5, total_marks, percentage;
    printf("Enter Marks: \n");
    scanf("%f%f%f%f%f", &s1, &s2, &s3, &s4, &s5);

    total_marks = s1 + s2 + s3 + s4 + s5;
    printf("Total Marks is %f\n", total_marks);

    percentage = (total_marks / 500) * 100;
    printf("Percentage is %f\n", percentage);
    return 0;
}