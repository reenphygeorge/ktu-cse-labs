#include<stdio.h>

int main()
{
    FILE *fp = fopen("test.txt","w");
    int n,a;
    printf("Enter the no: of numbers to be entered: ");
    scanf("%d" , &n);
    for(int i=0 ;  i<n ; i++)
    {
        scanf("%d" , &a);
        putw(a , fp);
    }
    fclose(fp);

    fp = fopen("test.txt","r");
    int e=0,o=0;
    for(int i=0 ; i<n ; i++)
    {
        if((getw(fp))%2==0)
        {
            e++;
        }
        else
        {
            o++;
        }
    }

    printf("Even: %d\n" , e);
    printf("Odd: %d\n" , o);
    fclose(fp);
    return 0;
}