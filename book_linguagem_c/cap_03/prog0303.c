//implemente um programa que indique se o inteiro lido é zero ou não

#include "../include/teste_biblioteca.h"

int main()
{
    int n;

    printf("Escreva um número: ");
    scanf("%d", &n);

    if (n == 0)
        printf("O valor é igual a 0!\n");
    else
        printf("O valor NÂO é igual a 0!\n");

    //ou

    if (!n)
        printf("É zero/falso!\n");
    else
        printf("Não é zero!\n");
}