/*******************************************************************************

CREATOR - REENPHY GEORGE

TITLE - C program to read a Binary Number from the user and Convert it into Decimal.

DATE - 24th AUGUST, 2021

*******************************************************************************/

#include<stdio.h>
#include<math.h>

int main()
{
    int b;
    printf("Enter the binary number: ");
    scanf("%d" , &b);
    int i=0 , n=0;
    while(b > 0)
    {
        n += (b%10) * ((int)(pow(2,i)));
        i++;
        b /= 10;
    }
    printf("The decimal equivalent is: %d" , n);
    return 0;
}