#include <stdio.h>


// Devolve um inteiro e recebe como parâmetro uma String

int ft_strlen(char *str)
{
    int cont;

    cont = 0;
    while (str[cont] != '\0')
        cont++;
    return(cont);
}

int main(void)
{
    int lenght;
    char str[] = "Continue a nadar...";
    //tamanho
    lenght = ft_strlen(str);

    printf("A frase \"%s\", contêm \'%d\' caracteres.", str, lenght);

    return (0);
}