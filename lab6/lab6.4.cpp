#include<stdio.h>
#include<math.h>

int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    
    int n=x,y=x,c=0,s=0,rem;
    
    while(n)
    {
        rem=n%10;   
        n/=10;
        c++;
    }   
    while(y)
    {
        rem=y%10;
        s+=(int)pow(rem,c);
        y/=10;
    }
    
    if(s==x)
        printf("%d is an armstrong number",x);        
    
    else
       printf("%d is not an armstrong number",x);

    return 0;
}