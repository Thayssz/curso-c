#include <stdio.h>

int main(void){
    int v[5];
    int i;

    for(i=0; i<=4; i++){ 
        printf("Insira um dado: \n");
        scanf("%d", &v[i]);
    }

    printf("Dados inseridos: \n");
    for (i=0; i<=4; i++){
        printf("%d\n", v[i]);
    }
}