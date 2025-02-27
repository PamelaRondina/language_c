#include <stdio.h>
#include <stdbool.h>

int main()
{
    const char *heroi = "Ezequiel";
    char *rank;
    int xp = 6710; // 6710 xp atual Pam (Dio) 27/02.

        while (xp >= 0)
        {
            if (xp <= 1000)
                rank = "Ferro";
            else if (xp <= 2000)
                rank = "Bronze";
            else if (xp <= 5000)
                rank = "Prata";
            else if (xp <= 7000)
                rank = "Ouro";
            else if (xp <= 8000)
                rank = "Platina";
            else if (xp <= 9000)
                rank = "Ascendente";
            else if (xp <= 10000)
                rank = "Imortal";
            else
                rank = "Radiante";
            printf("O Herói de nome %s está no nível %s\n", heroi, rank);
            return (0);
        }
    return (0);
}

    /*
    ok - Variáveis (int e char);
    ok - Operadores permitem operações matemáticas, relacionais e lógicas (<=);
    ok - Laços de repetição (while);
    ok - Estruturas de decisão (if-else);

    char de string funciona pois recebe um ponteiro para salvar o nome do herói, 
    somente leitura, string imutável, não deve/pode ser modificada.
    Caso queira modificar: char heroi[] = "Nome"
    
    char *rank recebe o valor para rank, somente leitura*/