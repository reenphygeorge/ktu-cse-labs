// Program to find the area of a circle //

#include <stdio.h>
#define PI 3.14
int main()
{
    int r;
    float area;
    printf("Enter the radius of the circle: ");
    scanf("%d", &r);
    area = PI * r * r;
    printf("Area of the circle = %f", area);
    return 0;
}
