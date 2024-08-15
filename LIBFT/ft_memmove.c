/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estmarti <estmarti@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 12:56:33 by estmarti          #+#    #+#             */
/*   Updated: 2023/12/22 12:56:38 by estmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	unsigned char		*p_str1;
	unsigned const char	*p_str2;

	if (str1 < str2)
		return (ft_memcpy(str1, str2, n));
	p_str1 = (unsigned char *)str1;
	p_str2 = (unsigned const char *)str2;
	if (!n || str1 == str2)
		return (str1);
	while (n--)
		p_str1[n] = p_str2[n];
	return (str1);
}

/*
#include <stdio.h>

int	main(void)
{
	// Cadena de ejemplo
	char original[] = "Hello, World!";
	size_t length = strlen(original);

	// Crear un destino con suficiente espacio
	char destination[20];

	// Usar ft_memmove para copiar la cadena original a la cadena de destino
	ft_memmove(destination, original, length + 1);

	// Imprimir la cadena de destino
	printf("Cadena de destino (después de ft_memmove): %s\n", destination);

	// Modificar la cadena original
	original[0] = 'X';

	// Imprimir la cadena de destino nuevamente
	printf("Cadena de destino (modificado): %s\n", destination);

	return (0);
}
*/