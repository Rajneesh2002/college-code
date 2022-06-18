#include <stdio.h>

int main()
{
    int a = 24, b = 27;
    printf("bitwise AND of %d and %d is %d\n", a, b, a & b);
    printf("bitwise OR of %d and %d is %d\n", a, b, a | b);
    printf("bitwise XOR of %d and %d is %d\n", a, b, a ^ b);
    printf("bitwise complement of %d is %d\n", a, ~a);
    printf("bitwise complement of %d is %d\n", b, ~b);
    printf("left shift on %d is %d\n", a, a << 2);
    printf("left shift on %d is %d\n", b, b << 1);
    printf("right shift on %d is %d\n", b, b >> 3);
    printf("right shift on %d is %d\n", a, a >> 2);
    printf("logical AND of 1 and 0 is %d\n", 1 && 0);
    printf("logical OR of 1 and 0 is %d\n", 1 || 0);
    return 0;
}