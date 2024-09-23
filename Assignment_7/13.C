#include<stdio.h>
int main()
{
    int i,j;
    char n = 'A';
    for(i=0; i<4;i++){
        n='A';
        for(j=0; j<7; j++)
        {
            if(j==4&& i==0)
            {
                n = n-2;
                printf("%c",n);
            }
            else if(j>=0 && j<=3-i)
                    printf("%c",n++);
            else if(j>=3+i && j<=6)
                    printf("%c",--n);
            else
                    printf(" ");
        }
        printf("\n");
    }
    return 0;
}