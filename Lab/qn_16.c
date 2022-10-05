/**************************************************************************************************

CREATOR - REENPHY GEORGE

TITLE - Find the factorial of a given Natural Number n using recursive and non recursive functions

DATE - 13th SEPTEMBER, 2021

**************************************************************************************************/

#include<stdio.h>

// Recursive Function //
int rec_fact(int n)
{
    // Base Case //
    if(n == 1)
    {
        return 1;
    }

    // Recursive Function Call //
    int prev_fact = rec_fact(n-1);

    // Generalised Condition //
    return n * prev_fact;
}

// Non Recursive Function //
int fact(int n)
{
    int f=1;
    for(int i=1 ; i<=n ; i++)
    {
        f *= i;
    }
    return f;
}

// Main Function //
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d" , &n);
    int fact1 = rec_fact(n);
    int fact2 = fact(n);
    printf("%d! using recursive function: %d" , n , fact1);
    printf("\n%d! using non recursive function: %d" , n , fact2);
    return 0;
}