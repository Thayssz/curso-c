#include <stdio.h>
#include <stdlib.h>

int main(void){
    int a, b, soma, sub, mult, div;

    printf("Digite um numero: ");
    scanf("%d", &a);

    printf("Digite outro numero: ");
    scanf("%d", &b);

    soma = a + b;
    sub = a - b;
    mult = a * b;
    div = a / b;

    printf("Resultado da soma, subtracao, multiplicacao e divisao dos numeros informados, respectivamente:\n");
    printf("Soma: %d\n", soma);
    printf("Subtracao: %d\n", sub);
    printf("Multiplicacao: %d\n", mult);
    printf("Divisao: %d\n", div);
}