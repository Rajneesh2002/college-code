#include <stdio.h>

int main()
{
    int n;
    printf("Enter value of n: ");
    scanf("%d",&n);
    
    if(n%2==0)
    {
        goto even;      
    }
    else
    {
        goto odd;        
    }
    even:
        printf("%d is even number",n);
        return 0;
    odd:
        printf("%d is odd number",n);
    
    return 0;
}