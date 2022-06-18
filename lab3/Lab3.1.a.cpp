#include <stdio.h>

int main()
{
    int a, b, temp;
    printf("enter two numbers to be swapped  =  ");
    scanf("%d%d", &a, &b);
    temp = a;
    a = b;
    b = temp;
    printf("swapped numbers are %d and %d ", a, b);
    return 0;
}