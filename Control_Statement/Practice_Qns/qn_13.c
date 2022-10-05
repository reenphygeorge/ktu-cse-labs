/**************************************************************************

CREATOR - REENPHY GEORGE

TITLE - C program to print the electric bill.

DATE - 10th AUGUST, 2021

**************************************************************************/

#include<stdio.h>

int main()
{
    int cust_id;
    float unit , charge;
    char name[24];
    printf("Enter customer's name : ");
    fgets(name, 24, stdin);
    printf("Enter the customer ID: ");
    scanf("%d" , &cust_id);
    printf("Enter the total units consumed: ");
    scanf("%f" , &unit);
    if(unit <= 199)
    {
        charge = unit * 1.2;
    }
    else if(unit >= 200 && unit < 400)
    {
        charge = unit * 1.5;
    }
    else if(unit >= 400 && unit < 600)
    {
        charge = unit * 1.8;
    }
    else
    {
        charge = unit * 2;
    }
    if(charge > 400)
    {
        charge += charge * 15 / 100;
    }
    else if(charge < 100)
    {
        charge = 100;
    }
    printf("\n*********************************************************\n");
    printf("\n\t\tCustomer Name: %s\n" , name);
    printf("\n\t\tCustomer ID: %d\n" , cust_id);
    printf("\n\t\tTotal units used: %f\n" , unit);
    printf("\n*********************************************************\n");
    printf("\t\tTotal Amount: Rs. %f",charge);
    printf("\n*********************************************************\n");
    printf("\n*********************************************************\n");
    return 0;
}