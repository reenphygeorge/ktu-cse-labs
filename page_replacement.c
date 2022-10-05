#include<stdio.h>

void fifo(int nprocess, int page_size, int process[], int page[])
{
	int temp = 0, flag;
	for(int i=0; i<nprocess; i++)
	{
		flag = 0;
		for(int j=0; j<page_size; j++)
		{
			if(process[i] == page[j])
			{
				flag = 1;
				break;
			}
		}
		if(flag != 1)
		{
			page[temp] = process[i];
			temp = (temp + 1) % page_size;
			for(int j=0; j<page_size; j++)
			{
				if(page[j] != -1)
				{
					printf("%d ", page[j]);
				}
			}
			printf("\n");
		}
	}
}

int main()
{
	int page_size, nprocess;
	printf("Enter the page size: ");
	scanf("%d",&page_size);
	printf("Enter the no of process: ");
	scanf("%d",&nprocess);
	int process[nprocess];
	int page[page_size];
	for(int i=0; i<page_size; i++)
	{
		page[i] = -1;
	}
	printf("Enter the process: ");
	for(int i=0; i<nprocess; i++)
	{
		scanf("%d",&process[i]);
	}
	
	fifo(nprocess, page_size, process, page);
  return 0;
	
}
