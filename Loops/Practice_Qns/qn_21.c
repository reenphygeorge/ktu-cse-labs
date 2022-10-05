/*******************************************************************************

CREATOR - REENPHY GEORGE

TITLE - C program to find the number and sum of all integer between 100 and
        200 which are divisible by 9.

DATE - 24th AUGUST, 2021

*******************************************************************************/

#include<stdio.h>
 int main()
 {
    int sum=0; 
    for(int i=100;i<=200;i++)
    {
        if(i%9==0)
        { 
            printf("%d ",i);
            sum+=i;
        }
    }
    printf("\nThe sum: %d",sum);
    return 0;
 }