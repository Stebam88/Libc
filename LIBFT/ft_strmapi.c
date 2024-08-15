/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estmarti <estmarti@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 14:43:04 by estmarti          #+#    #+#             */
/*   Updated: 2024/01/20 14:43:12 by estmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*str_new(size_t n)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * (n + 1));
	if (!str)
		return (NULL);
	return (str);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*str;
	char	*result;

	if (!s)
		return (NULL);
	str = str_new(ft_strlen(s));
	if (!str)
		return (NULL);
	i = 0;
	result = str;
	while (*s)
		*str++ = f(i++, *s++);
	*str = '\0';
	return (result);
}

/*
#include <stdio.h>

char	transform_char(unsigned int index, char c)
{
	return c + (char)index;
}

int	main(void)
{
	// Cadena de ejemplo
	const char *original = "hello";

	// Aplicar ft_strmapi para transformar los caracteres
	char *result = ft_strmapi(original, &transform_char);

	// Imprimir el resultado
	printf("Cadena original: %s\n", original);
	printf("Cadena transformada: %s\n", result);

	// Liberar la memoria del resultado
	free(result);

	return (0);
}
*/