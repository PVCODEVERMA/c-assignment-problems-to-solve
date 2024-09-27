#include <stdio.h>

float area(float radius)
{
    return 3.14 * radius * radius;
}
int main()
{
    int r = 5;
    printf("Area = %f\n\n", area(r));
    return 0;
}
