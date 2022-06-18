#include <stdio.h>

int main()
{
    int n=5;
    int x=65;

    for(int i=1;i<=n;i++)
    {
        for(int k=n-1;k>=i;k--)
        {
            printf("  ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("  %c  ",x++);
        }
        printf("\n");
    }
    
    return 0;
}