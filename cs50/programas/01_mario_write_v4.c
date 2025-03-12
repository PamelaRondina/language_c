#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str);
void ft_putchar(char c);

int main(void)
{
    char question[] = "Qual é o tamanho? ";
    int size;
    int i;
    int j;

    write(1, &question, ft_strlen(question));
    scanf("%d", &size);
    
    i = 0;
    while(i < size)
    {
        j = 0;
        while(j < size)
        {
            ft_putchar('#');
            j++;
        }
        ft_putchar('\n');
        i++;
    }
    return (0);
}

int ft_strlen(char *str)
{
    int cont;

    cont = 0;
    while (str[cont] != '\0')
        cont++;
    return(cont);
}

void ft_putchar(char c)
{
    write(1, &c, 1);
}