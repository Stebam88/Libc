/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estmarti <estmarti@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 12:47:09 by estmarti          #+#    #+#             */
/*   Updated: 2023/12/23 12:48:40 by estmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*d;
	char	*p_s1;
	size_t	i;

	p_s1 = (char *)s1;
	i = 0;
	d = (char *)malloc(ft_strlen(p_s1) + 1);
	if (d == NULL)
		return (NULL);
	while (p_s1[i] != '\0')
	{
		d[i] = p_s1[i];
		i++;
	}
	d[i] = '\0';
	return (d);
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(void)
{
	// Cadena de ejemplo
	const char *original = "Hello, World!";

	// Duplicar la cadena utilizando ft_strdup
	char *duplicate = ft_strdup(original);

	// Imprimir la cadena original y la duplicada
	printf("Cadena original: %s\n", original);
	printf("Cadena duplicada: %s\n", duplicate);

	// Liberar la memoria de la cadena duplicada
	free(duplicate);

	return (0);
}
*/