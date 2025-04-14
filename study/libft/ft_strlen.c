/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prondina <prondina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 16:36:43 by prondina          #+#    #+#             */
/*   Updated: 2025/04/12 12:26:34 by prondina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t count;

	count = 0;

	while (s[count] != '\0')	
		count++;
	return (count);
}
/*
int	main(void)
{
	const char test[] = "Swim hard, dream big...";

	printf("%lu\t", ft_strlen(test));
	printf("%lu\n", strlen(test));
}*/

