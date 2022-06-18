#include <stdio.h>

int main(){
    int i, j,x=0, sum=0,sumrow=0,sumcol=0;
    int arr[3][3];
    printf("the elements of the matrix : \n");
    for(i= 0; i<3; i++){
        for(j=0; j<3; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    for(i = 0; i<3; i++){
        for(j=0; j<3; j++){
            if(i==j){
                sum+= arr[i][j];
            }
        }
    }
    for(i = 0; i<3; i++){
        sumrow = 0;
        for(j=0; j<3; j++){
            sumrow+= arr[i][j];
        }
        if(sum == sumrow) x =1;
        else {
            x =0;
            break;
        }
    }
    for(i = 0; i<3; i++){
        sumcol = 0;
        for(j=0; j<3; j++){
            sumcol+= arr[j][i];
        }
        if(sum == sumcol)  x =1;
        else {
            x = 0;
            break;
        }
    }
    if(x == 1){
        printf("given matrix is magic square.\n");
    }
    else {
        printf("given matrix is not a magic square.\n");
    }
    return 0;
}