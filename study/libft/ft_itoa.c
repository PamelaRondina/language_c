#include "libft.h"

//int para char
//Converte um numero inteiro em string
char *ft_itoa(int n)
{
    int size_str;
    char *new_string;

    size_str = 0;
    //1) Verificar se o numero é 0 
    if (n == 0)
        return ft_strdup("0");
    
    //2) Verificar se o numero é negativo
    if (n < 0)
    {
        new_string[size_str] = "-"; 
        ft_putnbr_fd(n, 1);
    }

    //3)Determinar o comprimento da string:

    while (n / 10 >= 0)
    {
        //se for negativo ganha + um espaço para o sinal negativo
        if (n < 0)
            size_str += 1;
        size_str++;
    }
        
    //4) Alocar memoria
    new_string = malloc((size_str + 1) * sizeof(char));
    if (!new_string)
        return(NULL);
    
    //5) Preencher a string de trás para frente:
    //perdida nessa etapa!!!
    new_string = 
        teste(n / 10);
        teste(n % 10);

    //6) tratar o sinal
    //acredito que esse passo tenha sido ajsutado la no passo 1
    
    //7) Adicionar o '\0'
    new_string[size_str] = '\0';

    //8) Retornar a strinf
    return (new_string);
}