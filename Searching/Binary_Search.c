/***********************************************************

CREATOR - REENPHY GEORGE

TITLE - Binary Search

DATE - 11th NOVEMBER, 2021

***********************************************************/

#include<stdio.h>

int main()
{
  int n,x,loc=-1,i,count=0,space=24;
  printf("Enter the size of array: ");
  scanf("%d" , &n);
  space += (n*4);
  int arr[n];

  // Array should be sorted //
  for(i=0 ; i<n ; i++)
  {
    printf("Enter the %dth element of array: ",i);
    scanf("%d" , &arr[i]);
    count++;
  }
  count++;
  printf("\nEnter the element to be searched: ");
  scanf("%d" , &x);
  count++;

  // Searching //
  int left=0 , right=n-1 , mid=(left+right)/2;
  count++;
  space += 12;
  while(left<=right)
  {
    if(arr[mid] == x)
    {
      loc = mid;
      count++;
      break;
    }
    else if(arr[mid] < x)
    {
      left = mid+1;
      count++;
    }
    else
    {
      right = mid-1;
      count++;
    }
  }

  if(loc == -1)
  {
    printf("\nNot Found");
  }
  else
  {
    printf("\n%d is found at %d" , x,loc);
  }
  printf("\nSpace Complexity: %d", space);
  printf("\nTime Complexity: %d", count);
  return 0;
}
