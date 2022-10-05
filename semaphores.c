#include<stdio.h>
#include<stdlib.h>

char menu()
{
	printf("\nMain Menu");
	printf("\n1. PRODUCER");
	printf("\n2. CONSUMER");
	printf("\n3. EXIT");
	printf("\nEnter your choice: ");
	char ch;
	scanf("%s", &ch);
	return ch;
}

void wait(int *s)
{
	while(s <= 0);
	*s = *s - 1;
}

void signal(int *s)
{
	*s = *s + 1;
}

int isEmpty(int s)
{
	if(s < 0)
		return 1;
	else
		return 0;
}

int isFull(int s, int size)
{
	if(s >= size-1)
		return 1;
	else
		return 0;
}

int main()
{
	int size=2, memory[size], top=-1, temp;
	char ch;
	while((ch=menu()) != 3)
	{
		switch(ch)
		{
			case '1':
				if(isFull(top, size) == 0)
				{
					printf("\nEnter the %d item: ", top+1);
					int item;
					scanf("%d", &item);
					signal(&top);
					memory[top] = item;
				}
				else
					printf("\nMemory Full!!\n");
				break;
			case '2':
				temp = memory[top];
				if(isEmpty(top) == 0)
				{
					wait(&top);
					printf("Item: %d", temp);
				}
				else
					printf("\nMemory Empty!!\n");
				break;
			case '3':
				printf("\nExiting");
				exit(0);
				break;
			default:
				printf("\nTry Again, Fail Again\n");
		}
	}
	return 0;
}
