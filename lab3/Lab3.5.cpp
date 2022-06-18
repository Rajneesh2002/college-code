#include <stdio.h>

int main()
{
    int a, b, c;
    printf("enter three numbers =  ");
    scanf("%d%d%d", &a, &b, &c);
    if (a > b)
    {
        if (a > c)
            printf("%d is largest among three numbers", a);
        else
            printf("%d is largest among three numbers", c);
    }
    else
    {
        if (b > c)
            printf("%d is largest among three numbers", b);
        else
            printf("%d is largest among three numbers", c);
    }
    return 0;
}