#include <unistd.h>

void ft_putchar(char c);

int main(void)
{
    int i;

    i = 0;
    while (i < 3)
    {
        ft_putchar('#');
        ft_putchar('\n');
        i++;
    }
}

void ft_putchar(char c)
{
    write(1, &c, 1);
}

/*
#
#
#
*/