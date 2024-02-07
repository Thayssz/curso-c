#include <stdio.h>

int main(void) {
    int a;

    printf("sizeof(a) = %lu bytes.\n", (unsigned long)sizeof(a));

    printf("\nsizeof(int) = %lu bytes.\n", (unsigned long)sizeof(int));
    printf("sizeof(short) = %lu bytes.\n", (unsigned long)sizeof(short));
    printf("sizeof(long) = %lu bytes.\n", (unsigned long)sizeof(long));
    printf("sizeof(unsigned long) = %lu bytes.\n", (unsigned long)sizeof(unsigned long));
    printf("sizeof(float) = %lu bytes.\n", (unsigned long)sizeof(float));
    printf("sizeof(double) = %lu bytes.\n", (unsigned long)sizeof(double));

    printf("\nsizeof(void *) = %lu bytes.\n", (unsigned long)sizeof(void *));
    printf("sizeof(int *) = %lu bytes.\n", (unsigned long)sizeof(int *));
    printf("sizeof(int **) = %lu bytes.\n", (unsigned long)sizeof(int **));
    printf("sizeof(int ***) = %lu bytes.\n", (unsigned long)sizeof(int ***));
    printf("sizeof(float *) = %lu bytes.\n", (unsigned long)sizeof(float *));

    return 0;
}