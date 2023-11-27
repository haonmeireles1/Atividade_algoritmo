/* Faça um programa que determine e mostre os cinco primeiros múltiplos de 3 considerando números maiores que 0. */
#include<stdio.h>

int main(){

    int numero = 3,numeroMultiplicador = 1, resultado;


    do
    {
        resultado = numero * numeroMultiplicador;
        printf("%d",resultado);
        numeroMultiplicador  ++;

    } while (resultado < 15);
    
}
