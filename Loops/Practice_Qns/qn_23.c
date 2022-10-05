/*******************************************************************************

CREATOR - REENPHY GEORGE

TITLE - C program to find the prime numbers within a range of numbers.

DATE - 24th AUGUST, 2021

*******************************************************************************/

#include<stdio.h>
int main()
{
    int s , n;
    printf("Enter the starting number of range: ");
    scanf("%d" , &s);
    printf("Enter the ending number of range: ");
    scanf("%d" , &n);
    printf("\nPrime numbers in the given range are: ");
    for(int i=s ; i<=n ; i++)
    {
        if(i == 0 || i == 1)
        {
            continue;
        }
        int flag = 0;
        for(int j=2 ; j<=i/2 ; j++)
        {
            if(i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
        {
            printf("%d " , i);
        }
    }
    return 0;
}