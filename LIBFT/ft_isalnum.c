/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estmarti <estmarti@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 13:20:21 by estmarti          #+#    #+#             */
/*   Updated: 2023/12/21 13:28:26 by estmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
	{
		return (1);
	}
	return (0);
}

/*
#include <stdio.h>

int main() {
    // Ejemplos de caracteres para verificar si son alfanuméricos
    char char1 = 'A';
    char char2 = '7';
    char char3 = '$';

    // Utilizar ft_isalnum para comprobar si los caracteres son alfanuméricos
    int result1 = ft_isalnum(char1);
    int result2 = ft_isalnum(char2);
    int result3 = ft_isalnum(char3);

    // Imprimir los resultados
    printf("Es %c alfanumérico? %s\n", char1, (result1 ? "Sí" : "No"));
    printf("Es %c alfanumérico? %s\n", char2, (result2 ? "Sí" : "No"));
    printf("Es %c alfanumérico? %s\n", char3, (result3 ? "Sí" : "No"));

    return 0;
}
*/