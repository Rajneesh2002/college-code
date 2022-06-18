#include <stdio.h>

int main()
{
    float a, b, c, d, e, total, percentage;
    printf("enter marks in five subjects out of 100 =  ");
    scanf("%f%f%f%f%f", &a, &b, &c, &d, &e);
    total = a + b + c + d + e;
    percentage = total / 5.0;
    printf("total marks obtained is %f and percentage obtained is %f", total, percentage);

    return 0;
}