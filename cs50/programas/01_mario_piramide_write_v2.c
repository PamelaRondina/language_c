#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c);
int ft_strlen(char *str)

int main(void)
{
    char question

}

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_strlen(char *str)
{
    int cont;

    cont = 0;
    while(str[cont] =! '\0')
        cont++;
    return (cont);
}

/*
##
#
*/