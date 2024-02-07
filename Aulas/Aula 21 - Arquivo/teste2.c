#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE* fp;
    char c[20];
    fp = fopen("entrada.txt", "r"); //abrir arquivo
    if(fp == NULL){
        printf("Erro na abertura de arquivo");
        exit(1);
    }
    else{
        printf("Arquivo criado.\n");
    }


    // c = fgetc(fp);
    // printf("%c\n", c);

    // fgets(c, 20, fp);
    // printf("%s\n", c);

    fscanf(fp, "%s", c);
    printf("%s\n", c);


    if(fclose(fp)==0){
        printf("Arquivo fechado com sucesso.");
    } //fechar arquivo
    return 0;
} 