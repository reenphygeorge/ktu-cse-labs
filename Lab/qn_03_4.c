/*******************************************************************************

CREATOR - REENPHY GEORGE

TITLE - C program to evaluate the arithmetic expression 
        ((a - b / c * d + e) * (f + g)) and display its solution.

DATE - 26th AUGUST, 2021

*******************************************************************************/

#include<stdio.h>

int main()
{
    float a , b , c , d , e , f , g , result;
    printf("Enter the value of a: ");
    scanf("%f" , &a);
    printf("Enter the value of b: ");
    scanf("%f" , &b);
    printf("Enter the value of c: ");
    scanf("%f" , &c);
    printf("Enter the value of d: ");
    scanf("%f" , &d);
    printf("Enter the value of e: ");
    scanf("%f" , &e);
    printf("Enter the value of f: ");
    scanf("%f" , &f);
    printf("Enter the value of g: ");
    scanf("%f" , &g);
    result = ((a - b / c * d + e) * (f + g));
    printf("The result is: %f" , result);
    return 0;
}