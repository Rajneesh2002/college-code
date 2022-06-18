#include<stdio.h>

int main()
{
    int n;
    printf("Enter value of n: ");
    scanf("%d",&n);

    int digit,rem,count=0,num=n;
    printf("Enter digit: ");
    scanf("%d",&digit);

    while(n)
    {
        rem=n%10;
        if(rem==digit) 
            count++;
            
        n/=10;
    }

    printf("%d occured %d times in %d",digit,count,num);
    return 0;
}