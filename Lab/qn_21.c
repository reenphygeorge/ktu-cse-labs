/************************************************************************************************

CREATOR - REENPHY GEORGE

TITLE -  Compute sum of the elements stored in an array using pointers and user defined function.

DATE - 26st SEPTEMBER, 2021

************************************************************************************************/

#include<stdio.h>

int sum(int *arr , int n)
{
    int s = 0;
    for(int i=0 ; i<n ; i++)
    {
        s += *arr;
        arr++;
    }
    return s;
}

int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d" , &n);
    int arr[n];
    printf("Enter the elements of the array: \n");
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d" , &arr[i]);
    }
    printf("Sum of Array Elements: %d\n" , sum(arr , n));
    return 0;
}