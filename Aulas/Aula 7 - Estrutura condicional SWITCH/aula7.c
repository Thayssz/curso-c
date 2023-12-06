#include <stdio.h>

int main(void){
    int num;

    printf("Digite um numero inteiro para que eu possa retornar um dia da semana correspondente: ");
    scanf("%d", &num);

    switch(num){
        case 1:
            printf("Domingo.");
            break;
        case 2:
            printf("Segunda.");
            break;
        case 3:
            printf("Terca.");
            break;
        case 4:
            printf("Quarta.");
            break;
        case 5:
            printf("Quinta.");
            break;
        case 6:
            printf("Sexta.");
            break;
        case 7:
            printf("Sabado.");
            break;
        default:
            printf("Nao ha dia da semana correspondente a esse numero.");
            break;
    }
}