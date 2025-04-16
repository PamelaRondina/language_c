//escreva um programa que indique se um numero é positivo ou negativo

#include "../include/teste_biblioteca.h"

int main()
{
    int n;

    printf("Escreva um número: ");
    scanf("%d", &n);
    
    if (n >= 0)
        printf("%d é Positivo!\n", n);
    else
        printf("%d é Negativo!\n", n);
}