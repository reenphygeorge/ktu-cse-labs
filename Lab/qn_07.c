/*******************************************************************************

CREATOR - REENPHY GEORGE

TITLE - C program to  Read n integers, store them in an array 
        and find their sum and average.

DATE - 26th AUGUST, 2021

*******************************************************************************/

#include<stdio.h>

int main()
{
    int n , sum = 0 , avg;
    printf("Enter the size of array: ");
    scanf("%d" , &n);
    int arr[n];
    printf("\nEnter the array elements: \n\n");
    for(int i=0 ; i<n ; i++)
    {
        printf("Enter the %d th element: " , i);
        scanf("%d" , &arr[i]);
        sum += arr[i];
    }
    avg = sum / n;
    printf("Sum = %d" , sum);
    printf("\nAverage = %d" , avg);
    return 0;
}