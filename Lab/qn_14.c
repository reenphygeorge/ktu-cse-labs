/**************************************************************

CREATOR - REENPHY GEORGE

TITLE -  Using structure, read and print data of n employees.

DATE - 26st SEPTEMBER, 2021

**************************************************************/

#include<stdio.h>

// Structure Definition //
struct company
{
    char name[24];
    int emp_id;
    float salary;
};

int main()
{
    int n;
    printf("Enter the number of employees: ");
    scanf("%d" , &n);
    struct company emp[n]; // declaring structure variable //
    for(int i=0 ; i<n ; i++)
    {
        printf("\n\nEnter the details of %dth employee" , i+1);
        printf("\nName: "); 
        scanf("%s" , &emp[i].name);
        printf("EMP ID: ");
        scanf("%d" , &emp[i].emp_id);
        printf("Salary: ");
        scanf("%f" , &emp[i].salary);
    }

    for(int i=0 ; i<n ; i++)
    {
        printf("\n\nDetails of %dth employee" , i+1);
        printf("\nName: %s" , emp[i].name);
        printf("\nEMP ID: %d" , emp[i].emp_id);
        printf("\nSalary: %f" , emp[i].salary);
    }
    return 0;
}