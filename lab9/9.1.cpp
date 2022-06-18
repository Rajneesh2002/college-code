#include <stdio.h>
int main()
{
    int rows, cols, i, j, sum = 0, pro = 1;
    printf("enter the number of rows and columns: ");
    scanf("%d%d", &rows, &cols);
    int arr[rows][cols];
    printf("the elements of the matrix: \n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &arr[i][j]);
            sum += arr[i][j];
            pro *= arr[i][j];
        }
    }
    printf("the sum of all elements %d is \nthe product of all elements is %d", sum, pro);

    return 0;
}