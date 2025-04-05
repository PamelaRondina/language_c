//Crie uma função que leia ums string e a deixe ao contrário
#include <unistd.h>
#include <stdio.h>

char    ft_reverse_putstr(char *str)
{
    int i;
    
    i = 0;
    while (str[i])
        i++;
    i--;
    while (i >= 0) //to a ultima posicao da string for < que 0 (a primeira), faça:
    {
        write(1, &str[i], 1);
        i--;
    }
    write(1, "\n", 1);
}

int main(void)
{
    char a[] = "obrigada";

    ft_reverse_putstr(a);
    //printf("%s\n", a);
    return (0);
}