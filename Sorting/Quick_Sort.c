#include<stdio.h>

// Function Declarations //
int partition(int arr[], int low, int high);
void swap(int arr[], int i, int j);
void print(int arr[], int n);
void quickSort(int arr[], int low, int high);

// Function Definitions //

// Function to return position of pivot element //
int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low-1;
    for(int j=low; j<high; j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(arr,i,j);
        }
    }
    swap(arr,i+1,high);
    return i+1;
}

// Function to swap elements at 2 positions of the array //
void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

// Function to print //
void print(int arr[], int n)
{
    printf("\nSorted Array: ");
    for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
}

// QuickSort Function //
void quickSort(int arr[], int low, int high)
{
    if(low < high)
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi-1);
        quickSort(arr, pi+1, high);
    }
}

// Main Function //
int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    quickSort(arr,0,n-1);
    print(arr,n);
    return 0;
}