//Escreva um programa que mostre os 10 primeiros numeros pares

#include "../include/teste_biblioteca.h"

int main(void)
{
    int i;

    i = 0;
    while (i <= 10)
    {
        if (i%2 == 0)
            printf("%2d: PAR\n", i);
        i++;
    }
    return (0);
}

// 0: PAR
// 2: PAR
// 4: PAR
// 6: PAR
// 8: PAR
// 10: PAR