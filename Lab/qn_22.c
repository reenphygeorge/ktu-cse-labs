/******************************************************

CREATOR - REENPHY GEORGE

TITLE -  Create a file, append to it and read it.

DATE - 14th October, 2021

******************************************************/
#include<stdio.h>
#include<string.h>

int main()
{
    FILE *fp;
    fp = fopen("test.txt" , "a");
    char str[100];
    printf("Enter the string: ");
    fgets(str , 100 , stdin);
    int len = strlen(str);
    for(int i=0 ; i<len ; i++)
    {
        putc(str[i] , fp);
    }
    fclose(fp);

    fp = fopen("test.txt" , "r");
    char ch;
    while((ch=getc(fp))!=EOF)
    {
        printf("%c" , ch);
    }
    fclose(fp);
    return 0;
}