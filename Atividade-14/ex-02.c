#include <stdio.h>

int main() {
    int var1, var2;

    printf("Endereço de var1: %p\n", (void*)&var1);
    printf("Endereço de var2: %p\n", (void*)&var2);

    if (&var1 > &var2) {
        printf("Maior endereço: %p\n", (void*)&var1);
    } else {
        printf("Maior endereço: %p\n", (void*)&var2);
    }

    return 0;
}
