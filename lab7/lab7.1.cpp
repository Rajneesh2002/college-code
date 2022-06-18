#include <stdio.h>

int main()
{
    int n,x=0;
    printf("Enter value of n: ");
    scanf("%d", &n);
    printf("Prime numbers till %d: \n", n);
    for(int i = 2; i <= n; i++){
            x=0;      
            for(int j = 2; j*j <= i; j++){
                if(i%j==0){
                    x = 1;
                    break;
                }
            }
        if(!x)
            printf("%d  ", i);
    }

    return 0;
}