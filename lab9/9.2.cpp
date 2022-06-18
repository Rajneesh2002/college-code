#include <stdio.h>
int main(){
    int rows, cols, i, j;
    printf("enter the number of rows and columns: ");
    scanf("%d%d", &rows, &cols);
    int arr1[rows][cols];
    int arr2[rows][cols];
    int arr3[rows][cols];
    printf("the elements of the matrix 1: \n");
    for(i= 0; i<rows; i++){
        for(j=0; j<cols; j++){
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("the elements of the matrix 2: \n");
    for(i= 0; i<rows; i++){
        for(j=0; j<cols; j++){
            scanf("%d", &arr2[i][j]);
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    printf("result of the addition matrix is : \n");
    for(i= 0; i<rows; i++){
        for(j=0; j<cols; j++){
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}