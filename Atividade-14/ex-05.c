#include <stdio.h>

void maiorMenor(int *ptrA, int *ptrB) {
    if (*ptrA < *ptrB) {
        int temp = *ptrA;
        *ptrA = *ptrB;
        *ptrB = temp;
    }
}

int main() {
    int valorA, valorB;

    printf("Digite o primeiro valor inteiro: ");
    scanf("%d", &valorA);

    printf("Digite o segundo valor inteiro: ");
    scanf("%d", &valorB);

    printf("\nValores antes da troca:\n");
    printf("A: %d\n", valorA);
    printf("B: %d\n", valorB);

    maiorMenor(&valorA, &valorB);

    printf("\nValores depois da troca:\n");
    printf("A (maior): %d\n", valorA);
    printf("B (menor): %d\n", valorB);

    return 0;
}
