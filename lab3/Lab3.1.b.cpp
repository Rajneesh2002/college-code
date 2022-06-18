#include <stdio.h>

int main()
{
    int a, b;
    printf("enter two numbers to be swapped  =  ");
    scanf("%d%d", &a, &b);
    a = a - b;
    b = a + b;
    a = b - a;
    printf("swapped numbers are %d and %d ", a, b);
    return 0;
}