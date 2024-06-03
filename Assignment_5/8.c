// Write a program to print the first N even natural numbers in reverse order

#include<stdio.h>
int main()
{
    int i,n=20;

    for(i=n-1; i>=1; i--)
    {
        if(i*2+1)
        {
            if(i%2==0){
                printf("%d\n",i);
            }
        }
            
        
        
        
        
    }
}