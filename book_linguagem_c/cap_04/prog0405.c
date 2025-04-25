//Escreva um programa que mostre as 5 primeiras tabuadas

#include "../include/teste_biblioteca.h"

int main(void)
{
    int i;
    int j;

    j = 1;
    while (j <= 5)
    {
        i = 1;
        while (i <= 10)
        {
            printf("%2d * %2d = %2d\n", j, i, (j * i));
            i++;
        }
        printf("\n");
        j++;
    }

    return (0);
}