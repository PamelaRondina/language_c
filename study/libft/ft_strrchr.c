
#include "libft.h"

//retorna uma nova string que 'e uma subparte de s, comecando do indice 'start'
//e com no maximo len caracteres

// S: minha string
//START: local onde quero copiar
//LEN: o tamanho que quero copiar
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	size_s;
	size_t	i;
	char	*new_string;

	i = 0;
	//tamanho da string original
	size_s = ft_strlen(s);

	//1. Verificacao de entrada
	if (!s) 
		return (NULL);

	// Se o local que quero comecar a copiar [START] for >= ao tamanho da minha string Original 
	// ft_strdup: recebe uma string e duplica para a mesma, com malloc. Preenche com vazio
	if (start >= size_s)
		return (ft_strdup(""));
	
	//aqui que faz a copia!
	// While (a posicao do local que quero copiar (START[i] < tamanho da string) && (0 (i) < o tamanho que quero copiar), 
	//va para a proxia posicao, caminha pela string principal [s] ate achar o local que iniciara a copia
	// nisso I sera crementado
	while ((start + i < size_s) && (i < len))
		i++;

    //alocar memoria para a nova string
	// + 1 . para receber o NULO '\0'
	new_string = malloc(i + 1);
	if (!new_string)
		return (NULL);

    //5. Copiar os caracteres para a nova string
	ft_memcpy(new_string, s + start, i);
	new_string[i] = '\0';
	
	return (new_string);
}

int main(void)
{
    char *original = "abcdefg";
    char *sub;

    sub = ft_substr(original, 2, 3); //Retorno: "cde"

    if(sub)
    {
        printf("Substring: %s\n", sub);
        free(sub);
    }
    else
        printf("Erro ao criar substring!\n");
	
    return (0);
}