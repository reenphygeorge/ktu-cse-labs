/*******************************************************************************

CREATOR - REENPHY GEORGE

TITLE - C program to display sum of two numbers.

DATE - 26th AUGUST, 2021

*******************************************************************************/

#include<stdio.h>

int main()
{
    int n1 , n2 , sum=0;
    printf("Enter the first number: ");
    scanf("%d" , &n1);
    printf("Enter the second number: ");
    scanf("%d" , &n2);
    sum = n1 + n2;
    printf("Sum of %d and %d is %d" , n1 , n2 , sum);
    return 0;
}