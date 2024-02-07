#include <stdio.h>
#include <string.h>

#define N 20

int main(void){
    char s[N];
    int i;

    printf("Digite um texto: \n");
    gets(s);
    i = strlen(s);
    printf("Tamanho do texto: %d\n", i);
}