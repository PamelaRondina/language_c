//escreva um programa que leia dois números e os apresente por ordem crescente´

#include "../include/teste_biblioteca.h"

int main()
{
    int i, j, temp;

    printf("Escolha dois números (separados por espaço!) ");
    scanf("%d %d", &i, &j);

    if (i > j)
    {
        temp = i;
        i = j;
        j = temp;
    }
    printf("%d, %d\n", i, j);
}