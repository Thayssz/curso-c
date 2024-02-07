#include <stdio.h>

int main(void){
    int a = 10;
    int *p1 = &a;
    int **p2 = &p1;

    printf("\nValor de a: %d. Endereco a: %p.\n", a, &a);
    printf("Valor de p1: %p. Endereco p1: %p. Conteudo *p1: %d.\n", p1, &p1, *p1);
    printf("Valor de p2: %p. Endereco p2: %p. Conteudo *p2: %p.\n", p2, &p2, *p2);

    **p2 = 99;

    printf("\nValor de a: %d. Endereco a: %p.\n", a, &a);
    printf("Valor de p1: %p. Endereco p1: %p. Conteudo *p1: %d.\n", p1, &p1, *p1);
    printf("Valor de p2: %p. Endereco p2: %p. Conteudo *p2: %p.\n", p2, &p2, *p2);
}