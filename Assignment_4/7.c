// Write a program to print the first N even number natural numbers in reverse order.

// #include<stdio.h>
// int main()
// {
//     int i,n = 10;

//     for(i=n; i>=2; i-=2)
//     {
//             printf("Ever natural number = %d\n",i);
//     }

//     return 0;
// }


#include<stdio.h>
int main()
{
    int n=10;

    while(n){
        printf("%d\n",2*n);
        n--;
    }
    getch();
}