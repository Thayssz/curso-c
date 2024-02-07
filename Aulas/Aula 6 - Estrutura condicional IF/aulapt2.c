#include <stdio.h>
#include <stdlib.h>

int main(void){
    float nota;

    printf("Digite sua nota: ");
    scanf("%f", &nota);

    if (nota >= 4 && nota <= 7){
        printf("Pode fazer recuperacao!\n");
    }
        
}