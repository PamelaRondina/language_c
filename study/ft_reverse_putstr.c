//Crie uma função que leia ums string e a deixe ao contrário

#include <stdio.h>

void   ft_reverse_putstr(char *str)
{
    int i, j;
    char temp;
    
    i = 0;
    j = 0;
    while (str[i])
        i++;
    i--;

    while (j < i) // enquanto a ultima posicao da string for < que 0 (a primeira), faça:
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        //printf("%c", temp); // imprime da metade para o final e deixa inverso (ale) p a m E L A 
        j++;
        i--;
    }
}

int main(void)
{
    char a[] = "pamela";

    ft_reverse_putstr(a);
    printf("%s\n", a);
    return (0);
}