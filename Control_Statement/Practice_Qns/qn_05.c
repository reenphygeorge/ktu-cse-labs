/******************************************************

CREATOR - REENPHY GEORGE

TITLE - C program to find the eligibility of admission.

DATE - 9th AUGUST, 2021

******************************************************/

#include<stdio.h>

int main()
{
    int p , c , m;
    printf("Enter the marks obtained in Physics: ");
    scanf("%d" , &p);
    printf("Enter the marks obtained in Chemistry: ");
    scanf("%d" , &c);
    printf("Enter the marks obtained in Maths: ");
    scanf("%d" , &m);
    if((m >= 65 && p >= 55 && c >= 50 && p+c+m >= 190)|| p+m >= 140)
    {
        printf("\nCongrats!!\nYou are eligible for the course\n\n");
    }
    else
    {
        printf("\nSorry\nYou are not eligible for the course\n\n");
    }
    return 0;
}