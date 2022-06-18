#include<stdio.h>
#include<string.h>
int main(){
    char a[25],temp;
    unsigned int x;
    printf("Enter the string :");
    gets(a);
    x=strlen(a);
    for (size_t i = 0; i < x/2; i++)
    {
       temp=a[i];
       a[i]=a[x-i-1];
       a[x-i-1]=temp; 
    }
    printf("String after reversing: ");
    puts(a);
    return 0;
}