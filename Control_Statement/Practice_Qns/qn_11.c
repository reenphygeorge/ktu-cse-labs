/**********************************************************************************

CREATOR - REENPHY GEORGE

TITLE - C program to check whether a triangle is Equilateral, Isosceles or Scalene.

DATE - 9th AUGUST, 2021

**********************************************************************************/

#include<stdio.h>

int main()
{
    int a , b , c;
    printf("Enter the length of first side: ");
    scanf("%d" , &a);
    printf("Enter the length of second side: ");
    scanf("%d" , &b);
    printf("Enter the length of third side: ");
    scanf("%d" , &c);
    if(a == b && b == c)
    {
        printf("\nIt's an Equilateral Triangle\n\n");
    }
    else if(a == b || b == c || a == c)
    {
        printf("\nIt's an Isosceles Triangle\n\n");
    }
    else
    {
        printf("\nIt's a Scalene Triangle\n\n");
    }
    return 0;
}