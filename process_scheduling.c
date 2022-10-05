#include<stdio.h>

struct Scheduling
{
	int bt[100];
	int wt[100];
	int tat[100];
	int temp[100];
	int temp_index[100];
	float avg_wt;
	float avg_tat;
};
int n;
struct Scheduling fcfs, sjf;

void Sort(struct Scheduling *sjf, int n) 
{
  for (int i = 0; i < n - 1; i++) 
  {
    for (int j = 0; j < n - i - 1; j++) 
	{
      if (sjf -> bt[j] > sjf -> bt[j + 1]) 
	  {
        int temp = sjf -> bt[j];
        sjf -> bt[j] = sjf -> bt[j + 1];
        sjf -> bt[j + 1] = temp;

		temp = sjf -> temp_index[j];
		sjf -> temp_index[j] = sjf -> temp_index[j + 1];
		sjf -> temp_index[j + 1] = temp;
      }
    }
  }
}

void fcfs_operation(struct Scheduling *obj, int n)
{
	obj -> temp[0] = 0;
	for(int i=0; i<n; i++)
	{
		obj -> temp[i+1] = obj -> temp[i] + obj -> bt[i];
	}
	printf("%f\n",obj -> avg_wt);

	for(int i=0; i<=n; i++)
	{
		if(i>=0 && i<n)
		{
			obj -> wt[i] = obj -> temp[i];
			// obj -> avg_wt = obj -> avg_wt + obj -> wt[i];
			// printf("%f\n",obj -> wt[i]);
		}
		if(i>0 && i<=n)
		{
			obj -> tat[i-1] = obj -> temp[i];
			obj -> avg_wt += obj -> tat[i-1];
		}
	}
	// printf("%f\n",obj -> avg_wt);
	// obj -> avg_wt /= n;
	// obj -> avg_tat /= n;

	// printf("\n Average Waiting Time: %d", obj -> avg_wt);
	// printf("\n Average Turn Around Time: %d", obj -> avg_tat);
}

void gantt_chart(struct Scheduling obj)
{
	for(int i=0; i<n; i++)
	{
		printf("%d P%d ",obj.temp[i], obj.temp_index[i]);
	}
	printf("%d",obj.temp[n]);
}

void input(struct Scheduling *fcfs, struct Scheduling *sjf, int *n)
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
	}
	fcfs -> avg_wt = 0;
	fcfs -> avg_tat = 0;
}

int main()
{
	input(&fcfs, &sjf, &n);
	fcfs_operation(&fcfs, n);
	gantt_chart(fcfs);
	// Sort(&sjf, n);
	// fcfs_operation(&sjf, n);
	// gantt_chart(sjf);
}