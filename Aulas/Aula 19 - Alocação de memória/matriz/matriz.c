#include <stdio.h>
#include <stdlib.h>

int main(void){
    int nrows = 2;
    int ncols = 3;

    int **m = NULL;

    m = (int**)calloc(nrows, sizeof(int*));
    for (int i = 0; i < nrows; i++){
        m[i] = (int*)calloc(ncols, sizeof(int));
    }

    printf("&m = %p. m = %p\n", &m, m);
    printf("&m[0] = %p. m[0] = %p\n", &m[0], m[0]);
    printf("&m[1] = %p. m[1] = %p\n", &m[1], m[1]);

    for(int j = 0; j < nrows; j++){
        for(int k = 0; k < ncols; k++){
            printf("&m[%d][%d] = %p.\n", j, k, &m[j][k]);
        }
        puts("");
    }

    for (int l = 0; l < nrows; l++){
        free(m[l]);
    }

    free(m);
    m = NULL;
}