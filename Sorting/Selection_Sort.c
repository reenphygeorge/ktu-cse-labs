/***********************************************************

CREATOR - REENPHY GEORGE

TITLE - Selection Sort

DATE - 11th NOVEMBER, 2021

***********************************************************/

#include<stdio.h>

int main()
{
    // Input //
    int n,i,min,j,temp,count=0,space=28;
    printf("Enter the total size of array: ");
    scanf("%d" , &n);
    space += (n*4);
    int arr[n];
    for(i=0 ; i<n ; i++)
    {
        printf("Enter the %dth element: " , i);
        scanf("%d" , &arr[i]);
        count++;
    }
    // Sorting //
    for(i=0 ; i<n ; i++)
    {
        min = i;
        for(j=i+1 ; j<n ; j++)
        {
            if(arr[j] < arr[min])
            {
                min = j;
                count++;
            }
        }
        if(min != i)
        {
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
            count+=3;
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
