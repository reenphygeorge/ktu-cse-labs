/***********************************************************

CREATOR - REENPHY GEORGE

TITLE - Polynomial Representation

DATE - 2nd January, 2022

***********************************************************/

#include<stdio.h>

struct Poly 
{
    int coef, exp;
};

int main()
{
    int n;
    printf("Enter the order of the equation: ");
    scanf("%d", &n);
    struct Poly p[n+1];
    
    // Input Polynomial //
    for(int i=n ; i>0 ; i--)
    {
        printf("Enter the coefficient of x^%dth term: " , i);
        scanf("%d" , &p[i].coef);
        p[i].exp = i;
    }

    // Print Polynomial //
    for(int i=n ; i>0 ; i--)
    {
        if(p[i].coef >= 0)
            printf("+");
        printf("%dx^%d " , p[i].coef , p[i].exp);
    }
    return 0;
}