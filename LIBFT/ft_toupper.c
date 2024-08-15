/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estmarti <estmarti@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 12:00:07 by estmarti          #+#    #+#             */
/*   Updated: 2023/12/23 12:02:10 by estmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

/*
#include <stdio.h>

int	main(void)
{
	// Carácter de ejemplo en minúscula
	int lowercase_char = 'h';
	int uppercase_char = ft_toupper(lowercase_char);
	printf("Carácter original: %c\n", (char)lowercase_char);
	printf("Carácter convertido a mayúscula: %c\n", (char)uppercase_char);

	return (0);
}
*/