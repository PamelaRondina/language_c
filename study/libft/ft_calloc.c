//aloca memoria para um array de nmemb elementos, cada elemento tem size bytes
//e garante que toda essa memoria esteja zerada, zera todos os bytes alocados

//aloca memoria para um array de nmemb elementos, cada elemento tem size bytes
//e garante que toda essa memoria esteja zerada, zera todos os bytes alocados
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (!nmemb || !size)
		return (malloc(0));
	if (size != 0 && nmemb > ((size_t) -1) / size)
		return (NULL);
	ptr = malloc(nmemb * size);
	if(!ptr)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}

// int main()
// {
// 	char *ptr = ft_calloc(5, 2147483648);
// 	char *ptr2 = calloc(5, 2147483648);

// 	if(ptr)
// 		printf("Suceso\n");
// 	else
// 		printf("Nops!\n");
	
// 	if(ptr2)
// 		printf("Sucesso\n");
// 	else
// 		printf("Nops!\n");
// }
/*
int	main(void)
{
	size_t n = 0;

	int *ft_arr;
	int	*std_arr;
	
	ft_arr = ft_calloc(n, sizeof(int));	
	
	if (!ft_arr)
	{
		printf("Erro ao alocar com ft_calloc\n");
		return (1);
	}
	
	printf("ft_calloc: \n");
	for (size_t i = 0; i < n; i++)
		printf("ft_arr[%zu] = %d\n", i, ft_arr[i]);

	std_arr = calloc(n, sizeof(int));
	
	if (!std_arr)
	{
		printf("Erro ao alocar com calloc\n");
		return (1);
	}
	
	printf("calloc: \n");
	for (size_t i = 0; i < n; i++)
		printf("ft_arr[%zu] = %d\n", i, std_arr[i]);
	
	free(ft_arr);
	free(std_arr);
}*/

/*
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (!nmemb || !size)
		return (malloc(0));
		//OVERFLOW - estamos multiplicando dois size_t, se o resultado for:
		// nmemb * size . INT_MAX, entao dara OVERFLOW!
		//INT_MAX 'e o maior valor possivel pra size_t (definido em limits.h)
		// retorna NULL pq se der um numero maior do que se pode!
	if (size != 0 && nmemb > INT_MAX / size)
		return (NULL);
		//alocacao de memoria (ex: 5 elemntos * 4 bytes = 20 bytes)
		//malloc aloca os bytes,a memoria vem com lixo,valores aleatorios da RAM
	ptr = malloc(nmemb * size);
		//zerar a memoria alocada, utilizando funcao bzero
	ft_bzero(ptr, nmemb * size);
		//retornar o ponteiro
	return (ptr);
}*/
