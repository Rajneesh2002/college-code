#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter value of a: ");
    scanf("%d",&a);
    printf("Enter value of b: ");
    scanf("%d",&b);
    
    int p=0;
    while(b--) 
        p+=a;
    
    printf("The product is %d",p);

    return 0;
}