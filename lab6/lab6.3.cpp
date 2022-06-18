#include<stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    
    int sum=0,rem;
    while(n)
    {
        rem=n%10;
        sum+=rem;
        n/=10;
    }
    printf("The sum of digits is %d",sum);
    
    return 0;
}