#include<stdio.h>
#include<string.h>

int main()
{
    FILE *fp = fopen("test.txt","w");
    char str[100];
    gets(str);
    int len = strlen(str);
    for(int i=0 ; i<len ; i++)
    {
        putc(str[i],fp);
    }
    fclose(fp);

    fp = fopen("test.txt","r");
    char ch;
    int vow=0,num=0,con=0;
    while((ch=getc(fp))!=EOF)
    {
        if(ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch=='u' || ch=='U')
        {
            vow++;
        }
        else if(ch>='0' && ch<='9')
        {
            num++;
        }
        else
        {
            con++;
        }
    }
    printf("Vowel: %d\n" , vow);
    printf("Consonant: %d\n" , con);
    printf("Number: %d\n" , num);
    fclose(fp);
    return 0;
}