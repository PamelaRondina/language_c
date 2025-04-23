//Escreva um programa, 3 versoes, que leia um inteiro e indique se este inteiro 'e ou nao igual a zero

#include "../include/teste_biblioteca.h"

int main()
{
    int n;

    //Versao 1
    // if (n == 0)
    //     printf("Inteiro igual a zero!");
    // else
    //     printf("Inteiro nao e igual a zero!");

    //Versao 2
    // if (!n)
    //     printf("Inteiro igual a zero!");
    // else
    //     printf("Inteiro nao e igual a zero!");

    //Versao 3
    if (n != 0)
        printf("Inteiro nao e igual a zero!");
    else
        printf("Inteiro igual a zero!");



}