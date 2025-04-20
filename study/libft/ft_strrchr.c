# include "libft.h"
//  encontrar a ultima ocorrência de um caractere específico em uma string.
char *ft_strrchr(const char *s, int c)
{
    unsigned int    i;
    char            character;
    char            *last;
    
    character = (unsigned char) c;
    i = 0;
    last = NULL;
    while (s[i] != '\0')
    {
        if (s[i] == character)
            last = ((char *) &s[i]);
        i++;
    }
    if (s[i] == '\0' && character == '\0')
        last = ((char *) &s[i]);
    return (last);
}

int main(void)
{
    char teste[] = "Nadar e Nadar...";
    char teste1[] = "Nadar a Nadar...";

    printf("%s\n", ft_strrchr(teste, 'a'));
    printf("%s\n", strrchr(teste, 'a'));
}