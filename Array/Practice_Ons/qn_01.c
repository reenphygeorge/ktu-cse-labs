/********************************************

CREATOR - REENPHY GEORGE

TITLE - Display array in reverse order

DATE - 1st SEPTEMBER, 2021

********************************************/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d" , &n);
    int arr[n];
    for(int i=0 ; i<n ; i++)
    {
        printf("Enter the %dth element: " , i);
        scanf("%d" , &arr[i]);
    }
    printf("The values store into the array are :\n");
    for(int i=0 ; i<n ; i++)
    {
        printf("%d " , arr[i]);
    }
    printf("\nThe values store into the array in reverse are :\n");
    for(int i=n-1 ; i>=0 ; i--)
    {
        printf("%d " , arr[i]);
    }
    return 0;
}