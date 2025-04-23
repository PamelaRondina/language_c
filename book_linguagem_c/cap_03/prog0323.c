//Escreva um programa que mostre se o ano 'e bissexto ou nao.

#include "../include/teste_biblioteca.h"

int main(void)
{
    int ano;

    printf("Escolha um ano (aaaa): ");
    scanf("%d", &ano);

    if (ano % 4 == 0)
        printf("O ano de %d: Bissexto.\n", ano);
    else
        printf("O ano de %d: Nao Bissexto\n", ano);
}   