
#include "libft.h"

//  encontrar a primeira ocorrência de um caractere específico em uma string.
// locate character in string
// the first character
//devolve um ponteiro para a primeira posicao encontrada
char *ft_strchr(const char *s, int c)
{
    unsigned int    i;
    char            character;
    
    character = (char) c;
    i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == character)
            return ((char *) &s[i]);
        i++;
    }
    if (s[i] == '\0' && character == '\0')
        return ((char *) &s[i]);
    return (NULL);
}
/*
int main(void)
{
    char teste[] = "Continue a Nadar...";
    char teste1[] = "Continue a Nadar...";

    printf("%s\n", ft_strchr(teste, 'p'));
    printf("%s\n", strchr(teste, 'p'));
       
}*/
