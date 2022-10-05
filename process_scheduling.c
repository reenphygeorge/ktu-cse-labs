#include<stdio.h>

struct Scheduling
{
	int bt[100];
	int wt[100];
	int tat[100];
	int temp[100];
	int temp_index[100];
	int priority[100];
	float avg_wt;
	float avg_tat;
};

void Sort(int arr[], struct Scheduling *obj, int n, int pr_flag) 
{
  for (int i = 0; i < n - 1; i++) 
  {
    for (int j = 0; j < n - i - 1; j++) 
	{
      if (arr[j] > arr[j + 1]) 
	  {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;

		temp = obj -> temp_index[j];
		obj -> temp_index[j] = obj -> temp_index[j + 1];
		obj -> temp_index[j + 1] = temp;

		if(pr_flag == 1)
		{
			temp = obj -> bt[j];
			obj -> bt[j] = obj -> bt[j + 1];
			obj -> bt[j + 1] = temp;
		}
      }
    }
  }
}

void fcfs_function(struct Scheduling *obj, int n)
{
	obj -> temp[0] = 0;
	for(int i=0; i<n; i++)
	{
		obj -> temp[i+1] = obj -> temp[i] + obj -> bt[i];
	}

	for(int i=0; i<=n; i++)
	{
		if(i>=0 && i<n)
		{
			obj -> wt[i] = obj -> temp[i];
		}
		if(i>0 && i<=n)
		{
			obj -> tat[i-1] = obj -> temp[i];
			obj -> avg_wt += obj -> tat[i-1];
		}
	}
}

void average_wt_tat(struct Scheduling *obj, int n)
{
	obj -> avg_wt = 0.0;
	obj -> avg_tat = 0.0;
	for(int i=0; i<=n; i++)
	{
		if(i>=0 && i<n)
			obj -> avg_wt = obj -> avg_wt + obj -> wt[i];
		if(i>0 && i<=n)
			obj -> avg_tat = obj -> avg_tat + obj -> tat[i];
	}
	obj -> avg_wt /= n;
	obj -> avg_tat /= n;
	printf("\n\nAverage Waiting Time: %f", obj -> avg_wt);
	printf("\nAverage Turn Around Time: %f", obj -> avg_tat);
}

void gantt_chart(struct Scheduling obj, int n)
{
	printf("\n\nGANT CHART\n");
	for(int i=0; i<n; i++)
	{
		printf("%d P%d ",obj.temp[i], obj.temp_index[i]);
	}
	printf("%d",obj.temp[n]);
}

void input(struct Scheduling *fcfs, struct Scheduling *sjf, struct Scheduling *pr, int *n, int pr_flag)
{
	printf("Enter the no of processes: ");
	scanf("%d",n);
	printf("Enter the burst time of all processes: ");
	int temp_input;
	for(int i=0; i<*n; i++)
	{
		scanf("%d",&temp_input);
		fcfs -> bt[i] = temp_input;
		fcfs -> temp_index[i] = i;
		sjf -> bt[i] = temp_input;
		sjf -> temp_index[i] = i;
		pr -> bt[i] = temp_input;
		pr -> temp_index[i] = i;
	}
	if(pr_flag == 1)
	{
		printf("Enter the priorities of processes: ");
		for(int i=0; i<*n; i++)
		{
			scanf("%d",&pr -> priority[i]);
		}
	}
}

void fcfs_operation(struct Scheduling *obj, int n)
{
	fcfs_function(obj, n);
	printf("\n\n-----FCFS-----");
	gantt_chart(*obj, n);
	average_wt_tat(obj, n);
}

void sjf_operation(struct Scheduling *obj, int n)
{
	Sort(obj->bt,obj, n, 0);
	fcfs_function(obj, n);
	printf("\n\n-----SJF-----");
	gantt_chart(*obj, n);
	average_wt_tat(obj, n);
}

void pr_operation(struct Scheduling *obj, int n)
{
	Sort(obj -> priority,obj, n, 1);
	fcfs_function(obj, n);
	printf("\n\n-----PR-----");
	gantt_chart(*obj, n);
	average_wt_tat(obj, n);
}

int main()
{
	int n;
	struct Scheduling fcfs, sjf, pr;
	input(&fcfs, &sjf, &pr, &n, 1);
	fcfs_operation(&fcfs, n);
	sjf_operation(&sjf, n);
	pr_operation(&pr, n);
}