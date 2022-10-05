#include<stdio.h>

// Function Declarations //
void mergeSort(int arr[], int left, int right);
void merge(int arr[], int left, int mid, int right);
void print(int arr[], int n);

// Function Definitions //

// Function to split the array //
void mergeSort(int arr[], int left, int right)
{
    if(left<right)
    {
        int mid = (left+right)/2;
        mergeSort(arr,left,mid);
        mergeSort(arr,mid+1,right);
        merge(arr,left,mid,right);
    }
}

// Function to merge the splited array in sorted way //
void merge(int arr[], int left, int mid, int right)
{
    int n1 = mid-left+1;
    int n2 = right-mid;
    int temp1[n1];
    int temp2[n2];
    for(int i=0; i<n1; i++)
        temp1[i] = arr[left+i];
    for(int i=0; i<n2; i++)
        temp2[i] = arr[mid+1+i];
    int i=0, j=0, k=left;
    while(i<n1 && j<n2)
    {
        if(temp1[i] < temp2[j])
        {
            arr[k] = temp1[i];
            i++;
            k++;
        }
        else
        {
            arr[k] = temp2[j];
            j++;
            k++;
        }
    }

    while(i<n1)
    {
        arr[k] = temp1[i];
        k++;
        i++;
    }
    while(j<n2)
    {
        arr[k] = temp2[j];
        k++;
        j++;
    }
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
    mergeSort(arr,0,n);
    print(arr,n);
    return 0;
}