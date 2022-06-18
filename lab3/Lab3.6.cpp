#include <stdio.h>

int main()
{
    int a;
    printf("enter the number =  ");
    scanf("%d", &a);
    if (a > 0)
        printf("entered number %d is a positive number", a);
    else if (a < 0)
        printf("entered number %d is a negative number", a);
    else
        printf("%d is zero i.e. neither positive nor negative", a);
    return 0;
}