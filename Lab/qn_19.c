/**************************************************************

CREATOR - REENPHY GEORGE

TITLE - Using pointers:
        i) add two numbers
        ii) swap two numbers using a user defined function 

DATE - 26st SEPTEMBER, 2021

**************************************************************/

#include<stdio.h>

// function to find the sum //
void sum(int *a , int *b , int* s)
{
    *s = *a + *b;
}

// function to swap a and b //
void swap(int* a , int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp; 
}

// Driver Function //
int main()
{
    int a, b, s=0;
    printf("Enter the value of a: ");
    scanf("%d" , &a);
    printf("Enter the value of b: ");
    scanf("%d" , &b);
    printf("\nBefore swapping:\n a = %d  b = %d" , a , b);
    swap(&a , &b);
    printf("\nAfter swapping:\n a = %d  b = %d" , a , b);
    sum(&a , &b , &s);
    printf("\n\nSum = %d" ,s);
    return 0;
}