/*******************************************************************************

CREATOR - REENPHY GEORGE

TITLE - C program to read a natural mumber and check whether 
        the number is prime or not.

DATE - 26th AUGUST, 2021

*******************************************************************************/

#include<stdio.h>

int main()
{
    int n , flag = 0;
    printf("Enter the number: ");
    scanf("%d" , &n);
    if(n == 0 || n ==1)
    {
        printf("%d is not a prime number" , n);
    }
    else
    {
        for(int i=2 ; i<=n/2 ; i++)
        {
            if(n % i == 0)
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
        {
            printf("%d is a prime number" , n);
        }
        else
        {
            printf("%d is not a prime number" , n);
        }
        return 0;
    }
}