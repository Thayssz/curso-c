#include <stdio.h>

int main(void){
    int mat[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int i, j;

    printf("Imprimindo a primeira linha:\n");
    for (i=0; i<3; i++){
        printf("%d \n", mat[0][i]);
    }

    printf("Imprimindo a matriz toda:\n");
    for (j=0; j<3; j++){
        for (i=0; i<3; i++){
            printf("%d ", mat[j][i]);
        }
        printf("\n");
    }
}