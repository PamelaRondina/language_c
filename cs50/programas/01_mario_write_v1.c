#include <unistd.h>

void ft_putchar(char c);

int main(void)
{
    int i;

    i = 0;
    while (i < 4)
    {
        ft_putchar('?');
        i++;
    }
    ft_putchar('\n');
    return (0);
}


void ft_putchar(char c)
{
    write(1, &c, 1);
}

// ????