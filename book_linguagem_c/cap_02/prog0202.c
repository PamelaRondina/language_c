//escreva um programa que receba um numero pelo terminal e imprima-o tambem no terminal

#include <stdio.h>

int main (void)
{
    int num;

    printf("Introduza um num: ");
    scanf("%d", &num);
    printf("O numero escolhido foi: %d\n", num);
}