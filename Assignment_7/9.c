// #include<stdio.h>
// int main()
// {
//     int n, arm = 0, r,c;
//     printf("Enter any Number: ");
//     scanf("%d",&n);
//     c=n;
//     while(n>0)
//     {
//         r = n%10;
//         arm = (r*r*r)+arm;
//         n=n/10;
//     }
//     if(c==arm)
//     printf("Armstrong Number");
//     else
//     printf("NOT");
//     return 0;
// }

#include <stdio.h>
#include <math.h>
int main()
{
    int x = 15, count = 0,
    sum = 0;
    int n = x;
    while (n != 0)
    {
        n = n / 10;
        count++;
    }
    n = x;
    while (n != 0)
    {
        sum = sum + pow(n % 10, count);
        n = n / 10;
    }
    if (x == sum)
        printf("yes\n\n");
    else
        printf("Not\n\n");
    return 0;
}