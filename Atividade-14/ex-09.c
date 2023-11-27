#include <stdio.h>

int main() {
    int matriz[3][3]; // Matriz de inteiros 3x3

    printf("Endereços de cada posição da matriz:\n");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Endereço do elemento [%d][%d]: %p\n", i, j, (void *)&matriz[i][j]);
        }
    }

    return 0;
}
