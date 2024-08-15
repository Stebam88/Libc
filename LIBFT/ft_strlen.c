/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estmarti <estmarti@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 13:55:29 by estmarti          #+#    #+#             */
/*   Updated: 2023/12/22 13:54:22 by estmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

/*
#include <stdio.h>

int	main(void)
{
	// Cadena de ejemplo
	const char *str = "Hello, World!";

	// Obtener la longitud de la cadena utilizando ft_strlen
	size_t length = ft_strlen(str);

	// Imprimir la longitud de la cadena
	printf("Longitud de la cadena: %zu\n", length);

	return (0);
}

*/