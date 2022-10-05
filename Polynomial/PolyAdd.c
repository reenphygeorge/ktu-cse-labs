/***********************************************************

CREATOR - REENPHY GEORGE

TITLE - Polynomial Addition

DATE - 2nd January, 2022

***********************************************************/

#include<stdio.h>

struct Poly 
{
    int coef, exp;
};

int main()
{
    // int n1, n2;
    int n;
    

    // Input Polynomial //
    printf("Polynomial 1\n");
    printf("Enter the order of the equation: ");
    scanf("%d", &n);
    struct Poly p1[n+1], p2[n+1], p3[n+n+2];
    for(int i=0 ; i<n ; i++)
    {
        printf("Enter the coefficient of x^%dth term: " , n-i);
        scanf("%d" , &p1[i].coef);
        p1[i].exp = n-i;
    }

    printf("Polynomial 2\n");
    for(int i=0 ; i<n ; i++)
    {
        printf("Enter the coefficient of x^%dth term: " , n-i);
        scanf("%d" , &p2[i].coef);
        p2[i].exp = n-i;
    }

    int j=0;
    for(int i=0 ; i<n ; i++)
    {
        if(p2[i].exp == p1[i].exp)
        {
            p3[j].coef = p1[i].coef + p2[i].coef;
            p3[j].exp = p1[i].exp;
            j++;
        }
        else if(p2[i].exp > p1[i].exp)
        {
            p3[j].coef = p2[i].coef;
            p3[j].exp = p2[i].exp;
            j++;
            p3[j].coef = p1[i].coef;
            p3[j].exp = p1[i].exp;
            j++;
        }
        else if(p1[i].exp > p2[i].exp)
        {
            p3[j].coef = p1[i].coef;
            p3[j].exp = p1[i].exp;
            j++;
            p3[j].coef = p2[i].coef;
            p3[j].exp = p2[i].exp;
            j++;                                                    
        }
    }

    // Print Polynomial //
    for(int i=0 ; i<j ; i++)
    {
        if(p3[i].coef >= 0)
            printf("+");
        printf("%dx^%d " , p3[i].coef , p3[i].exp);
    }
    return 0;
}