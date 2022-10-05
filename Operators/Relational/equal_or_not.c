// Program to check if n1 = n2 //

#include <stdio.h>
int main()
{
    int n1, n2, c;
    printf("Enter the first no: ");
    scanf("%d", &n1);
    printf("Enter the second no: ");
    scanf("%d", &n2);
    c = n1 == n2;
    printf("Greatest no: %d", c);
    return 0;
}