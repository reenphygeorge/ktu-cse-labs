// Program to check if entered no is positive or negative using conditional operator //

#include <stdio.h>
int main()
{
    int n, chk;
    printf("Enter the no: ");
    scanf("%d", &n);
    chk = (n >= 0) ? 1 : 0;
    chk == 1 ? printf("%d is positive", n) : printf("%d is negative", n);
    return 0;
}