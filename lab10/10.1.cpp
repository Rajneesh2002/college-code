#include <stdio.h>
#include<string.h>
int main(){
    char a[15],b[15],flag=0;
    printf("enter the string of eq. length\n");
    printf("enter the first string : ");
    scanf("\n%s",a);
    printf("enter the second string : ");
    scanf("\n%s",b);
    for (size_t i = 0; i < strlen(a); i++)
    {
        if(a[i]!=b[i]){
            flag=0;
            break;
        }
        else
        flag=1;
    }
    
    if (flag)
        printf("strings are equal");
    else
        printf("strings are not equal");
    return 0;
}


