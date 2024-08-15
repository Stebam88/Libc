/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estmarti <estmarti@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 13:51:12 by estmarti          #+#    #+#             */
/*   Updated: 2023/12/22 13:51:15 by estmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize != 0)
	{
		while (src[i] && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	while (src[i])
		i++;
	return (i);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	// Destino con suficiente espacio
	char destination[20];

	// Cadena fuente
	const char *source = "Hello, World!";

	// Copiar la cadena utilizando ft_strlcpy
size_t result = ft_strlcpy(destination, source, sizeof(destination));

	// Imprimir el resultado y la cadena copiada
	printf("Resultado de ft_strlcpy: %zu\n", result);
	printf("Cadena copiada: %s\n", destination);

	return (0);
}

*/