#include <stdio.h>

int main(void){
    float nota;

    printf("Digite sua nota: ");
    scanf("%f", &nota);

    if (nota >= 7){
        printf("Aprovado!!\n");
    }
    else{
        printf("Reprovado.\n");
    }        
}
