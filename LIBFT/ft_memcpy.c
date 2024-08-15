/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estmarti <estmarti@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 12:14:41 by estmarti          #+#    #+#             */
/*   Updated: 2023/12/22 12:51:16 by estmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned const char	*s;
	unsigned char		*d;
	size_t				i;

	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	i = 0;
	while (dest == src || !n)
	{
		return (dest);
	}
	while (n > i)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

/*
#include <stdio.h>

int	main(void)
{
	// Cadena de origen
	const char *source = "Hello, World!";
	size_t source_length = strlen(source);

	// Crear un destino con suficiente espacio
	char destination[20];

	// Copiar la cadena de origen en la cadena de destino utilizando ft_memcpy
	ft_memcpy(destination, source, source_length + 1);

	// Imprimir la cadena de destino
	printf("Cadena de destino: %s\n", destination);

	return (0);
}
*/