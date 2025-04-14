//Escreva um programa que solicite um inteiro (entre 0 e 255) ao utilizar e mostre o inteiro seguinte e o caracter correspondente

//Introduza o inteiro (entre 0 e 255): 
//Foi introduzido 67 cujo caracter = 'C'
//O caracter seguinte = 'D' tem o ASCII = 68

#include "../include/teste_biblioteca.h"

int main()
{
    int n;

    printf("Introduza o inteiro (entre 0 e 255): ");
    scanf("%d", &n);

    if (n >= 0 && n <= 255)
    {
        printf("Foi introduzido %d cujo caracter = '%c'\n", n, (char) n);
        n = n + 1;
        printf("O caracter seguinte = %d tem o ASCII = '%c'\n", n, (char) n);
    }
    else 
        printf("Valor nao autorizado!");
}