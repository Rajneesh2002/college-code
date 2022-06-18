#include<stdio.h>

int main()
{
    int n;
    printf("Enter value of n: ");
    scanf("%d",&n);

    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum+=i;
    }

    printf("The sum of numbers till %d is %d",n,sum);
    return 0;
}