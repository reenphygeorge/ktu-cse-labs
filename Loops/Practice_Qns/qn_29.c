/*******************************************************************************

CREATOR - REENPHY GEORGE

TITLE - C program to check the given number is a Perfect Number or Not..

DATE - 25th AUGUST, 2021

*******************************************************************************/
#include<stdio.h>

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d" , &n);
    int sum = 0;
    for(int i=1 ; i<=n/2 ; i++)
    {
        if(n % i == 0)
        {
            sum += i;
        }
    }
    if(sum == n)
    {
        printf("Entered number is a Perfect Number");
    }
    else
    {
        printf("Entered number is not a Perfect Number");
    }
    return 0;
}