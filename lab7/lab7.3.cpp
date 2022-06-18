#include <stdio.h>

int main()
{
    int n;
    printf("Enter decimal number: ");
    scanf("%d",&n);
    int x=n;
    int i=1,rem,num=0;
    while(n)
    {
        rem=n%2;
        num=num+rem*i;
        i*=10;
        n/=2;
    }
    printf("BINARY OF %d is %d ",x,num);
    

    return 0;
}