/**************************************************

CREATOR - REENPHY GEORGE

TITLE - C program to display day name in the words.

DATE - 9th AUGUST, 2021

**************************************************/

#include<stdio.h>

int main()
{
    int day;
    printf("Enter the day in integer: ");
    scanf("%d" , &day);
    switch (day)
    {
        case 1:
            printf("\nMonday\n\n");
            break;
        case 2:
            printf("\nTuesday\n\n");
            break;
        case 3:
            printf("\nWednesday\n\n");
            break;
        case 4:
            printf("\nThursday\n\n");
            break;
        case 5:
            printf("\nFriday\n\n");
            break;
        case 6:
            printf("\nSaturday\n\n");
            break;
        case 7:
            printf("\nSunday\n\n");
            break;
        default:
            printf("\nWrong input!!\nTry again\n\n");
    }
    return 0;
}