#include <stdio.h>

int main(void){
    int a = 10;
    int b, c;

    printf("Valor de a: %d. Endereco: %p.\n", a, &a);
    printf("Valor de b: %d. Endereco: %p.\n", b, &b);
    printf("Valor de c: %d. Endereco: %p.\n", c, &c);

    b = 20;
    c = a + b;

    printf("\nValor de a: %d. Endereco: %p.\n", a, &a);
    printf("Valor de b: %d. Endereco: %p.\n", b, &b);
    printf("Valor de c: %d. Endereco: %p.", c, &c);
    return 0;
}