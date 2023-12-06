#include <stdio.h>
#include <string.h>

#define N 20

int main(void){
    char s1[N] = {"Logica de"};
    char s2[N] = {" programacao"};

    printf("Antes do strcat:\n");
    printf("str1: %s\n", s1);
    printf("str2: %s\n", s2);

    strcat(s1, s2);

    printf("Depois do strcat:\n");
    puts(s1);
}