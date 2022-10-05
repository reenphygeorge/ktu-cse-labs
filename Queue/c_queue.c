/***********************************************************

CREATOR - REENPHY GEORGE

TITLE - Circular Queue

DATE - 20th DECEMBER, 2021

***********************************************************/

#include<stdio.h>

int isFull(int *front, int *rear, int n)
{
	if((*front == 0 && *rear == n-1) || (*front == *rear + 1))
		return 1;
	else
		return 0;
}

void enqueue(int cq[], int *front, int *rear, int item, int n)
{
	if(isFull(front, rear, n) == 0)
	{
		if(*front == -1)
		{
			*rear = 0;
			*front = 0;
		}
		else
			*rear = (*rear+1)%n;
		cq[*rear] = item;
	}
	else
		printf("Queue overflow");
}

int isEmpty(int *front, int *rear)
{
	if(*front == -1)
	{
		return 1;
	}
	else
		return 0;
}

void dequeue(int cq[], int *front, int *rear, int n)
{
	if(isEmpty != 0)
	{
		int temp = cq[*front];
		if(*rear == *front)
		{
			*rear = -1;
			*front = -1;
			printf("Dequeued Value: %d" , temp);
		}
		else
		{
			*front = (*front+1)%n;
			printf("Dequeued Value: %d" , temp);
		}
	}
	else
	{
		printf("Array is empty");
	}
}

int main()
{
    int n;
    printf("\nEnter the size of queue: ");
    scanf("%d" , &n);
    int cq[n];
    int rear = -1, front = -1, ch, item;
    while(ch != 3)
    {
        printf("\nMenu\n1. Enqueue\n2. Dequeue\n3. Exit\nEnter your choice: ");
        scanf("%d" , &ch);

        switch(ch)
        {
            case 1:
                printf("\nEnter the item: ");
                scanf("%d" , &item);
                enqueue(cq, &front, &rear, item, n);
                break;
            case 2:
                dequeue(cq, &front, &rear, n);
                break;
            case 3:
                break;
            default:
                printf("\nWrong choice...Try Again\n"); 
        }
    }
    return 0;
}
