/********************************************************

CREATOR - REENPHY GEORGE

TITLE - C program to determine the youngest of the three.

DATE - 10th AUGUST, 2021

********************************************************/

#include<stdio.h>

int main()
{
    int r_age , s_age , a_age;
    printf("Enter the age of Ram: ");
    scanf("%d" , &r_age);
    printf("Enter the age of Shyam: ");
    scanf("%d" , &s_age);
    printf("Enter the age of Ajay ");
    scanf("%d" , &a_age);
    if(r_age < s_age)
    {
        if(r_age < a_age)
        {
            printf("\nRam is the youngest\n\n");
        }
        else
        {
            printf("\nAjay is the youngest\n\n");
        }
    }
    else
    {
        if(s_age < a_age)
        {
            printf("\nShyam is the youngest\n\n");
        }
        else
        {
            printf("\nAjay is the youngest\n\n");
        }
    }
    return 0;
}