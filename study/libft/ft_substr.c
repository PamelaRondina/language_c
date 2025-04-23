#include "libft.h"

//retorna uma nova string que 'e uma subparte de s, comecando do indice 'start'
//e com no maximo len caracteres
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t  len_s;
    size_t  real_len;
    char    *new_string;
    
    real_len = 0;
    len_s = ft_strlen(s);

    //1. Verificacao de entrada
	if (!s) 
		return (NULL);

    //2. Tamanho da string s, 
    // Duplica a string usando malloc, retorna para uma nova string vazia!
	if (start >= len_s)
		return (ft_strdup(""));
	
    //3. calcular o real tamanho da string 
    //while que copia quantos caracteres posso copiar
    //nao ultrapassa o final da string (start + real_len < len_s)
    //nem o maximo de caracteres pedidos (real_len < len)
    while ((start + real_len < len_s) && (real_len < len))
        real_len++;

    //alocar memoria para a nova string
    new_string = malloc(real_len + 1);
    if (!new_string)
        return (NULL);

    //5. Copiar os caracteres para a nova string
    ft_memcpy(new_string, s + start, real_len);
    new_string[real_len] = '\0';
	
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