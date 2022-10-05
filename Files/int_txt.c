#include<stdio.h>

int main()
{
    FILE *fp = fopen("test.txt" , "w");
    int n;
    scanf("%d" , &n);
    putw(n,fp);
    fclose(fp);
    fp = fopen("test.txt" , "r");
    int x=getw(fp);
    printf("%d",x);
    fclose(fp);
    return 0;
}