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

int indexOf(int arr[], int n, int item)
{
	for(int i=0; i<n; i++)
	{
		if(arr[i] == item)
		{
			return i;
		}
	}
}

int main()
{
	int n;
	printf("Enter the no of process: ");
	scanf("%d", &n);
	int burst_time[n], burst_time_temp[n];
	for(int i=0; i<n; i++)
	{
		printf("Enter the burst time of process p%d: ",i+1);
		scanf("%d", &burst_time[i]);
		burst_time_temp[i] = burst_time[i]; 
	}
	
	ins_sort(burst_time, n);
	
	int temp_arr[n+1], temp =0;
	temp_arr[0] = temp;
	for(int i=0; i<n; i++)
	{
		temp += burst_time[i];
		temp_arr[i+1] = temp;
	}
	
	int wait_time[n], turn_around_time[n];
	float avg_wait_time = 0, avg_turn_around_time = 0;
	
	for(int i=0; i<=n; i++)
	{
		
		if(i >= 0 && i<n)
		{
			wait_time[i] = temp_arr[i];
			avg_wait_time += wait_time[i];
		}
		if(i > 0 && i<=n)
		{
			turn_around_time[i-1] = temp_arr[i];
			avg_turn_around_time += turn_around_time[i-1];
		}
	}
	
	avg_wait_time /= n;
	avg_turn_around_time /= n;
	
	printf("\nProcesses\tBurst\t\tWaiting\t\tTurn around\n");
	for(int i=0; i<n; i++)
	{
		printf("%d \t\t %d \t\t %d \t\t %d\n", indexOf(burst_time_temp, n, burst_time[i]) + 1, burst_time[i], wait_time[i], turn_around_time[i]);
	}
	printf("\nAverage Waiting Time: %f \nAverage Turn Around Time: %f", avg_wait_time, avg_turn_around_time);
	
	return 0;
}
