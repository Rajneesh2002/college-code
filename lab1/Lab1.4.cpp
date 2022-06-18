#include <stdio.h>

int main()
{
    int a, b, c;
    printf("enter three angles of the triangle :: ");
    scanf("%d%d%d", &a, &b, &c);
    if (a + b + c == 180)
    {
        printf("triangle is valid");
    }
    else
    {
        printf("triangle is not valid");
    }
    return 0;
}
