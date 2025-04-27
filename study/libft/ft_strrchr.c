#include "libft.h"

// Retorna a última ocorrência encontrada
char *ft_strrchr(const char *s, int c)
{
    unsigned int i;
    char *result;

    i = 0;
    result = '\0';

    // Percorrer a string até o final
    while (s[i]) 
    {
        if (s[i] == (char)c) 
            result = (char *)(s + i);  // Atualiza a última ocorrência
        i++;  // Avança para o próximo caractere
    }

    // Verifica se o caractere c é o '\0' (final da string)
    if (c == '\0' && s[i] == '\0') 
        result = (char *)(s + i);  // Retorna o ponteiro para o final da string
    return (result);  // Retorna a última ocorrência encontrada
}
/*
int main(void) 
{
    const char *str = "Continue a Nadar!";
    char c = 'N';
    
    char *result = ft_strrchr(str, c);
    
    if (result) {
        printf("Última ocorrência de '%c': %s\n", c, result);
    } else {
        printf("Caractere '%c' não encontrado.\n", c);
    }

    return 0;
}
*/
