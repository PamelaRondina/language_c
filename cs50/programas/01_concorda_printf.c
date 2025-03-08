#include <stdio.h>

int main(void)
{
    char resposta;

    printf("Você concorda? S ou N \n");
    // um único caractere necessita do & em scanf
    scanf("%c", &resposta);

    if (resposta == 'S' || resposta == 's')
        printf("Sim, concordo!\n");
    else if (resposta == 'N' || resposta == 'n')
        printf("Não, não concordo!\n");
    else
        printf("Erro! Responda S (sim) ou N (não).\n");
}

int ft_strlen(char *str)
{
    int cont;

    cont = 0;
    while(str[cont] != '\0')
        cont++;
    return(cont);
}