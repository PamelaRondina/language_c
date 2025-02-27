#include <stdio.h>

int main()
{
    int posicao, passos, resultado;

    printf("Em qual posição o herói está? ");
    scanf("%d", &posicao);

    printf("Quantos passos o herói andou: ");
    scanf("%d", &passos);

    resultado = posicao + passos;

    printf("Posicao final do heroi: %d\n", resultado);

    return (0);
}
