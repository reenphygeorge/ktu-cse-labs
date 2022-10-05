/****************************************

CREATOR - REENPHY GEORGE

TITLE - C program to check for leap year.

DATE - 9th AUGUST, 2021

****************************************/

#include<stdio.h>

int main()
{
    int year;
    printf("Enter the year: ");
    scanf("%d" , &year);
    if((year % 100 == 0 && year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) 
    {
        printf("\n%d is a leap year\n\n" , year);
    }
    else
    {
        printf("\n%d is not a leap year\n\n" , year);
    }
    return 0;
}