/* Faça um programa que leia um número inteiro positivo N e imprima todos os números naturais de 0 até N em ordem crescente. */
#include <stdio.h>

int main()
{

    int numero, help = 0;

    printf("Digite o numero:");
    scanf("%d", &numero);

    do
    {
        printf("%d\n", help);
        help ++;
    } while (help <= numero);
}
