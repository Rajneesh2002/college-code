#include <stdio.h>
int main(){
    int i, j,k;
    int arr1[2][2],arr2[2][2],arr3[2][2];
    printf("the elements of the matrix 1: \n");
    for(i= 0; i<2; i++){
        for(j=0; j<2; j++){
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("the elements of the matrix 2: \n");
    for(i= 0; i<2; i++){
        for(j=0; j<2; j++){
            scanf("%d", &arr2[i][j]);
        }
    }
    for(i= 0; i<2; i++){
        for(j=0; j<2; j++){
            int c=0;
            for(k=0; k<2; k++){
                c += arr1[i][k] * arr2[k][j]; 
            }
            arr3[i][j]=c;
        }
    }
    printf("result of the multiplication is : \n");
    for(i= 0; i<2; i++){
        for(j=0; j<2; j++){
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }  
    return 0;
}