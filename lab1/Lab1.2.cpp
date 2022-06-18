#include <stdio.h>

int main()
{
    int opt;
    float tempf, tempc;
    printf("for fahrenheit to celcius enter 1 and for celcius to fahrenheit enter 0 ==  ");
    scanf("%d", &opt);
    if (opt == 1)
    {
        printf("enter temperature in degree fahrenheit ==  ");
        scanf("%f", &tempf);
        tempc = (tempf - 32) * 5 / 9;
        printf("temperature in celsius is %f", tempc);
    }
    else if (opt == 0)
    {
        printf("enter temperature in degree celcius ==  ");
        scanf("%f", &tempc);
        tempf = tempc * 9 / 5 + 32;
        printf("temperature in fahrenheit is %f", tempf);
    }
    else
    {
        printf("invalid input");
    }

    return 0;
}