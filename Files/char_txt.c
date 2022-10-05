#include<stdio.h>
#include<string.h>

int main()
{
    FILE *fp = fopen("test.txt","w");
    
    char str[100];
    gets(str);
    int len = strlen(str);
    for(int i=0; i<len; i++)
    {
        putc(str[i], fp);
    }
    fclose(fp);

    fp = fopen("test.txt","r");
    char ch;
    for(int i=0; i<len; i++)
    {
        ch=getc(fp);
        printf("%c" , ch);
    }
    fclose(fp);
    return 0;
}