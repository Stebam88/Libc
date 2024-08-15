/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estmarti <estmarti@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 12:03:10 by estmarti          #+#    #+#             */
/*   Updated: 2023/12/23 12:05:02 by estmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if (*str == (char)c)
			return ((char *)str);
		str++;
	}
	if (*str == (char)c)
		return ((char *)str);
	else
		return (NULL);
}

/*
#include <stdio.h>

int	main(void)
{
	// Cadena de ejemplo
	const char *str = "Hello, World!";
	char search_char = 'W';

	// Buscar el carácter en la cadena utilizando ft_strchr
	char *result = ft_strchr(str, search_char);

	// Imprimir el resultado
	if (result != NULL)
		printf("char '%c' posición %td.\n", search_char, result - str);
	else
		printf("Carácter '%c' no encontrado en la cadena.\n", search_char);

	return (0);
}
*/