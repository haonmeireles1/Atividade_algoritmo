#include <stdio.h>

int main() {
    int inteiro = 10, novo_inteiro = 20;
    float real = 3.14, novo_real = 6.28;
    char caractere = 'A', novo_caractere = 'B';

    int *ponteiro_inteiro = &inteiro;
    float *ponteiro_real = &real;
    char *ponteiro_char = &caractere;

    printf("Valores antes da modificacao:\n");
    printf("Inteiro: %d\n", inteiro);
    printf("Real: %.2f\n", real);
    printf("Char: %c\n", caractere);

    *ponteiro_inteiro = novo_inteiro;
    *ponteiro_real = novo_real;
    *ponteiro_char = novo_caractere;

    printf("\nValores apos a modificacao:\n");
    printf("Inteiro: %d\n", inteiro);
    printf("Real: %.2f\n", real);
    printf("Char: %c\n", caractere);

    return 0;
}
