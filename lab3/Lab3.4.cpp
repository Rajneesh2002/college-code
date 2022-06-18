#include <stdio.h>

int main()
{
    int a;
    printf("enter the number =  ");
    scanf("%d", &a);
    if (a & 1)
    {
        printf("entered number %d is an odd number", a);
    }
    else
    {
        printf("entered number %d is an even number", a);
    }
    return 0;
}