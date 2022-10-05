/***********************************************************

CREATOR - REENPHY GEORGE

TITLE - C Program to find the biggest & smallest 
        element in an array.

DATE - 10th AUGUST, 2021

***********************************************************/

#include<stdio.h>

int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d" , &n);
    int arr[n];
    printf("\nEnter the array elements:\n");
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d" , &arr[i]);
    }
    int lrg = arr[0] , sml = arr[0];
    for(int i=1 ; i<n ; i++)
    {
        if(arr[i] > lrg)
        {
            lrg = arr[i];
        }
        if(arr[i] < sml)
        {
            sml = arr[i];
        }
    }
    printf("\nLargest No: %d" , lrg);
    printf("\nSmallest No: %d\n" , sml);
    return 0;
}