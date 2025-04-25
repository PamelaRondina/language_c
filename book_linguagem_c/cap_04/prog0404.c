//Escreva um programa que escreva a tabuada que o utilizador desejar

#include "../include/teste_biblioteca.h"

int main(void)
{
    int i;
    int num;

    i = 0;

    printf("Escolha um numero: ");
    scanf("%d", &num);
        while (i <= 10)
    {
        printf("%2d * %d = %2d\n", i, num , (i * num));
        i++;
    }

    return (0);
}
