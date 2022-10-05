/*************************************************************

CREATOR - REENPHY GEORGE

TITLE - C program to check whether a triangle is valid or not.

DATE - 9th AUGUST, 2021

**************************************************************/

#include<stdio.h>

int main()
{
    int a , b , c;
    printf("First angle: ");
    scanf("%d" , &a);
    printf("Second angle: ");
    scanf("%d" , &b);
    printf("Third angle: ");
    scanf("%d" , &c);
    if(a + b + c == 180)
    {
        printf("\nTriangle is valid\n\n");
    }
    else
    {
        printf("\nTriangle is'nt valid\n\n");
    }
    return 0;
}