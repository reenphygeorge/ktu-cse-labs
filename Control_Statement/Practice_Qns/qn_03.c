/***************************************************************************

CREATOR - REENPHY GEORGE

TITLE - C program to read the age of a candidate and determine whether it is
        eligible for casting his/her own vote.

DATE - 9th AUGUST, 2021

***************************************************************************/

#include<stdio.h>

int main()
{
    int age;
    printf("Enter the age: ");
    scanf("%d" , &age);
    if(age >= 18)
    {
        printf("Congratulation! You are eligible for casting your vote.\n\n");
    }
    else
    {
        printf("\nSorry, You are'nt eligible for casting your vote.\n\n");
    }
    return 0;
}