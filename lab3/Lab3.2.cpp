#include <stdio.h>

int main()
{
    char alph;
    printf("enter an alphabet =  ");
    scanf("%c", &alph);
    if (alph == 'A' || alph == 'E' || alph == 'I' || alph == 'O' || alph == 'U' 
       || alph == 'a' || alph == 'e' || alph == 'i' || alph == 'o' || alph == 'u')
    {
        printf("alphabet %c is vowel", alph);
    }
    else
    {
        printf("alphabet %c is consonant", alph);
    }
    return 0;
}