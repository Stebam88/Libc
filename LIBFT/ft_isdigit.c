/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estmarti <estmarti@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 22:24:30 by estmarti          #+#    #+#             */
/*   Updated: 2023/12/20 22:24:32 by estmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/*
#include <stdio.h>

int main() {
    // Ejemplos de caracteres para verificar si son dígitos
    char char1 = '5';
    char char2 = 'A';
    char char3 = '$';

    // Utilizar ft_isdigit para comprobar si los caracteres son dígitos
    int result1 = ft_isdigit(char1);
    int result2 = ft_isdigit(char2);
    int result3 = ft_isdigit(char3);

    // Imprimir los resultados
    printf("Es %c un dígito? %s\n", char1, (result1 ? "Sí" : "No"));
    printf("Es %c un dígito? %s\n", char2, (result2 ? "Sí" : "No"));
    printf("Es %c un dígito? %s\n", char3, (result3 ? "Sí" : "No"));

    return 0;
}
*/