#include <stdio.h>

int main()
{
    float x1, y1, x2, y2, x3, y3;
    float slope1, slope2;
    printf("Enter three coordinates in order x1 y1 x2 y2 x3 y3  ");
    scanf("%d%d%d%d%d%d", &x1, &y1, &x2, &y2, &x3, &y3);
    slope1 = (y3 - y2) / (x3 - x2);
    slope2 = (y2 - y1) / (x2 - x1);
    if (slope1 == slope2)
    {
        printf("The given points are collinear");
    }
    else
    {
        printf("The given points are not collinear");
    }
    return 0;
}