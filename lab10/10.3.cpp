#include<stdio.h>
#include<string.h>
int main(){
    char a[25],c[20]={0};
    unsigned int x,y,z,index;
    printf("enter the string :");
    gets(a);
    x=strlen(a);
    for (size_t i = 0; i < x; i++)
    {
       for (size_t j = i; j < x; j++)
       {
           if (a[i]==a[j]&&a[i]!=32) c[i]++;
       }      
    }

    y=strlen(c);
    x=c[0];
    index=0;
    for (size_t i = 0; i < y; i++)
    {    
        if (x<c[i])
        {
            index=i;
            x=c[i];
        }
    }
    printf("the highest freq. of char. '%c' \nappears no. of times %d",a[index],x);
    return 0;
}

