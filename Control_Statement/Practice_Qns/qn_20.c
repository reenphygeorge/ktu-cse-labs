/***************************************

CREATOR - REENPHY GEORGE

TITLE - C Program to check if all the three 
        points fall on one straight line.

DATE - 9th AUGUST, 2021

***************************************/

#include<stdio.h>

int main()
{
    int x1 , x2 , x3 , y1 , y2 , y3;
    printf("Enter the value of x1: ");
    scanf("%d" , &x1);
    printf("Enter the value of y1: ");
    scanf("%d" , &y1);
    printf("Enter the value of x2: ");
    scanf("%d" , &x2);
    printf("Enter the value of y2: ");
    scanf("%d" , &y2);
    printf("Enter the value of x3: ");
    scanf("%d" , &x3);
    printf("Enter the value of y3: ");
    scanf("%d" , &y3);
    if(((y1-y2) / (x1-x2)) == (y2-y3) / (x2-x3))
    {
        printf("The three points fall on the same line");
    }
    else
    {
        printf("The three points does'nt fall on the same line");
    }
    return 0;
}