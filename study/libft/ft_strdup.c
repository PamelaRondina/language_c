#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		size;
	int		i;
	char	*dup;

	size = 0;
	while (src[size] != '\0')
		size++;
	dup = (char *)malloc(sizeof(char) * (size + 1));
	i = 0;
	while (src[i] != '\0')
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
/*
int	main(void)
{
	char test[] = "Continue a nadar...";
	char *copy;

	copy = ft_strdup(test);

	printf("Teste: %s\n", test);
	printf("Cópia: %s\n", copy);

	return (0);
}*/