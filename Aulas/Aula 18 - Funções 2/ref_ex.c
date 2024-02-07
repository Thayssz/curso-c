#include <stdio.h>

int soma_sub(int x, int y, int *w){
    int z;
    z = x + y;
    *w = x - y;

    printf("Funcao:\n");
    printf("&x = %p. x = %d.\n", &x, x);
    printf("&y = %p. y = %d.\n", &y, y);
    printf("&z = %p. z = %d.\n", &z, z);
    printf("&w = %p. w = %p.\n", &w, w);

    return z;
}

int main(void){
    int a = 10;
    int b = 20;
    int c, d;

    printf("\nAntes da funcao:\n");
    printf("&a = %p. a = %d.\n", &a, a);
    printf("&b = %p. b = %d.\n", &b, b);
    printf("&c = %p. c = %d.\n", &c, c);
    printf("&d = %p. d = %d.\n", &d, d);

    c = soma_sub(a, b, &d);

    printf("Depois da funcao:\n");
    printf("&a = %p. a = %d.\n", &a, a);
    printf("&b = %p. b = %d.\n", &b, b);
    printf("&c = %p. c = %d.\n", &c, c);
    printf("&d = %p. d = %d.\n", &d, d);
}