#include <stdio.h>

int main()
{
    int nv_monstro, dif_batalha, results;

    printf("Nível do Monstro: ");
    scanf("%d", &nv_monstro);

    printf("Nível de Dificuldade da Batalha: ");
    scanf("%d", &dif_batalha);

    results = nv_monstro * dif_batalha * 100;

    printf("Voce ganhou %d XP\n", results);
}

/*
num1 * num2 * 100
num1 = nível do monstro
num2 = dificuldade de batalha (varia de 1 a 100)
*/
