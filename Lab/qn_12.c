/*****************************************************************

CREATOR - REENPHY GEORGE

TITLE - Count the number of vowels, consonants and spaces 
        in a String.

DATE - 14th SEPTEMBER, 2021

*****************************************************************/

#include<stdio.h>

int main()
{
    char str[30];
    
    // Input String //
    printf("Enter the string: ");
    gets(str);

    // Counting //
    int i=0, v=0, c=0, s=0;
    while(str[i] != '$')
    {
        if(str[i] == 'A' || str[i] == 'a' || str[i] == 'E' || str[i] == 'e' || str[i] == 'I' || str[i] == 'i' || str[i] == 'O' || str[i] == 'o' || str[i] == 'U' || str[i] == 'u')
        {
            v++;
        }
        else if(str[i] == ' ')
        {
            s++;
        }
        else if(str[i] > 'A' && str[i] <= 'z')
        {
            c++;
        }
        i++;
    }
    printf("Vovels: %d \nConsonants: %d \nSpace: %d", v , c , s);
    return 0;
}