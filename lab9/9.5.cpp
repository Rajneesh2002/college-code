#include <stdio.h>

int main(){
    int rows, cols, i, j;
    printf("enter the number of rows and columns: ");
    scanf("%d%d", &rows, &cols);
    int arr[rows][cols];
    printf("the elements of the matrix : \n");
    for(i= 0; i<rows; i++){
        for(j=0; j<cols; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    printf("elements lower diagonal of the given matrix is: \n");
    for(i= 0; i<rows; i++){
        for(j=0; j<cols; j++){
            if(i >= j)
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}