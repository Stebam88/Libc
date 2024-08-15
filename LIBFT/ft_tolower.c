/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estmarti <estmarti@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 12:01:25 by estmarti          #+#    #+#             */
/*   Updated: 2023/12/23 12:01:27 by estmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

/*
#include <stdio.h>

int	main(void)
{
	// Caracter de ejemplo en mayúscula
	int uppercase_char = 'H';

	// Aplicar ft_tolower para convertir el carácter a minúscula
	int lowercase_char = ft_tolower(uppercase_char);

	// Imprimir el resultado
	printf("Carácter original: %c\n", (char)uppercase_char);
	printf("Carácter convertido a minúscula: %c\n", (char)lowercase_char);

	return (0);
}
*/