/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estmarti <estmarti@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 12:16:35 by estmarti          #+#    #+#             */
/*   Updated: 2023/12/23 12:16:37 by estmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
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
	printf("char '%c' encontrado %td.\n", search_char, (char *)result - str);
	else
		printf("Carácter '%c' no encontrado en la cadena.\n", search_char);

	return (0);
}
*/