#include <stdio.h>

int main(void){
    int v[5] = {10, 20, 30, 40, 50};
    int i;
    float s = 0;

    for (i=0; i<=4; i++){
        s += v[i];
    }

    printf("%.2f", s/5);
}