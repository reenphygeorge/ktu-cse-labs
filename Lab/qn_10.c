/*****************************************************************

CREATOR - REENPHY GEORGE

TITLE - Check whether the entered string is a palindrome or not.

DATE - 6th SEPTEMBER, 2021

*****************************************************************/

#include<stdio.h>

int main()
{
    char str[30];
    
    // Input String //
    printf("Enter the string to be checked: ");
    gets(str);

    // String Length //
    int len=0;
    while(str[len] != '\0')
    {
        len++;
    }

    // Checking whether palindrome //
    int i=0 , j=len-1 , flag=0;
    while(i <= j)
    {
        if(str[i] != str[j])
        {
            flag = 1;
            break;
        }
        i++;
        j--;
    }

    if(flag == 0)
    {
        printf("Entered string is a Palindrome");
    }
    else
    {
        printf("Entered string is not a Palindrome");
    }
    return 0;
}