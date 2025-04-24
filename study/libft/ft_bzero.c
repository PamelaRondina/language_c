
#include "libft.h"

//Apaga os dados nos n bytes da memoria
//comecando no local apontado por s
//escrevendo 0
void	ft_bzero(void *s, size_t n)
{
	unsigned char *ptr;
	int	i;
	ptr = (unsigned char *)s;
	
	i = 0;
	while(i < n)
	{
		ptr[i] = 0;
		i++;
	}
}
/*
int	main()
{
	char teste[18] = "Continue a nadar!";
	int i;

	i = 0;
	printf("Antes do ft_bzero: %s\n", teste);
	
	ft_bzero(teste, 2);
	
	while (i < 18)
	{
		if (teste[i] == '\0')
			printf("0");
		else
			printf("%c", teste[i]);
		i++;
	}
	printf("\n");

	bzero(teste, 2);

	return(0);
}*/