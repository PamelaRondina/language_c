//Escreva um programa que solicite ao utilizador uma determinada data no formato aaaa-mm-dd e a mostre em seguida no formato dd/mm/aaaa

#include "../include/teste_biblioteca.h"

int main()
{
    int dia, mes, ano;

    printf("Data (Formato aaaa-mm-dd): ");
    scanf("%d-%d-%d", &ano, &mes, &dia);
    printf("Data completa: %d/%d/%d\n", dia, mes, ano);
}