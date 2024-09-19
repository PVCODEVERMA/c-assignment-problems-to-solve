#include <stdio.h>
int main()
{
    int num, a = 0, b = 1, c, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        c = a + b;
        a = b;
        b = c;
     printf("The %d  fibonacci number is  %d\n", num, b);
    }
   
    return 0;
}