#include "libft.h"

//recebe uma string e divide ela em um array de strings
//possui um caracter delimitador

// analisar quantas inicios de palabras s possui!
static size_t	ft_count(const char *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0; //contar as palabras
	i = 0; // index para percorrer a string
	while (s[i]) //enquanto nao chegar no fim da string
	{
		while (s[i] == c) // caminha o index se encontrar caracter
			i++;
		if (s[i] != c && s[i]) // se encontrar uma palavra, aumenta count
		{
			count++; //palavra encontrada
			while (s[i] && s[i] != c) // se nao encontrar caracter, avança index!
				i++;
		}
	}
	return (count);
}

//alocar memoria para cada palavra 
//se falahar, libera todos os anteriores
static int	ft_malloc_great(char **word, int position, size_t buffer)
{
	int	i;

	i = 0;
	word[position] = malloc(buffer); //aloca espaco para a string na posicao atual
	if (NULL == word[position]) //se falhar
	{
		while (i < position) //libera todas as alocacoes anteriores
			free(word[i++]);
		free(word); //libera o proprio array de ponteiros
		return (1); //sinaliza erro
	}
	return (0); //sinaliza sucesso
}
//preenche o array com as palavras separadas
//returna 0 se malloc correr bem, caso contrario, retorna 1
//percorre s, extrai cada palavra, aloca memoria e copia
static int	ft_fill(char **arr, char const *s, char c)
{
	size_t	len;
	int		i;

	i = 0;
	while (*s)
	{
		len = 0; //len volta a 0
		while (*s == c && *s) //percorre o caracter
			++s;
		while (*s != c && *s) //conta o tamanho da palavra
		{
			++len;
			++s;
		}
		if (len) //se achou a palavra, tenta copiar
		{
			if (ft_malloc_great(arr, i, len + 1)) //aloca espaco (+1 para '\0'
				return (1);
				//s - len, aponta para o inicio da palavra atual, pq s ja foi incrementado len vezes durante o loop
			ft_strlcpy(arr[i], s - len, len + 1); //copia a palavra para o novo espaco
			++i;
		}
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	size_t	size_s;  //tamanho de string que recebo
	char	**word; // o array com cada string

	if (!s) //verifica se a string existe
		return (NULL);

	size_s = ft_count(s, c); // conta quantas palavras existem!
	word = malloc((size_s + 1) * sizeof(char *)); //alocar memoria, um array de ptr para cada palavra
	word[size_s] = NULL;
	if (ft_fill(word, s, c)) //copiar toda a string na posicao correta
		return (NULL);
	return (word);
}

int main (void)
{
    char *s = "oi tudo bem ";
    
    char **teste = ft_split(s, ' ');

    while (*teste)
        printf("%s\n", *teste++);
}
/*

FT_COUNT COM S[i]
static size_t  ft_count(const char *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0; //contar as palabras
	i = 0; // index para percorrer a string
	while (s[i])
	{
		while (s[i] == c) // caminha o index se encontrar caracter
			i++;
		if (s[i] != c && s[i] != '\0') // se encontrar uma palavra, aumenta count
		{
			count++;
			while (s[i] && s[i] != c) // se nao encontrar caracter, avança index!
				i++;
		}
	}
	return (count);
}
*/