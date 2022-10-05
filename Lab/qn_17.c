/*****************************************************************

CREATOR - REENPHY GEORGE

TITLE - Reverse the entered string.

DATE - 14th SEPTEMBER, 2021

*****************************************************************/

#include<stdio.h>
#include<string.h>

void reverse(char str[])
{
    int len = strlen(str);
    int i=0 , j=len-1;
    while(i <= j)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    printf("Reversed String: %s\n" , str);
}
int main()
{
    char str[30];
    printf("Enter the string: ");
    gets(str);
    reverse(str);  
    return 0;  
}
