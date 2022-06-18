#include<stdio.h>
void isprime(int);
int main(){
    int n;
    printf("enter a number : ");
    scanf("%d",&n); 
    isprime(n);
    return 0;
}

void isprime(int num){
int flag=0;
for (int i = 2; i <= num/2; i++)
{
    if (num%i==0)
    {
          flag=1;
          break;
    }   
}
if (flag)  printf("no. is not prime");
else printf("no. is prime");
}

