/***********************************************************

CREATOR - REENPHY GEORGE

TITLE - Linear Search

DATE - 11th NOVEMBER, 2021

***********************************************************/

#include<stdio.h>

int main()
{
    
  // Input //
  int n,count=0,i,space=16;
  printf("Enter the size of array: ");
  scanf("%d" , &n);
  space += (n*4);
  int arr[n];
  printf("Enter Array Elements:\n");

  for(i=0 ; i<n ; i++)
  {
    printf("\nEnter the %dth element: " , i);
    scanf("%d" , &arr[i]);
    count++;
  }
  count++;

  printf("\nEnter the array element to be found: ");
  int x , loc = -1;
  space += 8;
  scanf("%d" , &x);
  count++;

  // Searching //
  for(i=0 ; i<n ; i++)
  {
    if(arr[i] == x)
    {
      loc = i;
      count++;
      break;
    }
    count++;
  }
  count++;

  if(loc != -1)
  {
    printf("%d is found at %d" , x,loc);
  }
  else
  {
    printf("%d is not found" , x);
  }
  printf("\nSpace Complexity: %d", space);
  printf("\nTime Complexity: %d", count);
  return 0;
}
