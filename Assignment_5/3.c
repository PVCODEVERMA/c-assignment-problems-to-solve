// Write a program to print the first N natural numbers in reverse order
#include <stdio.h>

int main()
{
    int i,n;
    printf("Enter a natural number: \n");
    scanf("%d",&n);

    if(n<0){
        printf("Please enter a natural number\n");
    }else{
        for(i=n; i>=1; i--)
        {
            printf("reverse number natural = %d\n",i);
        }
    }



    return 0;
}