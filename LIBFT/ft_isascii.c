/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estmarti <estmarti@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 13:35:36 by estmarti          #+#    #+#             */
/*   Updated: 2023/12/21 13:35:38 by estmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*
#include <stdio.h>

int main() {
    // Ejemplos de valores para verificar si son códigos ASCII
    int val1 = 65;  // 'A'
    int val2 = 128; // No es un código ASCII
    int val3 = 36;  // '$'

    // Utilizar ft_isascii para comprobar si los valores son códigos ASCII
    int result1 = ft_isascii(val1);
    int result2 = ft_isascii(val2);
    int result3 = ft_isascii(val3);

    // Imprimir los resultados
    printf("%d es un código ASCII? %s\n", val1, (result1 ? "Sí" : "No"));
    printf("%d es un código ASCII? %s\n", val2, (result2 ? "Sí" : "No"));
    printf("%d es un código ASCII? %s\n", val3, (result3 ? "Sí" : "No"));

    return 0;
}
*/