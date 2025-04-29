#include "libft.h"

//vai remover todos os caracteres "limite" 
//(os caracteres que você definir) de ambos os lados de uma string.

// recebe: s1 STRING ORIGINAL | set CARACTERES QUE SERAO REMOVIDOS
char    *ft_strtrim(char const *s1, char const *set)
{
    int     start;
    int     end;
    char    *new_string;

    if (!s1 || !set)
        return (NULL);

    start = 0;
        // Encontrar o início da nova string (o primeiro caractere de s1 que não está em set)
        // Enquanto ft_strchr(SET, Caractere de s1 estiver em SET), prossiga!
        //Vai apontar para a primeira posicao de S1 que nao tenha o SET
    while (s1[start] && ft_strchr(set, s1[start]))
        start++;

        // Se a string estiver vazia após a remoção dos caracteres de 'set'
    if (s1[start] == '\0')
        return (ft_strdup(""));
    
        // Localizar o final da string
    end = ft_strlen(s1);
    while (end > start && ft_strchr(set, s1[end - 1])) // Verifica do final para o começo
        end--;
    
    // Criar a nova string, alocar memória para ela
    new_string = ft_substr(s1, start, end - start);
    // ???????????????????????
    //Nao preciso verificar se deu erro de alocacao de memoria, pois em ft_substring ja faz isso!
    return (new_string);

    //????????? Precisa pular os caracteres especiaos??
    //9 a 13 e 32
}
/*
int main(void)
{
    char *str = "He   Hello, world!   He";
    char *result = ft_strtrim(str, "He");
    printf("Resultado: '%s'\n", result);  // Deve imprimir "Hello, world!"
    free(result);
}*/


/*
Duvidas:
1) while (s1[start] && ft_strchr(set, s1[start]))
Vai apontar para a primeira posicao de S1 que nao tenha o SET?

2) 
*/