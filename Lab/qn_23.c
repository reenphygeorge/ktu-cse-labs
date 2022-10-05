/***************************************************************************************

CREATOR - REENPHY GEORGE

TITLE -  Open a text input file and count number of characters, words and lines in it.

DATE - 14th October, 2021

***************************************************************************************/
#include<stdio.h>

int main()
{
    FILE *fp;
    fp = fopen("test.txt" , "r");
    char ch;
    int w=1 , c=0 , l=0;
    while((ch=getc(fp)) != EOF)
    {
        c++;
        if(ch == ' ')
        {
            w++;
        }
        if(ch == '\n')
        {
            l++;
        }
    }
    c--;
    fclose(fp);
    if(c==0)
    {
        w=0;
        l=0;
    }
    printf("No: of Characters: %d\nNo: of Words: %d\nNo: of Lines: %d" , c , w , l);
    return 0;
}
