#include <stdio.h>
#include <stdlib.h>

int main(void){
    int idade = 0;

    printf("Valor da idade atribuida: %d.\n", idade);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("A idade digitada foi: %d.\n", idade);

    system("pause");
}