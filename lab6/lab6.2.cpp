#include<stdio.h>

int main()
{
    int n; 
    printf("Demand of user: ");
    scanf("%d",&n);
    int positive=0,negative=0,zero=0;
    while(n--)
    {
        int b;
        scanf("%d",&b);
        if(b>0) positive++;
        else if(b==0) zero++;
        else negative++;
    }
    printf("Total positive numbers: %d\n",positive);
    printf("Total zeros entered: %d\n",zero);
    printf("Total negative numbers : %d",negative);
    
    return 0;
}