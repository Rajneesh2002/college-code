#include <stdio.h>
int main(){
    int i, j,k;
    int arr1[2][2];
    int arr2[2][2];
    printf("the elements of the matrix : \n");
    for(i= 0; i<2; i++){
        for(j=0; j<2; j++){
            scanf("%d", &arr1[i][j]);
        }
    }
    for(i= 0; i<2; i++){
        for(j=0; j<2; j++){
            arr2[j][i] = arr1[i][j];
    }
    }
    printf("transpose of the given matrix is: \n");
    for(i= 0; i<2; i++){
        for(j=0; j<2; j++){
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }
    return 0;
}