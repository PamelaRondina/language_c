//escreva um programa que receba pelo terminal dois int e que faca a soma deles

#include <stdio.h>

int main(void)
{
    int num1, num2;

    printf("Escolha dois numeros (separados por espaco!) ");
    scanf("%d %d", &num1, &num2);
    printf("A soma de %d + %d = %d\n", num1, num2, num1 + num2);
}