#include <stdio.h>

void imprime1(int v[], int n){
    int i;
    for(i=0; i<n; i++){
        printf("%d ", v[i]);
    }
}

void imprime2(int v[5]){
    int i;
    for(i=0; i<5; i++){
        printf("%d ", v[i]);
    }
}

void imprime4(int m[][4], int n){
    int i, j;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}

int main(void){
    int v[5] = {1, 2, 3, 4, 5};
    int mat[3][4] = {{1, 2, 3, 4}, {50, 60, 70, 80}, {91, 101, 111, 121}};

    puts("Primeiro imprime:");
    imprime1(v, 5);

    puts("\nSegundo imprime:");
    imprime2(v);

    imprime4(mat, 3);
}
