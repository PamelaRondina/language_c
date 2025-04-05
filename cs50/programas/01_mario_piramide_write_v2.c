/*
#
##
###
####
#####
######
#######
########
*/

#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c);
int ft_strlen(char *str);

int main(void)
{
    char question[] = "Escolha entre 1 e 8! \n";
    int size;
    int i;
    int j;

    write(1, &question, ft_strlen(question));
    scanf("%d", &size);

    while(size < 1 || size > 8)
    {
        write(1, &question, ft_strlen(question));
        scanf("%d", &size);
    }

    i = 1;
    while(i <= size)
    {
        j = 1;
        while(j <= i)
        {
            ft_putchar('#');
            j++;
        }
        ft_putchar('\n');
        i++;
    }  
    return (0);
}

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_strlen(char *str)
{
    int cont;

    cont = 0;
    while(str[cont] != '\0')
        cont++;
    return(cont);
}

