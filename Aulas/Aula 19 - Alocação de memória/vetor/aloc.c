#include <stdio.h>
#include <stdlib.h> //contém o NULL, MALLOC, CALLOC

int main(void){
    //alocação de um vetor estático
    int v_stack[5] = {0, 10, 20, 30, 40};
    int i;
    
    printf("&v_stcak = %p. v_stack = %p\n", &v_stack, v_stack);
    puts("VETOR ESTATICO");
    for (i = 0; i < 5; i++){
        printf("&v_stack[%d] = %p. v_stack[%d] = %d\n", i, &v_stack[i], i, v_stack[i]);
    }
    puts("");

    //alocação de um vetor dinâmico usando malloc
    int*vhm = (int*)malloc(5 * sizeof(int));
    printf("&vhm = %p. vhm = %p\n", &vhm, vhm);
    puts("VETOR DINAMICO COM MALLOC");
    for (i = 0; i < 5; i++){
        printf("&vhm[%d] = %p. vhm[%d] = %d\n", i, &vhm[i], i, vhm[i]);
    }

    //alocação de um vetor dinâmico usando calloc
    int*vhc = (int*)calloc(5, sizeof(int));
    printf("&vhm = %p. vhm = %p\n", &vhc, vhc);
    puts("VETOR DINAMICO COM CALLOC");
    for (i = 0; i < 5; i++){
        printf("&vhm[%d] = %p. vhm[%d] = %d\n", i, &vhc[i], i, vhc[i]);
    }
    return 0;
}