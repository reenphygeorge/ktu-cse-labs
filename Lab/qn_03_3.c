/*******************************************************************************

CREATOR - REENPHY GEORGE

TITLE - C program to read radius of a circle and display it's area.

DATE - 26th AUGUST, 2021

*******************************************************************************/

#include<stdio.h>

int main()
{
    float r , area;
    printf("Enter the radius of circle: ");
    scanf("%f" , &r);
    area = (22 * r * r) / 7;
    printf("Area of the circle is %f" , area);
    return 0;
}