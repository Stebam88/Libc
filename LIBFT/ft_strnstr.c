/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estmarti <estmarti@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 12:18:48 by estmarti          #+#    #+#             */
/*   Updated: 2023/12/23 12:20:09 by estmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*needle == '\0' || needle == NULL)
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (needle[j] == haystack[i + j] && i + j < len)
		{
			if (needle[j + 1] == '\0')
				return ((char *)haystack + i);
			j++;
		}
		i++;
	}
	return (NULL);
}

/*
#include <stdio.h>

int	main(void)
{
	// Cadena de ejemplo
	const char *haystack = "Hello, World!";
	const char *needle = "World";

	// Buscar la subcadena utilizando ft_strnstr
	char *result = ft_strnstr(haystack, needle, 13);

	// Imprimir el resultado
	if (result != NULL)
		printf("Subcadena encontrada: %s\n", result);
	else
		printf("Subcadena no encontrada.\n");

	return (0);
}
*/