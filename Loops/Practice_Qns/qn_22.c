/*******************************************************************************

CREATOR - REENPHY GEORGE

TITLE - C program to print the number pattern.

DATE - 24th AUGUST, 2021

*******************************************************************************/

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the no of rows: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        // Printing spaces //
        for(int j=1;j<=(n-i);j++)
        {
            printf(" ");
        }

        // Printing no in ascending order //
        for(int j=1;j<=i;j++)
        {
            printf("%d",j);
        }

        // Printing no in descending order //
        for(int j=(i-1);j>=1;j--)
        {
            printf("%d",j);
        }

        // Printing spaces //
        for(int j=1;j<=(n-i);j++)
        {
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}