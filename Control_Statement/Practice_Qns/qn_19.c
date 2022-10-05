/***************************************

CREATOR - REENPHY GEORGE

TITLE - C Program to check Whether a 
        Character is Vowel or Consonant.

DATE - 9th AUGUST, 2021

***************************************/

#include<stdio.h>

int main()
{
    char ch;
    printf("Enter the character: ");
    scanf("%c",&ch);
    int c = (int)(ch);
    if((c>=65&&c<=90)||(c>=97&&c<=122))
    {
        if(ch=='A'||ch=='a'||ch=='E'||ch=='e'||ch=='I'||ch=='i'||ch=='O'||ch=='o'||ch=='U'||ch=='u')
        {
            printf("\nEntered character is a vowel\n\n");
        }
        else
        {
            printf("\nEntered character is a consonant\n\n");
        }
    }
    else
    {
        printf("\nEntered character is either a digit or a special character\n\n");
    }
    return 0;
}