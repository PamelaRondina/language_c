//Função que le uma string (ft_putstr)

#include <unistd.h>

void    ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
    write(1, "\n", 1);
}

int main(void)
{
    char a[] = "testando uma string";
    ft_putstr(a);
}