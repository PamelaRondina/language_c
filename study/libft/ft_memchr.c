# include "libft.h"

//Procura por um byte específico em uma área de memoria

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t  i;
    unsigned char *ptr_s;

    ptr/ (new_string);
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
} (a posicao do local que quero copiar (START[i] < tamanho da string) && (0 (i) < o tamanho que quero copiar), 
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
    }_s = (unsigned char *) s;
    i = 0;

    while (i < n)
    {
        if (ptr_s[i] == (unsigned char)c)
            return (ptr_s + i);
        i++;
    }
    return (NULL);
}

int main(void)
{
    char data[] = {10, 20, 30, 40, 50};
    unsigned char *result = memchr(data, 30, 5);

if (result)
    printf("Valor encontrado: %p, %d\n", result, *result);  // Agora sim, mostra o endereço correto

else
    printf("Valor não encontrado!\n");

printf("Endereço de memoria:  %p, %d\n", &data[2], data[2]);

}
