/**************************************************************************

CREATOR - REENPHY GEORGE

TITLE -  Program to find the distances between two points using structure.

DATE - 26st SEPTEMBER, 2021

**************************************************************************/

#include<stdio.h>
#include<math.h>

// Structure Definition //
struct euclidean
{
    double x1 , x2 , y1 , y2;
};

int main()
{
    struct euclidean euc; // declaring structure variable //
    printf("Enter the value of x1: ");
    scanf("%lf" , &euc.x1);
    printf("Enter the value of y1: ");
    scanf("%lf" , &euc.y1);
    printf("Enter the value of x2: ");
    scanf("%lf" , &euc.x2);
    printf("Enter the value of y2: ");
    scanf("%lf" , &euc.y2);

    // calculating the distance //
    double p1 = pow(euc.x2-euc.x1 , 2);
    double p2 = pow(euc.y2-euc.y1 , 2);

    double dist = sqrt(p1 + p2);

    printf("%lf" , dist);
    return 0;
}