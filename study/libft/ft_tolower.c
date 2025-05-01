#include "libft.h"

int	ft_tolower(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (c + 32);
	return (c);
}
// int main(void)
// {
// 	int i, j;
// 	i = 'A';
// 	j = 'A';
// 	printf("%d\t", ft_tolower(i));
// 	printf("%d\t", tolower(i));
// }