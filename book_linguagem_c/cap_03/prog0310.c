//Escreva um programa que calcule os aumentos de ordenado para o corrente ano.
// Se > 1000 = aumento 5% | Caso contrario, aumenta 7%

#include "../include/teste_biblioteca.h"

int main(void)
{
    float salario;
    float aumento;
    float total;

    printf("Valor salario: ");
    scanf("%f", &salario);

    if (salario > 1000)
        aumento = 0.05;
    else
        aumento = 0.07;
    
    total = (salario * aumento) + salario;

        printf("Salario: %2.f | Aumento: %.2f | Valor Total: %.2f|\n", 
            salario, salario * aumento, total);
}