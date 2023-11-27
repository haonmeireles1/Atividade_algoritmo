#include <stdio.h>

void trocarValores(int *ptrA, int *ptrB) {
    int temp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temp;
}

int main() {
    int valorA, valorB;

    printf("Digite o valor de A: ");
    scanf("%d", &valorA);

    printf("Digite o valor de B: ");
    scanf("%d", &valorB);

    printf("\nValores antes da troca:\n");
    printf("A: %d\n", valorA);
    printf("B: %d\n", valorB);

    trocarValores(&valorA, &valorB);

    printf("\nValores depois da troca:\n");
    printf("A: %d\n", valorA);
    printf("B: %d\n", valorB);

    return 0;
}
