/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estmarti <estmarti@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 13:37:12 by estmarti          #+#    #+#             */
/*   Updated: 2023/12/21 13:48:27 by estmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c < 127)
		return (1);
	return (0);
}

/*
#include <stdio.h>

int main() {
    // Ejemplos de valores para verificar si son caracteres imprimibles
    int val1 = 'A';
    int val2 = 10; // Carácter de nueva línea, no es imprimible
    int val3 = '$';
    int result1 = ft_isprint(val1);
    int result2 = ft_isprint(val2);
    int result3 = ft_isprint(val3);

    // Imprimir los resultados
    printf("%c es un carácter imprimible? %s\n", val1, (result1 ? "Sí" : "No"));
    printf("%c es un carácter imprimible? %s\n", val2, (result2 ? "Sí" : "No"));
    printf("%c es un carácter imprimible? %s\n", val3, (result3 ? "Sí" : "No"));

    return 0;
}
*/