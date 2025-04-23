//Escreva um programa que indique o numero de dias que um mes tem (Fevereiro = 28 dias)

#include "../include/teste_biblioteca.h"

int main(void)
{
    int mes;

    printf("Escolha o numero do mes: 1...12: ");
    scanf("%d", &mes);

    if (mes == 2)
        printf("Possui 28 dias.\n");
    else if (mes == 4 || mes == 06 || mes == 9 || mes == 11)
        printf("Possui 30 dias.\n");
    else 
        printf("Possui 31 dias.\n");
    return (0);
}