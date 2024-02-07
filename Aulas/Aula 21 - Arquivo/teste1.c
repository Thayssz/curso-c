#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE* fp;
    fp = fopen("entrada.txt", "w"); //abrir arquivo
    if(fp == NULL){
        printf("Erro na abertura de arquivo");
        exit(1);
    }
    else{
        printf("Arquivo criado.\n");
    }
    if(fclose(fp)==0){
        printf("Arquivo fechado com sucesso.");
    } //fechar arquivo
    return 0;
}