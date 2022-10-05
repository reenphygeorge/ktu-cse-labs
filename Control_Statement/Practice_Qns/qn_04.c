/*********************************************************************

CREATOR - REENPHY GEORGE

TITLE - C program to check for profit or loss and to determine the it.
DATE - 9th AUGUST, 2021

*********************************************************************/

#include<stdio.h>

int main()
{
    int sp , cp;
    printf("Enter the cost price: ");
    scanf("%d" , &cp);
    printf("Enter the selling price: ");
    scanf("%d" , &sp);
    if(sp > cp)
    {
        printf("The seller has made a profit of Rs %d /-\n\n" , sp - cp);
    }
    else if(sp < cp)
    {
        printf("The seller has made a loss of Rs %d /-\n\n" , cp - sp);
    }
    else
    {
        printf("The seller has not made any profit or loss\n\n");
    }
    return 0;
}