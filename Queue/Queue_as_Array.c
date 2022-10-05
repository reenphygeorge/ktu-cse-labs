/***********************************************************

CREATOR - REENPHY GEORGE

TITLE - Queue as Array

DATE - 18th DECEMBER, 2021

***********************************************************/

#include<stdio.h>

void enqueue(int arr[], int item, int *front, int *rear, int n)
{
    if((*rear == -1 && *front == -1) || (*rear == n-1 && *front >= n-1))
    {
        *rear = 0;
        *front = 0;
    }
    else if(*rear == n-1 && *front < n-1)
    {
        printf("Queue is Full");
        return;
    }
    else
        *rear = *rear + 1;
    arr[*rear] = item;
}

void dequeue(int arr[], int *front, int *rear, int n)
{
    if((*rear == -1 && *front == -1) || *rear < *front)
        printf("Queue is empty");
    else
    {
        int temp = arr[*front];
        *front = *front + 1;
        printf("Element removed is: %d" , temp);
    }
}

void display(int arr[], int *front, int *rear)
{
    for(int i=*front ; i<=*rear ; i++)
    {
        printf("%d " , arr[i]);
    }
}

void IsEmpty(int arr[], int *front, int *rear)
{
    
}

int main()
{
    int n;
    printf("\nEnter the size of queue: ");
    scanf("%d" , &n);
    int arr[n];
    int rear = -1, front = -1, ch, item;
    while(ch != 5)
    {
        printf("\nMenu\n1. Enqueue\n2. Dequeue\n3. IsEmpty\n4. Display\n5. Exit\nEnter your choice: ");
        scanf("%d" , &ch);

        switch(ch)
        {
            case 1:
                printf("\nEnter the item: ");
                scanf("%d" , &item);
                enqueue(arr, item, &front, &rear, n);
                // enqueue(arr, item, &front, &rear, n);
                break;
            case 2:
                dequeue(arr, &front, &rear, n);
                break;
            // case 3:
                // peek(arr , top);
                // break;
            case 4:
                display(arr, &front, &rear);
                break;
            case 5:
                break;
            default:
                printf("\nWrong choice...Try Again\n"); 
        }
    }
    return 0;
}