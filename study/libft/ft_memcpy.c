/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bt-rondina <bt-rondina@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 13:35:15 by prondina          #+#    #+#             */
/*   Updated: 2025/04/20 16:26:52 by bt-rondina       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//ft copia n bytes de SRC para a area de memoria de DEST
//retorna um ponteiro para DEST
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *ptr_dest;
	unsigned char *ptr_src;
	size_t i;

	ptr_dest = (unsigned char*) dest;
	ptr_src = (unsigned char *) src;
	i = 0;

	while (i < n)
	{
		ptr_dest[i] = ptr_src[i];
		i++;
	}
	return (dest);

	// while (i < n)
	// ptr_dest[i] = '\0';
	// return (dest);

}

int	main()
{
	const char teste[16] = "Continue a nadar";
	char copia[16];

	ft_memcpy(copia, teste, 16);
	printf("%s\n", copia);
	memcpy(copia, teste, 16);
	printf("%s\n", copia);
}