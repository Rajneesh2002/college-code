#include <stdio.h>

int main()
{
    int a, b, c;
    printf("enter three numbers to be compared =  ");
    scanf("%d%d%d", &a, &b, &c);
    printf("largest number is = %d", c > (a > b ? a : b) ? c : (a > b ? a : b));

    return 0;
}