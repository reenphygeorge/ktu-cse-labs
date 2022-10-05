// Program to check if entered no is odd or even using conditional operator //

#include <stdio.h>
int main()
{
    int n, chk;
    printf("Enter the no: ");
    scanf("%d", &n);
    chk = (n % 2) == 0 ? 0 : 1;
    chk == 0 ? printf("%d is Even", n) : printf("%d is Odd", n);
    return 0;
}