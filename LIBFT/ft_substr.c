/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estmarti <estmarti@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 12:49:07 by estmarti          #+#    #+#             */
/*   Updated: 2023/12/23 12:54:53 by estmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	return (str);
}

/*
#include <stdio.h>

int	main(void)
{
	// Cadena de ejemplo
	const char *original = "Hello, World!";

	// Obtener una subcadena utilizando ft_substr
	char *substring = ft_substr(original, 7, 5);

	// Imprimir el resultado
	printf("Cadena original: \"%s\"\n", original);
	printf("Subcadena: \"%s\"\n", substring);

	// Liberar la memoria del resultado
	free(substring);

	return (0);
}
*/