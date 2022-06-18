#include <stdio.h>

int main()
{
    printf("Size of int is %d bytes\n", sizeof(int));
    printf("Size of short int is %d bytes\n", sizeof(short int));
    printf("Size of signed int is %d bytes\n", sizeof(signed int));
    printf("Size of unsigned int is %d bytes\n", sizeof(unsigned int));
    printf("Size of long int is %d bytes\n", sizeof(long int));
    printf("Size of long long int is %d bytes\n", sizeof(long long int));
    printf("Size of float is %d bytes\n", sizeof(float));
    printf("Size of double is %d bytes\n", sizeof(double));
    printf("Size of long double is %d bytes\n", sizeof(long double));
    printf("Size of char is %d bytes\n", sizeof(char));
   
    return 0;
}