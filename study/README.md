

Projeto | . | Programa | . | Descrição | Escopo
-|- | - | - |- |-
C00 | 00 | ft_putchar | OK | Função que mostre um caracter passado como parâmetro | `void ft_putchar(char c)`
C00 | 01 | ft_print_alphabet | -|
C00 | 02 | ft_print_reverse_alphabet | -|
C00 | 03 | ft_print_numbers | -|
C00 | 04 | ft_is_negative | -|
C00 | 05 | ft_print_comb | -|
C00 | 06 | ft_print_comb_2 | -|
C00 | 07 | ft_putnbr | OK | Função que transforma int em char | `void ft_putnbr(int nb);`
C00 | 08 | ft_combn | -|
C01 | 00 | ft_ft | -|
C01 | 01 | ft_ultimate_ft | -|
C01 | 02 | ft_swap | -|
C01 | 03 | ft_div_mod | -|
C01 | 04 | ft_ultimate_div_mod | -|
C01 | 05 | ft_putstr | -|
C01 | 06 | ft_strlen | OK | Função que conta o número de caracteres de uma string e retornar o valor encontrado.| `int ft_strlen(char *str)`
C01 | 07 | ft_ | -|
C01 | 08 | ft_ | - |
C02 | 00 | ft_ | - |
C02 | 01 | ft_ | - |
C02 | 02 | ft_ | - |


## Projeto C00

### C00 | 00 | ft_putchar 

> Função que mostre um caracter passado como parâmetro

```c
void ft_putchar(char c)
{
    write(1, &c, 1);
}
```

C00 | 01 | ft_print_alphabet | -|

C00 | 02 | ft_print_reverse_alphabet | -|

C00 | 03 | ft_print_numbers | -|

C00 | 04 | ft_is_negative | -|

C00 | 05 | ft_print_comb | -|

C00 | 06 | ft_print_comb_2 | -|

### C00 | 07 | ft_putnbr

> Função que transforma int em char

```c
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
```
C00 | 08 | ft_combn | -|

## Projeto C01 

C01 | 00 | ft_ft | -

C01 | 01 | ft_ultimate_ft | -

C01 | 02 | ft_swap | -

C01 | 03 | ft_div_mod | -

C01 | 04 | ft_ultimate_div_mod | -

C01 | 05 | ft_putstr | -

### C01 | 06 | ft_strlen 

> Função que conta o número de caracteres de uma string e retorna o valor encontrado.

```c
int ft_strlen(char *str)
{
    int cont;

    cont = 0;
    while (str[cont] != '\0')
        cont++;
    return(cont);
}
```