#include <stdio.h>
#include <string.h>

typedef struct _aluno{
    char nome[100];
    int idade;
} Aluno;

int main(void){
    Aluno ted;
    strcpy(ted.nome, "Ted");
    ted.idade = 10;

    printf("sizeof(Aluno) = %lu bytes\n", (unsigned long)sizeof(Aluno));    
}