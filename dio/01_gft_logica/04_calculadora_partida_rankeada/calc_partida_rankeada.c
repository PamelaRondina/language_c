#include <stdio.h>

void balance(int victory, int defeat);

int main(void)
{
    int i = 10;
    int j = 10;

    balance(i, j);
    balance(150, 5);

}

// saldo de vitórias: vitorias e derrotas
void balance(int victory, int defeat)
{
    int result = (victory - defeat);
    char *level;

    if (result < 10)
        level = "Ferro";
    else if (result < 20)
        level = "Bronze";
    else if (result < 50)
        level = "Prata";
    else if (result < 80)
        level = "Ouro";
    else if (result < 90)
        level = "Diamante";
    else if (result < 100)
        level = "Lendário";
    else
        level = "Imortal";

   printf("O Herói tem de saldo de %d está no nível de %s\n", result, level);
}
