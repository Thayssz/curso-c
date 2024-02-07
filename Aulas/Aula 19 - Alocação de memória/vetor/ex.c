#include <stdio.h>
#include <stdlib.h>

void soma_com_escalar(int v[], int n, int escalar){
    for(int i = 0; i < n; i++){
        v[i] += escalar;
    }
}

void print_vetor(const int *v, int n){
    for(int i = 0; i < n; i++){
        printf("&vhm[%d] = %p. vhm[%d] = %d\n", i, &v[i], i, v[i]);
    }
}

void desaloca_vetor(int **v){
    free(*v);
    *v = NULL;
}

int main(void){
    //alocação de um vetor estático
    puts("VETOR ESTATICO:");
    int v[5] = {0, 10, 20, 30, 40};

    print_vetor(v, 5);
    puts("");
    soma_com_escalar(v, 5, 9);
    print_vetor(v, 5);
    puts("");

    puts("VETOR DINAMICO COM CALLOC");
    int *vc = (int*) calloc(5, sizeof(int)); 
    for(int i = 0; i < 5; i++){
        vc[i] = i * 100;
    }
    print_vetor(vc, 5);
    puts("");
    soma_com_escalar(vc, 5, 9);
    print_vetor(vc, 5);
    puts("");

    //desalocando o vetor dinamico
    printf("Antes de desalocar o vetor:\n");
    printf("&vc = %p. vc = %p.\n", &vc, vc);
    desaloca_vetor(&vc);
    printf("Depois de desalocar o vetor:\n");
    printf("&vc = %p. vc = %p", &vc, vc);
}