/*****************************************

CREATOR - REENPHY GEORGE

TITLE - Bubble Sort

DATE - 1st SEPTEMBER, 2021

*****************************************/
#include<stdio.h>
int main()
{
    // User Inputs //
    int n;
    printf("Enter the size of array: ");
    scanf("%d" , &n);
    int arr[n];
    printf("Enter the array elements: ");
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d" , &arr[i]);
    }

    // Sorting //
    for(int i=0 ; i<n-1 ; i++)
    {
        for(int j=0 ; j<n-1-i ; j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    // Printing Sorted Array //
    for(int i=0 ; i<n ; i++)
    {
        printf("%d " , arr[i]);
    }
    return 0;
}
