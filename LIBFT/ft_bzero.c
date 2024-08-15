/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estmarti <estmarti@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 11:30:32 by estmarti          #+#    #+#             */
/*   Updated: 2023/12/22 12:12:25 by estmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)str)[i] = 0;
		i++;
	}
}
/*
int main() {
    // Crear un buffer de caracteres
    char buffer[10];

    // Imprimir el estado inicial del buffer
    printf("Antes de bzero: ");
    for (size_t i = 0; i < sizeof(buffer); ++i) {
        printf("%d ", buffer[i]);
    }
    printf("\n");

    // Utilizar ft_bzero para establecer a cero los primeros 5 bytes del buffer
    size_t num_bytes_a_cero = 5;
    ft_bzero(buffer, num_bytes_a_cero);

    // Imprimir el estado después de ft_bzero
    printf("Después de bzero: ");
    for (size_t i = 0; i < sizeof(buffer); ++i) {
        printf("%d ", buffer[i]);
    }
    printf("\n");

    return 0;
}
*/
