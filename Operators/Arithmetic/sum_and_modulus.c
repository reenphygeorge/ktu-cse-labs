// Program to find sum and modulus of two numbers //

#include <stdio.h>
int main()
{
    int n1, n2, sum, mod;
    printf("Enter the first no: ");
    scanf("%d", &n1);
    printf("Enter the second no: ");
    scanf("%d", &n2);
    sum = n1 + n2;
    mod = n1 % n2;
    printf("Sum = %d \nModulus = %d", sum, mod);
    return 0;
}