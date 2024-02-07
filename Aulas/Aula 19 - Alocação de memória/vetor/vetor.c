#include <stdio.h>

 int main(void){
    int i;
    int vetor[5] = {0, 1, 2, 3, 4};

    for(i = 0; i < 5; i++){
        printf("&vetor[%d] = %p. vetor[%d] = %d.\n", i, &vetor[i], i, vetor[i]);
    }

    printf("&vetor[6] = %p. vetor[6] = %d.\n", &vetor[6], vetor[6]);
 }