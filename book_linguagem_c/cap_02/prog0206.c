/*Escreva um programa que solicite:
idade: 25
montante a depositar: 1.500
número da conta: 123456789
*/
#include <stdio.h>

int main()
{
    short idade;
    int valor;
    long conta;

        printf("Qual è a idade? ");
        scanf("%hd", &idade);
        printf("Qual o montante a depositar? ");
        scanf("%d", &valor);
        printf("Qual é o número da conta? ");
        scanf("%ld", &conta);

        printf("Uma pessoa de %hd anos depositou %d na conta %ld.\n", idade, valor, conta);


}