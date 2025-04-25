//Escreva um programa que mostre o seguinte:
// 1
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5 

#include "../include/teste_biblioteca.h"

int main(void)
{
    int i;
    int j;

    i = 1;
    while (i <= 5)
    {
        j = 1;
        while (j <= i)
        {
            printf("%d ", j);
            j++;
        }
        printf("\n");
        i++;
    }
}