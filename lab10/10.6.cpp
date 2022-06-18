#include<stdio.h>
int factorial(int);

int main(){
    int num,s;
    printf("enter the number: ");
    scanf("%d",&num);
    printf("factorial of %d is %ld",num,factorial(num));
    return 0;
}
int factorial(int x)
{
    if (x==0)
        return 1;
    else
        return x*factorial(x-1);
}