#include <stdio.h>

// Função para calcular a soma de A e B e armazenar o resultado em A
void calcularSoma(int *A, int B) {
    *A = *A + B; // Adiciona B ao valor de A e armazena o resultado em A
}

int main() {
    int numA = 5;
    int numB = 7;

    printf("Valores iniciais:\n");
    printf("A: %d\n", numA);
    printf("B: %d\n", numB);

    calcularSoma(&numA, numB); // Passa o endereço de numA como argumento

    printf("\nValores após calcularSoma:\n");
    printf("A: %d\n", numA); // Imprime o novo valor de numA (a soma)
    printf("B: %d\n", numB); // B não foi modificado

    return 0;
}
