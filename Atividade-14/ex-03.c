#include <stdio.h>

int main() {
    int var1, var2;

    printf("Digite o valor da primeira variável inteira: ");
    scanf("%d", &var1);

    printf("Digite o valor da segunda variável inteira: ");
    scanf("%d", &var2);

    printf("\nEndereço de var1: %p\n", (void*)&var1);
    printf("Endereço de var2: %p\n", (void*)&var2);

    if (&var1 > &var2) {
        printf("\nConteúdo do maior endereço (var1): %d\n", var1);
    } else {
        printf("\nConteúdo do maior endereço (var2): %d\n", var2);
    }

    return 0;
}
