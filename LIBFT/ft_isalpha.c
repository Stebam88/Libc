/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estmarti <estmarti@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 21:20:02 by estmarti          #+#    #+#             */
/*   Updated: 2023/12/20 22:23:12 by estmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}

/*
#include <stdio.h>

int main() {
    // Ejemplos de caracteres para verificar si son alfabéticos
    char char1 = 'A';
    char char2 = '7';
    char char3 = '$';

    // Utilizar ft_isalpha para comprobar si los caracteres son alfabéticos
    int result1 = ft_isalpha(char1);
    int result2 = ft_isalpha(char2);
    int result3 = ft_isalpha(char3);

    // Imprimir los resultados
    printf("Es %c alfabético? %s\n", char1, (result1 ? "Sí" : "No"));
    printf("Es %c alfabético? %s\n", char2, (result2 ? "Sí" : "No"));
    printf("Es %c alfabético? %s\n", char3, (result3 ? "Sí" : "No"));

    return 0;
}
*/