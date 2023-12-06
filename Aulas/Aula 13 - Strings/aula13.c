#include <stdio.h>

int main(void){
    char s[10];

    printf("Digite algo (scanf convencional): \n");
    scanf("%s", s);
    fflush(stdin);

    printf("Resultado: %s\n", s);

    printf("Digite algo (scanf aprimorado): \n");
    scanf("%9[^\n]s", s);
    fflush(stdin);

    printf("Resultado: %s\n", s);
}