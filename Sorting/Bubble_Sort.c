/***********************************************************

CREATOR - REENPHY GEORGE

TITLE - Bubble Sort

DATE - 11th NOVEMBER, 2021

***********************************************************/

#include<stdio.h>

int main()
{
    // Input //
    int n , count=0, i, j, temp, space=24;
    printf("Enter the total size of array: ");
    scanf("%d" , &n);
    space += (n*4);
    count++;
    int arr[n];
    for(i=0 ; i<n ; i++)
    {
        printf("Enter the %dth element: " , i);
        scanf("%d" , &arr[i]);
        count++;
    }
    count++;
    // Sorting //
    for(i=0 ; i<n ; i++)
    {
        for(j=0 ; j<n-i-1 ; j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                count += 3;
            }
        }
        count++;
    }
    count++;
    // Printing Sorted Array //
    printf("\nSorted Array: ");
    for(i=0 ; i<n ; i++)
    {
        printf(" %d" , arr[i]);
    }
    count++;
    printf("\nSpace Complexity: %d", space);
    printf("\nTime Complexity: %d", count);
    return 0;
}
