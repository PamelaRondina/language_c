//escreva um programa que solicite um salario ao utilizador e mostre o imposto a paagar
//se o salario for negativo ou zero mostre o erro respectivo
//se o salario fot maior que 1000 paga 10% de imposto, senao paga apenas 5%
#include "../include/teste_biblioteca.h"

int main()
{
    float salario;
    float imposto;
    float valor_atualizado;

    printf("Valor do salario: ");
    scanf("%f", &salario);

    if (salario <= 0)
        printf("Salario: Valor Invalido!");
    else if (salario >= 1000)
        {
            imposto = salario * 0.1;
            valor_atualizado = salario + imposto;
            printf("imposto: %2.f e salario: %2.f\n", imposto, salario);
            printf("salario + imposto: %2.f\n", valor_atualizado);
        }
    else 
        {
            imposto = salario * 0.05;
            valor_atualizado = salario + imposto;
            printf("imposto: %2.f e salario: %2.f\n", imposto, salario);
            printf("salario + imposto: %2.f\n", valor_atualizado);
        }
    return (0);
}