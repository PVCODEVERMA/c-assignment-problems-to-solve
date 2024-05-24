// Write a program to check whether roots of given quadratic equation are real & distinct, real & equal imaginary roots.
//ax^2 + bx + c = 0
// x ki values ko roots kehte hai
//discriminant

// if discriminant > 0
//     roots real
// discriminant == 0
//     roots equal
// discriminant < 0
//     roots imaginary


#include<stdio.h>
int main()
{

    double a,b,c,  discriminant, root1, root2 ,realPart, imagPart;
    printf("%1f %1f %1f",&a,&b,&c);

    //Discriminant = b*b - 4 * a *a *c
    discriminant = b*b - 4 * a *a *c;

    //condition for real and different roots
    if(discriminant > 0)
    {
        //real and distinct
        printf("Real and distinct\n");
    }

    else if (discriminant == 0)
    {
        //real and different roots
        printf("real and different roots\n");
    }

     //if roots are not real
    else
    {
        //root are not real
        printf("root are not real\n");
    }

    return 0;

}