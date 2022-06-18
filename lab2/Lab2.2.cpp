#include <stdio.h>

int main()
{
    int a, pro, div;
    printf("enter the number to be multiplied and divided by 4 =  ");
    scanf("%d", &a);
    pro = a << 2;
    div = a >> 2;

    printf("%d is product and %d is quotient ", pro, div);
}