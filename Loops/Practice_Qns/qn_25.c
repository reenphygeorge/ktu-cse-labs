/*******************************************************************************

CREATOR - REENPHY GEORGE

TITLE - C program to display the cube of the number upto given an integer.

DATE - 24th AUGUST, 2021

*******************************************************************************/

#include<stdio.h>
int main()
{
    int n;
    printf("Input number of terms :");
    scanf("%d" , &n);
    for(int i=1 ; i<=n ; i++)
    {
        printf("Number is : %d and cube of the %d is :%d \n" , i , i , (i*i*i));
    }
    return 0;
}