#include <stdio.h>

int main()
{
    int n=5;
    int x=1;

    for(int i=1;i<=n;i++)
    {
        for(int k=n;k>i;k--)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {   
            printf("%d ",i);            
        }
        printf("\n");
    }
    
    return 0;
}