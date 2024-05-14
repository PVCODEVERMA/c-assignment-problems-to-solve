// WAP to find the area of the circle. Take radius of circle from user as input and print the result in below given format.
// Area = pir^2 = 3.14*r*r;

#include <stdio.h>
int main()
{
    float radius, area;
    printf("Enter the radius of the circle\n");
    scanf("%f", &radius);

    area = 3.14 * radius * radius;
    printf("Area of the circle is %f and readius is %f", area, radius);
    
    return 0;
}
