#include <stdio.h>

void ft_putchar();

int main(void)
{
    int i;

    i = 0;
    while (i < 4)
    {
        ft_putchar();
        i++;
    }
    printf("\n");
}

void ft_putchar()
{
    printf("X");
}