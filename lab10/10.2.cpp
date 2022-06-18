#include<stdio.h>
int main(){
    char a[25],al,di,sp;
    al=di=sp=0;
    printf("enter the string :");
    gets(a);
    for (size_t i = 0; a[i] != '\0'; i++)
    {
        if (a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z')
            al++;
        else if (a[i]>='0'&&a[i]<='9')
            di++;
        else if (a[i]!=' ')
            sp++;
    }
        printf("nN. of alphabets in the string : %d",al);
        printf("\nNo. of digits in the string : %d",di);
        printf("\nNo. of speical character in the string : %d",sp);
        return 0;

}