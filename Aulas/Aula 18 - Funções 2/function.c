#include <stdio.h>

int soma(int x, int y){
    int z = x + y;

    printf("Funcao:\n");
    printf("&x = %p. x = %d.\n", &x, x);
    printf("&y = %p. y = %d.\n", &y, y);
    printf("&z = %p. z = %d.\n", &z, z);

    return z;
}

int main(void){
    int a = 10;
    int b = 20;
    int c;

    printf("\nAntes da funcao:\n");
    printf("&a = %p. a = %d.\n", &a, a);
    printf("&b = %p. b = %d.\n", &b, b);
    printf("&c = %p. c = %d.\n", &c, c);

    c = soma(a, b);

    printf("Depois da funcao:\n");
    printf("&a = %p. a = %d.\n", &a, a);
    printf("&b = %p. b = %d.\n", &b, b);
    printf("&c = %p. c = %d.\n", &c, c);

}