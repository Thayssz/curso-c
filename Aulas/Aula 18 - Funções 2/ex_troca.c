#include <stdio.h>

void func(int *px, int *py){
    px = py;
    *py = (*py) * (*px);
    *px = *px + 2;

    printf("&px = %p. px = %p. *px = %d\n", &px, px, *px);
    printf("&py = %p. py = %p. *py = %d\n", &py, py, *py);
}


int main(void){
    int x, y;

    scanf("%d", &x);
    scanf("%d", &y);

    func(&x, &y);
    printf("x = %d. &x = %p\n", x, &x);
    printf("y = %d. &y = %p", y, &y);

    return 0;
}