#include <stdio.h>
#include <unistd.h>

int ft_strlen(char *str);
void ft_putchar(char c);
void ft_putnbr(int nb);

int main()
{
    char escolha[] = "Escolha um número: ";
    int n;

    write(1, escolha, ft_strlen(escolha)); //escolha[] já é um ponteiro nao precisa incluir o &
    scanf("%d", &n);

    while (n < 1)
    {
        write(1, "Escolha outro número: \n", 23);
        scanf("%d", &n);
    }
    write(1, "Seu número: ", 13);
    ft_putnbr(n);
}

int ft_strlen(char *str)
{
    int cont;

    cont = 0;
    while (str[cont] != '\0')
        cont++;
    return (cont);
}

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nb)
{
    if (nb == -2147483648)
    {
        ft_putchar('-');
        ft_putchar('2');
        ft_putnbr(147483648);
    }
    else if (nb < 0)
    {
        ft_putchar('-');
        ft_putnbr(-nb);    
    }
    else if (nb > 9)
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);  
    }
    else 
        ft_putchar(nb + '0');
}