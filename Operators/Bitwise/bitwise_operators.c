// Bitwise Operators //

#include <stdio.h>
int main()
{
    int n1 = 3, n2 = 5;

    int bt_and = (n1 & n2); // Bitwise AND

    int bt_or = (n1 | n2); // Bitwise   OR

    int bt_xor = (n1 ^ n2); // Bitwise XOR

    int bt_not = ~(n1); // Bitwise NOT

    int r_shift = (n2 >> 2); // Right Shift

    int l_shift = (n1 << 1); // Left Shift

    printf("%d & %d = %d \n", n1, n2, bt_and);
    printf("%d | %d = %d \n", n1, n2, bt_or);
    printf("%d ^ %d = %d \n", n1, n2, bt_xor);
    printf("~ %d = %d \n", n1, bt_not);
    printf("%d >> 2 = %d \n", n2, r_shift);
    printf("%d << 1 = %d \n", n1, l_shift);
    return 0;
}