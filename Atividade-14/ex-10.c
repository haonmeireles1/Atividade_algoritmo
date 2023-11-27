#include <stdio.h>

int main() {
    int array[5]; // Array de inteiros com 5 elementos

    printf("Digite 5 valores inteiros:\n");

    // Lendo os valores para o array usando ponteiros
    for (int i = 0; i < 5; i++) {
        scanf("%d", array + i); // Usando aritmética de ponteiros para acessar cada elemento
    }

    printf("\nO dobro de cada valor lido é:\n");

    // Imprimindo o dobro de cada valor usando aritmética de ponteiros
    for (int i = 0; i < 5; i++) {
        printf("%d\n", *(array + i) * 2); // Usando aritmética de ponteiros para acessar e dobrar cada elemento
    }

    return 0;
}
