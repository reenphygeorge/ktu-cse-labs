/***********************************************************

CREATOR - REENPHY GEORGE

TITLE - Stack as Array

DATE - 18th DECEMBER, 2021

***********************************************************/

#include<stdio.h>

// Add an element to the top //
void push(int arr[] , int item , int *top , int n)
{
    if(*top < n-1)
    {
        *top = *top + 1;
        arr[*top] = item;
    }
    else
    {
        printf("\nStack is full\n");
    }
}

// Remove an element from top //
void pop(int arr[] , int *top)
{
    if(*top == -1)
    {
        printf("\nStack is empty\n");
        return;
    }

    int temp = arr[*top];
    *top = *top - 1;
    printf("\nPoped element: %d\n" , temp);
}

// View the top element //
void peek(int arr[] , int top)
{
    if(top == -1)
        printf("\nStack is empty\n");
    else
        printf("\nElement at top: %d\n" ,arr[top]);
}

// Display Stack elements //
void display(int arr[] , int top)
{
    if(top == -1)
    {
        printf("\nStack is empty\n");
        return;
    }
    printf("\nStack elements are: ");
    for(int i=0 ; i<=top ; i++)
    {
        printf("%d " , arr[i]);
    }
    printf("\n");
}

// Driver Function //
int main()
{
    int n;
    printf("\nEnter the size of stack: ");
    scanf("%d" , &n);
    int arr[n];
    int top = -1 , ch , item;
    while(ch != 5)
    {
        printf("\nMenu\n1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit\nEnter your choice: ");
        scanf("%d" , &ch);

        switch(ch)
        {
            case 1:
                printf("\nEnter the item: ");
                scanf("%d" , &item);
                push(arr , item , &top , n);
                break;
            case 2:
                pop(arr , &top);
                break;
            case 3:
                peek(arr , top);
                break;
            case 4:
                display(arr , top);
                break;
            case 5:
                break;
            default:
                printf("\nWrong choice...Try Again\n"); 
        }
    }
    return 0;
}