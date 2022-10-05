/*****************************************************************

CREATOR - REENPHY GEORGE

TITLE - Concatenate two strings without using library functions.

DATE - 14th SEPTEMBER, 2021

*****************************************************************/

#include<stdio.h>

int main()
{
    char str1[30] , str2[30] , str3[60];
    
    // Input Strings //
    printf("Enter the 1st string: ");
    gets(str1);
    printf("Enter the 2nd string: ");
    gets(str2);

    // Concatenating Strings //
    int i=0;
    while(str1[i] != '\0')
    {
        if(str1[i] == '$')
        {
            break;
        }
        str3[i] = str1[i];
        i++;
    }
    int j=0;
    while(str2[j] != '\0')
    {
        if(str2[j] == '$')
        {
            break;
        }
        str3[i] = str2[j];
        i++;
        j++;
    }
    printf("Concatenated String: %s", str3);
    return 0;
}
