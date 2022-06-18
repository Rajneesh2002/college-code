#include <stdio.h>

int main()
{
    int age;
    printf("enter age =  ");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("person with age %d is eligible for voting", age);
    }
    else
    {
        printf("person with age %d is not eligible for voting", age);
    }
    return 0;
}