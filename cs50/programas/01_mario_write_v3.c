#include <unistd.h>

void ft_putchar(char c);

int main(void)
{
    int i;
    int j;

    i = 0;
    // j = 0; erro, aqui J passa a ser 3!

    while (i < 3)
    {
        j = 0;// Reinicia j para 0 cada linha, fora do 2º while!!
        while (j < 3)
        {
            
            ft_putchar('#');
            j++;
        }
        ft_putchar('\n');
        i++;  
    }
    
}


void ft_putchar(char c)
{
    write(1, &c, 1);
}

/*
###
###
###
*/
