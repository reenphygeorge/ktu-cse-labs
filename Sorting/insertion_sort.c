#include<stdio.h>

void ins_sort(int arr[], int n)
{
	int temp;
	for(int i=1; i<n; i++)
	{
		for(int j=0; j<i; j++)
		{
			if(arr[j] > arr[i])
			{
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}
}

int main()
{
	printf("Insertion Sort\n\n");
	int n;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the array elements: ");
	for(int i=0 ; i<n ; i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Sorted Array: ");
	ins_sort(arr, n);
	for(int i=0; i<n; i++)
		printf("%d ",arr[i]);
	return 0;
}
