#include <stdio.h>
#include <stdlib.h>

#define texto "Entrada e saída de dados."

int main(void){
    printf("%s\n", texto);

    int idade = 0;
    float peso = 0.0;
    char nome[50] = "";

    printf("Digite sua idade: ");
    scanf("%d.\n", &idade);

    printf("Digite seu peso: ");
    scanf("%f.\n", &peso);

    printf("Digite seu nome: ");
    scanf("%s.\n", nome);

    printf("Seu nome é %s, você tem %d anos de idade, e pesa %.2f kg.", nome, idade, peso);
}