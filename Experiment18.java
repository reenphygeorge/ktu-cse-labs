import java.util.Scanner;

public class Experiment18 {

    // Function to return position of pivot element //
    static int partition(String arr[], int low, int high)
    {
        String pivot = arr[high];
        int i = low-1;
        for(int j=low; j<high; j++)
        {
            if(arr[j].compareTo(pivot) < 0)
            {
                i++;
                swap(arr,i,j);
            }
        }
        swap(arr,i+1,high);
        return i+1;
    }

    // Function to swap elements at 2 positions of the array //
    static void swap(String arr[], int i, int j)
    {
        String temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    // Function to print //
    static void print(String arr[], int n)
    {
        System.out.print("\nSorted Array: ");
        for(int i=0; i<n; i++)
        {
            System.out.print(arr[i]+" ");
        }
    }

    // QuickSort Function //
    static void quickSort(String arr[], int low, int high)
    {
        if(low < high)
        {
            int pi = partition(arr, low, high);
            quickSort(arr, low, pi-1);
            quickSort(arr, pi+1, high);
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the size of array: ");
        int n = sc.nextInt();
        String arr[] = new String[n];
        System.out.print("Enter array elements: ");
        for(int i=0; i<n; i++)
        {
            arr[i] = sc.nextLine();
        }
        quickSort(arr,0,n-1);
        print(arr,n);
    }
}
