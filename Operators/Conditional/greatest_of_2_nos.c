// Program to find the greatest of 2 nos //

#include <stdio.h>
int main()
{
    int n1, n2, g;
    printf("Enter the first no: ");
    scanf("%d", &n1);
    printf("Enter the second no: ");
    scanf("%d", &n2);
    g = n1 > n2;
    g == 1 ? printf("%d is greater than %d", n1, n2) : printf("%d is greater than %d", n2, n1);
    return 0;
}