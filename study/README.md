

Projeto | . | Programa | . | Descrição | Escopo
-|- | - | - |- |-
C00 | 00 | ft_putchar | - |
C00 | 01 | ft_print_alphabet | -|
C00 | 02 | ft_print_reverse_alphabet | -|
C00 | 03 | ft_print_numbers | -|
C00 | 04 | ft_is_negative | -|
C00 | 05 | ft_print_comb | -|
C00 | 06 | ft_print_comb_2 | -|
C00 | 07 | ft_putnbr | -|
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