/*****************************************************************************

CREATOR - REENPHY GEORGE

TITLE -  Program to input and print the elements of an array using pointers.

DATE - 26st SEPTEMBER, 2021

*****************************************************************************/

#include<stdio.h>

int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d" , &n);
    int arr[n];
    int *ptr;
    ptr = arr;
    printf("Enter the elements of the array: \n");
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d" , ptr);
        ptr++;
    }
    ptr = arr;
    printf("Array Elements are: \n");
    for(int i=0 ; i<n ; i++)
    {
        printf("%d\n" , *ptr);
        ptr++;
    }
    return 0;
}