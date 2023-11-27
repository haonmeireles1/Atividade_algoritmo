#include <stdio.h>

int somaDobro(int *ptrA, int *ptrB) {
    *ptrA *= 2; // Armazena o dobro de A em A
    *ptrB *= 2; // Armazena o dobro de B em B

    return (*ptrA + *ptrB); // Retorna a soma do dobro de A e dobro de B
}

int main() {
    int valorA, valorB;

    printf("Digite o valor de A: ");
    scanf("%d", &valorA);

    printf("Digite o valor de B: ");
    scanf("%d", &valorB);

    int resultado = somaDobro(&valorA, &valorB);

    printf("\nO dobro de A agora é: %d\n", valorA);
    printf("O dobro de B agora é: %d\n", valorB);
    printf("A soma do dobro de A e B é: %d\n", resultado);

    return 0;
}
