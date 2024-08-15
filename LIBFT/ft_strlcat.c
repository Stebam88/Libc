/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estmarti <estmarti@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 11:50:59 by estmarti          #+#    #+#             */
/*   Updated: 2023/12/23 11:51:01 by estmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	londst;
	size_t	lonsrc;
	size_t	cont;

	londst = ft_strlen(dst);
	lonsrc = ft_strlen(src);
	if (dstsize <= londst)
		return (lonsrc + dstsize);
	cont = londst;
	while (*src != '\0' && cont < (dstsize - 1))
		*(dst + cont++) = *src++;
	*(dst + cont) = '\0';
	return (londst + lonsrc);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	// Destino con suficiente espacio
	char destination[20] = "Hello, ";

	// Cadena fuente
	const char *source = "World!";

	// Concatenar las cadenas utilizando ft_strlcat
	size_t result = ft_strlcat(destination, source, sizeof(destination));

	// Imprimir el resultado y la cadena concatenada
	printf("Resultado de ft_strlcat: %zu\n", result);
	printf("Cadena concatenada: %s\n", destination);

	return (0);
}

*/