#include <stdio.h>
#include <math.h>

int main()
{
    int x, y;
    int x1, y1;
    float r, p;
    printf("enter coordinates of centre of the circle x  y ");
    scanf("%d%d", &x, &y);
    printf("enter radius = ");
    scanf("%f", &r);
    printf("enter coordinates of point x1  y1 ");
    scanf("%d%d", &x1, &y1);
    p = sqrt((pow(x1, 2) - pow(x, 2)) + (pow(y1, 2) + pow(y, 2)));
    if (p > r)
    {
        printf("point outside circle");
    }
    else if (p < r)
    {
        printf("point inside circle");
    }
    else
    {
        printf("point on circle");
    }
    return 0;
}