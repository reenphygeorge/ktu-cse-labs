/*******************************************************************************

CREATOR - REENPHY GEORGE

TITLE - C program to read a natural number and 
        check whether the number is Armstrong or not.

DATE - 26th AUGUST, 2021

*******************************************************************************/

#include<stdio.h>
#include<math.h>

int main()
{
    int n , sum = 0;
    printf("Enter the number: ");
    scanf("%d" , &n);
    int temp = n;
    while(temp != 0)
    {
        sum += pow((temp % 10) , 3);
        temp /= 10;
    }
    if(sum == n)
    {
        printf("%d is an Armstrong Number" , n);
    }
    else
    {
        printf("%d is not an Armstrong Number" , n);
    }
    return 0;
}