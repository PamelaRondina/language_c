#include <stdio.h>

int main()
{
    int dia_da_semana = 4;
    
//recebe o dado dentro do parametro do switch
    switch (dia_da_semana)
    {
    case 1:
        printf("Domingo\n");
        break;
    case 2:
        printf("Segunda-feira\n");
        break;
    case 3:
        printf("Terça-feira\n");
        break;
    case 4:
        printf("Quarta-feira\n");
        break;
    case 5:
        printf("Quinta-feira\n");
        break;
    case 6:
        printf("Sexta-feira\n");
        break;
    case 7:
        printf("Sábado\n");
        break;
    case 8:
        printf("Domingo\n");
    default:
        printf("Número inválido\n");
    }

    return (0);
}

/*
Switch - case: utilizada para avaliar uma expressão e executar diferentes blocos de código com base no valor dessa expressão.
utilizada se existem várias opções a serem avaliadas com base em um valor específico

switch (expressao) { }

Break, utilizad para parar a execução da estrutura após um bloco de código ser executado.
*/