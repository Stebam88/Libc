/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estmarti <estmarti@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 12:56:39 by estmarti          #+#    #+#             */
/*   Updated: 2023/12/23 13:44:42 by estmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*res;
	int		i;
	int		j;

	i = 0;
	j = 0;
	res = (char *) malloc((ft_strlen(s1) + ft_strlen(s2) + 1)
			* sizeof(char));
	if (!res)
		return (NULL);
	while (s1[i])
	{
		res[j++] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		res[j++] = s2[i];
		i++;
	}
	res[j] = 0;
	return (res);
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(void)
{
	// Cadenas de ejemplo
	const char *str1 = "Hello, ";
	const char *str2 = "World!";

	// Concatenar las cadenas utilizando ft_strjoin
	char *result = ft_strjoin(str1, str2);

	// Imprimir el resultado
	printf("Cadena concatenada: %s\n", result);

	// Liberar la memoria del resultado
	free(result);

	return (0);
}
*/