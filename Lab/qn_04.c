/*******************************************************************************

CREATOR - REENPHY GEORGE

TITLE - C program to read 3 integer values and find the largest amoung them.

DATE - 26th AUGUST, 2021

*******************************************************************************/

#include<stdio.h>

int main()
{
    int n1 , n2 , n3;
    printf("Enter the first number: ");
    scanf("%d" , &n1);
    printf("Enter the second number: ");
    scanf("%d" , &n2);
    printf("Enter the third number: ");
    scanf("%d" , &n3);
    if(n1 > n2 && n1 > n3)
    {
        printf("Largest number is: %d" , n1);
    }
    else if(n2 > n3)
    {
        printf("Largest number is: %d" , n2);
    }
    else
    {
        printf("Largest number is: %d" , n3);
    }
    return 0;
}