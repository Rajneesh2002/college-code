#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter value of a: ");
    scanf("%d",&a);
    printf("Enter value of b: ");
    scanf("%d",&b);

    int lcm,hcf;
    int x=1;
    while(x<=a && x<=b)
    {
        if(a%x==0 && b%x==0)
        {
            hcf=x;
        }
        x++;
    }

    lcm=(a*b)/hcf;

    printf("LCM of %d and %d is %d",a,b,lcm);
    printf("\nHCF of %d and %d is %d",a,b,hcf);
    return 0;
}