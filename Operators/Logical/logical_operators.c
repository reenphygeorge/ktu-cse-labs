// Logical Operators //

#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("Enter the first no: ");
    scanf("%d", &a);
    printf("Enter the second no: ");
    scanf("%d", &b);
    printf("Enter the third no: ");
    scanf("%d", &c);
    printf("Enter the forth no: ");
    scanf("%d", &d);

    if (a == b && c == d) // Logical AND //
    {
        printf("a is equal to b and c is equal to d");
    }
    else if (a == b || c == d) // Logical OR //
    {
        printf("Either a is equal to b or c is equal to d");
    }
    else if (a != b) // Logical NOT //
    {
        printf("a not equal to b");
    }
    else
    {
        printf("Conditions are'nt satisfied");
    }
    return 0;
}