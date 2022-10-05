/***********************************************************

CREATOR - REENPHY GEORGE

TITLE - C Program to find the roots of a Quadratic Equation.

DATE - 9th AUGUST, 2021

***********************************************************/

#include<stdio.h>
#include<math.h>

int main()
{
    double a , b , c , r1 , r2;
    printf("Enter the coefficient of x^2: ");
    scanf("%lf" , &a);
    printf("Enter the coefficient of x: ");
    scanf("%lf" , &b);
    printf("Enter the constant term: ");
    scanf("%lf" , &c);
    double d = (pow(b , 2) - 4 * a * c);
    if(d > 0)
    {
        d = sqrt(d);
        r1 = (-b + d ) / (2 * a);
        r2 = (-b - d ) / (2 * a);
        printf("Roots are: %lf, %lf\n\n",r1,r2);
    }
    else if(d == 0)
    {
        printf("Roots are equal\nRoot: %lf\n\n", -b / (2 * a));
    }
    else
    {
        printf("Roots are imaginary\n\n");
    }
    return 0;
}