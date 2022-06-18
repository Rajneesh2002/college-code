#include <stdio.h>

int main(){
    int a,b,c,d;
    printf("enter four numbers to be compared =  ");
    scanf("%d%d%d%d", &a, &b, &c, &d);
    printf("largest number is = %d", ((a>b?a:b)>c?(a>b?a:b):c)>d?((a>b?a:b)>c?(a>b?a:b):c):d);

    return 0;
}