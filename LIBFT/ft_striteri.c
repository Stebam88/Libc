/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estmarti <estmarti@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 14:51:17 by estmarti          #+#    #+#             */
/*   Updated: 2024/01/20 14:51:21 by estmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	if (s && f)
	{
		i = 0;
		while (*s)
			f(i++, s++);
	}
}

/*
#include <stdio.h>

// Función de ejemplo para imprimir el índice y el carácter de una cadena
void	print_index_char(unsigned int index, char *c)
{
	printf("Índice: %u, Carácter: %c\n", index, *c);
}

int	main(void)
{
	// Cadena de ejemplo
	char str[] = "Hello";

	// Aplicar ft_striteri para imprimir índices y caracteres
	ft_striteri(str, &print_index_char);

	return (0);
}
*/