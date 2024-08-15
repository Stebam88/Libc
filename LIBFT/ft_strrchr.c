/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estmarti <estmarti@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 12:11:16 by estmarti          #+#    #+#             */
/*   Updated: 2023/12/23 12:12:43 by estmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char const	*aux;

	aux = NULL;
	while (*str)
	{
		if (*str == (char)c)
			aux = str;
		str++;
	}
	if (*str == (char)c)
		return ((char *)str);
	else
		return ((char *)aux);
}

/*
#include <stdio.h>

int	main(void)
{
	// Cadena de ejemplo
	const char *str = "Hello, World!";
	char search_char = 'o';

	// Buscar la última aparición del carácter utilizando ft_strrchr
	char *result = ft_strrchr(str, search_char);

	// Imprimir el resultado
	if (result != NULL)
		printf("last de '%c' posición %td.\n", search_char, result - str);
	else
		printf("Carácter '%c' no encontrado en la cadena.\n", search_char);

	return (0);
}
*/