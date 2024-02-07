#include <stdio.h>
#include <stdlib.h>

int main(void){
    int dado = 10;

    printf("Valor atribuido a variavel sem modificacao: %d\n", dado);

    dado++;
    printf("Depois do incremento: %d\n", dado);

    dado--;
    printf("Depois do decremento: %d\n", dado);

    dado+=2;
    printf("Depois do incremento generico: %d\n", dado);

    dado-=3;
    printf("Depois do decremento generico: %d\n", dado);

    dado*=10;
    printf("Depois da atribuicao com multiplicacao: %d\n", dado);

    dado/=2;
    printf("Depois da atribuicao com divisao: %d\n", dado);
}