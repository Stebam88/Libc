/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estmarti <estmarti@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 14:29:22 by estmarti          #+#    #+#             */
/*   Updated: 2023/12/21 14:29:26 by estmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*s;
	size_t			i;

	i = 0;
	s = b;
	while (i < len)
	{
		s[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

/*
#include <stdio.h>

int	main(void)
{
	// Crear un área de memoria con suficiente espacio
	char buffer[20];

	size_t size = sizeof(buffer);
	ft_memset(buffer, 'A', size);

	// Imprimir el contenido del buffer
	printf("Contenido del buffer después de ft_memset: %s\n", buffer);

	// Modificar algunos bytes en el buffer
	buffer[5] = 'B';
	buffer[10] = 'C';

	// Imprimir el contenido del buffer nuevamente
	printf("Contenido modificar algunos bytes: %s\n", buffer);

	return (0);
}
*/