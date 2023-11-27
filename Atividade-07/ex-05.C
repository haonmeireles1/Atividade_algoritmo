/* Faça um programa que calcule e mostre a soma dos 50 primeiros números pares. */

#include <stdio.h>
int main()
{
    int numero = 2, controle, soma=0;
    
    for (controle = 1; controle <= 50; controle++)
    {
        soma = soma + numero;
        printf("%d,\n", soma);
        numero += 2;
    }
}
