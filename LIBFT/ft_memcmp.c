/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estmarti <estmarti@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 12:17:17 by estmarti          #+#    #+#             */
/*   Updated: 2023/12/23 12:18:22 by estmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *dst, const void *str, size_t n)
{
	unsigned char	*str2;
	unsigned char	*dst2;

	dst2 = (unsigned char *)dst;
	str2 = (unsigned char *)str;
	if (n)
		while (n--)
			if (*dst2++ != *str2++)
				return (*(--dst2) - *(--str2));
	return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	// Cadena de ejemplo
	const char *str = "Hello, World!";
	size_t n = ft_strlen(str);

	// Caracter a buscar en la cadena
	int search_char = 'W';

	// Buscar el carácter en la cadena utilizando ft_memchr
	void *result = ft_memchr(str, search_char, n);

	// Imprimir el resultado
	if (result != NULL)
		printf("char '%c' pos %td.\n", search_char, (char *)result - str);
	else
		printf("Carácter '%c' no encontrado en la cadena.\n", search_char);

	return (0);
}
*/