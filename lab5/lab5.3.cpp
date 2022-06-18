#include<stdio.h>

int main()
{
    int n;
    printf("Enter non-negative integer: ");
    scanf("%d",&n);

    int fact=1;
    for(int i=2;i<=n;i++)
    {
        fact*=i;
    }

    printf("The factorial of %d is %d",n,fact);
    return 0;
}