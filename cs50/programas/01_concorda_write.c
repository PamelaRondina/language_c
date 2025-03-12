#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str);

int main(void)
{
    char pergunta[] = "Você concorda? S ou N! \n";
    char resposta;
    char sim[] = "Sim, concordo!\n";
    char nao[] = "Não, não concordo!\n";
    char erro[] = "Erro! Responda S (sim) ou N (não).\n";
    
    write(1, &pergunta, ft_strlen(pergunta)); //print pergunta
    scanf("%c", &resposta);

    if (resposta == 'S' || resposta == 's')
        write(1, &sim, ft_strlen(sim));
    else if (resposta == 'N' || resposta == 'n')
        write(1, &nao, ft_strlen(nao));
    else
        write(1, &erro, ft_strlen(erro));
    return (0);
}

int ft_strlen(char *str)
{
    int cont;

    cont = 0;
    while (str[cont] != '\0')
        cont++;
    return (cont);
}