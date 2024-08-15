/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estmarti <estmarti@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 12:13:43 by estmarti          #+#    #+#             */
/*   Updated: 2023/12/23 12:13:53 by estmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str, const char *str2, size_t c)
{
	size_t			i;
	unsigned int	diff;

	diff = 0;
	i = 0;
	while ((str[i] != '\0') && (str2[i] != '\0')
		&& (diff == 0) && (i < c))
	{
		diff = (unsigned char)str[i] - (unsigned char)str2[i];
		i++;
	}
	if ((diff == 0) && (i < c))
		diff = (unsigned char)str[i] - (unsigned char)str2[i];
	return (diff);
}

/*
#include <stdio.h>

int	main(void)
{
	// Cadenas de ejemplo
	const char *str1 = "Hello";
	const char *str2 = "Hella";

	// Comparar las cadenas utilizando ft_strncmp
	int result = ft_strncmp(str1, str2, 4);

	// Imprimir el resultado de la comparación
	if (result < 0)
		printf("Las cadenas son diferentes. str1 es menor que str2.\n");
	else if (result > 0)
		printf("Las cadenas son diferentes. str1 es mayor que str2.\n");
	else
		printf("Las cadenas son iguales.\n");

	return (0);
}
*/