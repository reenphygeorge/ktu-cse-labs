/*****************************************

CREATOR - REENPHY GEORGE

TITLE - Linear Search

DATE - 1st SEPTEMBER, 2021

*****************************************/
#include<stdio.h>
int main()
{
    // User Inputs //
    int n , k , loc=-1;
    printf("Enter the size of array: ");
    int arr[n];
    scanf("%d" , &n);
    printf("Enter the array elements: ");
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d" , &arr[i]);
    }
    printf("Enter the element to be searched: ");
    scanf("%d" , &k);

    // Searching //
    for(int i=0 ; i<n ; i++)
    {
        if(arr[i]==k)
        {
            loc=i;
            break;
        }   
    }
    if(loc==-1)
    {
        printf("%d is not found in the array" , k);
    }
    else
    {
        printf("%d is found at %dth position in the array" , k , loc);
    }
    return 0;
}