#include <unistd.h>
#include <stdio.h>

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

int main(void)
{
    //1 --> menor número inteiro
    ft_putnbr(-2147483648);
    printf("\n");

    ft_putnbr(-2147483647);
    printf("\n");

    ft_putnbr(147483648);
    printf("\n");
    
    ft_putnbr(-147483648);
    printf("\n");

    ft_putnbr(42);
    printf("\n");
    return (0);
}

/*
- Função imprime um número inteiro (nb) de forma recursiva. 
1) Localizar o menor número inteiro: man limits [biblioteca limits.h - printf("INT_MIN: %d\n", INT_MIN)];
    --> -2147483648 menor número que pode ser armazenado em um inteiro de 32 bits com sinal. 
    --> 2147483647 maior número positivo
    --> apos putchar imprimir -2 o restante da numeracao segue para o else if positivo

2) Se negativo
    --> putchar imprime sinal -
    --> (-nb) transforma o neativo em positivo (- com - == +)
    --> com o número positivo a funçao segue para a proxima etapa

3) Número positivo > que 9
    --> 123
        --. 123 / 10 = 12 | putnbr recursivo, 12 > 9;
        --. 12 / 10 = 1 | imprime '1', putnbr recursivo, sobra 2, 2 < 9 
        --. imprime '2'
        --. Sequencia ate o momento: '1' '2'
        --. passa para a próxima etapa:
        --. 123 % 10 = 3, imprime '3'
        --. Sequencia ate o momento: '1' '2' '3'
*/

/*imprimir INT MIN
#include <stdio.h>
#include <limits.h>

int main() {
    printf("INT_MIN: %d\n", INT_MIN);
    return 0;
}*/