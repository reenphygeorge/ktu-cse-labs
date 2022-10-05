/*******************************************************************************

CREATOR - REENPHY GEORGE

TITLE - C program to print Solid Half Diamond pattern printing using stars.

DATE - 25th AUGUST, 2021

*******************************************************************************/

#include<stdio.h>

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d" , &n);
    for(int i=1 ; i<=n ; i++)
    {
        for(int j=1 ; j<=i ; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for(int i=(n-1) ; i>=1 ; i--)
    {
        for(int j=1 ; j<=i ; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}