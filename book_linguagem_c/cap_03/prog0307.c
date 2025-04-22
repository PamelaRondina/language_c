//Escreva um programa que calcule o Salario Bruto, Salario liquido e Imposto a Pagar

//  Salario         |       Taxa
//  <1000           |       5%
//  >= 1000 e < 5000|       11%
//  >= 5000         |       35%

#include "../include/teste_biblioteca.h"

int main(void)
{
    float bruto;
    float liquido;
    float taxa;

    printf("Valor Salario: ");
    scanf("%f", &bruto);

    if (bruto < 1000)
        taxa = 0.05;
    else if (bruto >= 1000 && bruto < 5000)
        taxa = 0.11;
    else
        taxa = 0.35;

    printf("|Salario Bruto: %2.f|\t Imposto: %2.f|\t Salario Liquido: %2.f\n",
         bruto, bruto * taxa, bruto - (bruto * taxa));

    return (0);
}