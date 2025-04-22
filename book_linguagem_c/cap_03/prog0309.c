//Escreva um programa que aplique uma taxa de imposto
// Solteiros = 10% | Casados = 9%

#include "../include/teste_biblioteca.h"

int main(void)
{
    float   salario;
    char    estado_civil;

    printf("Valor Salario: ");
    scanf("%f", &salario);
    printf("Estado Civil: C = Casado | S = Solteiro: ");
    scanf(" %c", &estado_civil);

    if (estado_civil == 'C' || estado_civil == 'c')
        printf("Salario: %2.f\t|\t Imposto: %2.f\n", salario, (salario * 0.09));
    else
        if (estado_civil == 'S' || estado_civil == 's')
            printf("Salario: %2.f\t|\t Imposto: %2.f\n", salario, (salario * 0.10));
        else
            printf("Estado Civil Invalido!\n");
    return (0);
}