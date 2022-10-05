/****************************************************************

CREATOR - REENPHY GEORGE

TITLE - C program to find the absolute value of an entered number.

DATE - 9th AUGUST, 2021

****************************************************************/

#include<stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d" , &n);
    if(n > 0)
    {
        printf("Absolue value is: %d",n);
    }
    else if(n < 0)
    {
        n *= -1;
        printf("Absolue value is: %d",n);
    }
    return 0;
}