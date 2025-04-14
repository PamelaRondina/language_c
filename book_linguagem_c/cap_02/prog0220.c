// Escreva um programa que solitice ao utilizador uma determinada data e a mostre em seguida no formato dd/mm/aaaa

#include "../include/teste_biblioteca.h"

int main()
{
    int dia, mes, ano;

    printf("Escolha o dia: ");
    scanf(" %d", &dia);
    printf("Escolha o mes: ");
    scanf(" %d", &mes);
    printf("Escolha o ano: ");
    scanf(" %d", &ano);
    
    printf("A data escolhida: %d/%d/%d.\n", dia, mes, ano);
}