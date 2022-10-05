/******************************************

CREATOR - REENPHY GEORGE

TITLE - C program to accept a grade and 
        declare the equivalent description.

DATE - 9th AUGUST, 2021

******************************************/

#include<stdio.h>

int main()
{
    char grade;
    printf("Enter the grade: ");
    scanf("%c" , &grade);
    switch (grade)
    {
        case 'E':
            printf("\nExcellent\n\n");
            break;
    
        case 'V':
            printf("\nVery Good\n\n");
            break;

        case 'G':
            printf("\nGood\n\n");
            break;

        case 'A':
            printf("\nAverage\n\n");
            break;

        case 'F':
            printf("\nFail\n\n");
            break;    
        default:
            printf("\nInvalid Grade!!\nTry Again\n\n");
    }
    return 0;
}