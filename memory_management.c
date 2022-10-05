#include<stdio.h>
#include<limits.h>

struct process
{
	int process_size;
	int assigned_block_size;
	int block_id;
	int memory_waste;
};

void temp_block_generate(int n_block, int block_size [], int temp_block_size [])
{
	for(int i=0; i<n_block; i++)
	{
		temp_block_size[i] = block_size[i];
	}
}

void first_fit(int block_size[], int n_block, int n_process, struct process p[])
{
	int assigned_flag = 0;
	for(int i=0; i<n_process; i++)
	{
		for(int j=0; j<n_block; j++)
		{
			if(p[i].process_size <= block_size[j])
			{
				p[i].assigned_block_size = block_size[j];
				p[i].block_id = j+1;
				p[i].memory_waste = block_size[j] - p[i].process_size;
				block_size[j] -= p[i].process_size;
				assigned_flag = 1;
				break;
			}
		}
		if(assigned_flag == 0)
		{
			p[i].assigned_block_size = -1;
			p[i].block_id = -1;
			p[i].memory_waste = -1;
		}
		assigned_flag = 0;
	}
}

void best_fit(int block_size[], int n_block, int n_process, struct process p[])
{
	int min = INT_MAX, min_loc = -1;
	for(int i=0; i<n_process; i++)
	{
		for(int j=0; j<n_block; j++)
		{
			if(p[i].process_size <= block_size[j] && block_size[j] < min)
			{
				min = block_size[j];
				min_loc = j;
			}
		}
		if(min_loc != -1)
		{
			p[i].assigned_block_size = min;
			p[i].block_id = min_loc+1;
			p[i].memory_waste = block_size[min_loc] - p[i].process_size;
			block_size[min_loc] -= p[i].process_size;
		}
		else
		{
			p[i].assigned_block_size = -1;
			p[i].block_id = -1;
			p[i].memory_waste = -1;
		}
		min = INT_MAX;
		min_loc = -1;
	}
}

void worst_fit(int block_size[], int n_block, int n_process, struct process p[])
{
	int max = INT_MIN, max_loc = -1;
	for(int i=0; i<n_process; i++)
	{
		for(int j=0; j<n_block; j++)
		{
			if(p[i].process_size <= block_size[j] && block_size[j] > max)
			{
				max = block_size[j];
				max_loc = j;
			}
		}
		if(max_loc != -1)
		{
			p[i].assigned_block_size = max;
			p[i].block_id = max_loc+1;
			p[i].memory_waste = block_size[max_loc] - p[i].process_size;
			block_size[max_loc] -= p[i].process_size;
		}
		else
		{
			p[i].assigned_block_size = -1;
			p[i].block_id = -1;
			p[i].memory_waste = -1;
		}
		max = INT_MIN;
		max_loc = -1;
	}
}

void print_process(int n_process, struct process p[])
{
	printf("Process-Size \t Block-Size \t Block-ID \t Memory-Waste\n");
	for(int i=0; i<n_process; i++)
	{
		if(p[i].assigned_block_size == -1)
			printf("%d \t\t -- \t\t Not Allocated \t\t --\n", p[i].process_size);
		else		
			printf("%d \t\t %d \t\t %d \t\t\t %d\n", p[i].process_size, p[i].assigned_block_size, p[i].block_id, p[i].memory_waste);
	}
}

int main()
{
	int n_process, n_block;
	
	printf("Enter the no: of process: ");
	scanf("%d", &n_process);

	printf("Enter the no: of blocks: ");
	scanf("%d", &n_block);

	int block_size[n_block], temp_block_size[n_block];
	struct process p[n_process];

	printf("Enter the size of each process: ");
	for(int i=0; i<n_process; i++)
	{
		scanf("%d", &p[i].process_size);
	}
	
	printf("Enter the size of each block: ");
	for(int i=0; i<n_block; i++)
	{	
		scanf("%d", &block_size[i]);
	}
	
	
	// First Fit //
	temp_block_generate(n_block, block_size, temp_block_size);
	first_fit(temp_block_size, n_block, n_process, p);
	printf("\nFirst Fit\n");
	print_process(n_process, p);
	
	// Best Fit //
	temp_block_generate(n_block, block_size, temp_block_size);
	best_fit(temp_block_size, n_block, n_process, p);
	printf("\nBest Fit\n");
	print_process(n_process, p);
	
	// Worst Fit //
	temp_block_generate(n_block, block_size, temp_block_size);
	worst_fit(temp_block_size, n_block, n_process, p);
	printf("\nWorst Fit\n");
	print_process(n_process, p);
	
	return 0;	
}
