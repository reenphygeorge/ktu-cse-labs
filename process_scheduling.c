#include<stdio.h>

struct Scheduling
{
	int bt[100];
	int temp_bt[100];
	int wt[100];
	int tat[100];
	int temp[100];
	int temp_index[100];
	int priority[100];
	int time_slice;
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

void input(struct Scheduling *fcfs, struct Scheduling *sjf, struct Scheduling *pr, struct Scheduling *rr, int *n, int op_flag)
{
	printf("Enter the no of processes: ");
	scanf("%d",n);
	printf("Enter the burst time of all processes: ");
	int temp_input;
	for(int i=0; i<*n; i++)
	{
		scanf("%d",&temp_input);
		if(op_flag == 1)
		{
			fcfs -> bt[i] = temp_input;
			fcfs -> temp_index[i] = i;
		}
		else if(op_flag == 2)
		{
			sjf -> bt[i] = temp_input;
			sjf -> temp_index[i] = i;
		}
		else if(op_flag == 3)
		{
			pr -> bt[i] = temp_input;
			pr -> temp_index[i] = i;
		}
		else if(op_flag == 4)
		{
			rr -> bt[i] = temp_input;
			rr -> temp_bt[i] = temp_input;
			rr -> temp_index[i] = i;
		}
	}
	if(op_flag == 3)
	{
		printf("Enter the priorities of processes: ");
		for(int i=0; i<*n; i++)
		{
			scanf("%d",&pr -> priority[i]);
		}
	}
	if(op_flag == 4)
	{
		printf("Enter the time slice: ");
		scanf("%d",&rr->time_slice);
	}
}

int sum(int arr[], int n)
{
	int result = 0;
	for(int i=0; i<n; i++)
	{
		result += arr[i];
	}
	return result;
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
	printf("\n\n-----PRIORITY-----");
	gantt_chart(*obj, n);
	average_wt_tat(obj, n);
}

void rr_operation(struct Scheduling *obj, int n)
{
	int index = 0;
	obj -> temp[index] = 0;
	index++;
	while(sum(obj -> bt, n) != 0)
	{
		for(int i=0; i<n; i++)
		{
			if(obj -> bt[i] == 0)
			{
				continue;
			}
			else if(obj -> bt[i] >= obj -> time_slice)
			{
				obj -> bt[i] -= obj -> time_slice;
				obj -> temp[index] = 0;
				obj -> temp[index] += obj -> temp[index-1];
				obj -> temp[index] += obj -> time_slice;
				obj -> temp_index[index-1] = i;
				index ++;
			}
			else
			{
				obj -> temp[index] = 0;
				obj -> temp[index] += obj -> temp[index-1];
				obj -> temp[index] += obj -> bt[i];
				obj -> temp_index[index-1] = i;
				index ++;
				obj -> bt[i] = 0;
			}
		}
	}
	printf("\n\n-----ROUND ROBIN-----");
	gantt_chart(*obj, index-1);

	// WT, TAT, AVG_WT, AVG_TAT //
	obj -> avg_wt = 0.0;
	obj -> avg_tat = 0.0;
	for(int i=0; i<n; i++)
	{
		int j = index-2;
		while(obj -> temp_index[j] != i)
		{
			j--;
		}
		obj -> tat[i] = obj->temp[j+1];
		obj -> avg_tat += obj -> tat[i];
		obj -> wt[i] = obj -> tat[i] - obj -> temp_bt[i];
		obj -> avg_wt += obj -> wt[i];
	}
	obj -> avg_tat /= n;
	obj -> avg_wt /= n;
	printf("\n\nAverage Waiting Time: %f", obj -> avg_wt);
	printf("\nAverage Turn Around Time: %f", obj -> avg_tat);
}

int menu()
{
	int ch;
	printf("\n\n\n----MAIN MENU----\n");
	printf("\n1. FCFS");
	printf("\n2. SJF");
	printf("\n3. PRIORITY");
	printf("\n4. ROUND_ROBIN");
	printf("\n5. EXIT");
	printf("\nEnter your choice: ");
	scanf("%d",&ch);
	printf("\n");
	return ch;
}

void switch_function(int ch, struct Scheduling *fcfs, struct Scheduling *sjf, struct Scheduling *pr, struct Scheduling *rr, int *n)
{
	switch (ch)
		{
			case 1:
				input(fcfs, sjf, pr, rr, n, ch);
				fcfs_operation(fcfs, *n);
				break;
			case 2:
				input(fcfs, sjf, pr, rr, n, ch);
				sjf_operation(sjf, *n);
				break;
			case 3:
				input(fcfs, sjf, pr, rr, n, ch);
				pr_operation(pr, *n);
				break;
			case 4:
				input(fcfs, sjf, pr, rr, n, ch);
				rr_operation(rr, *n);
				break;
		}
}

int main()
{
	int n, ch;
	struct Scheduling fcfs, sjf, pr, rr;
	do
	{
		ch = menu();
		switch_function(ch, &fcfs, &sjf, &pr, &rr, &n);
		
	} while(ch!=5);
}