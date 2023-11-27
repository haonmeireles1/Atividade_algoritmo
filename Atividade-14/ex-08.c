#include <stdio.h>

int main() {
    float array[10]; // Array de float com 10 elementos

    printf("Endereços de cada posição do array:\n");

    for (int i = 0; i < 10; i++) {
        printf("Endereço do elemento %d: %p\n", i, (void *)&array[i]);
    }

    return 0;
}
