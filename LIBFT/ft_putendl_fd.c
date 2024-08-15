/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estmarti <estmarti@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 15:15:41 by estmarti          #+#    #+#             */
/*   Updated: 2024/01/20 15:15:44 by estmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

/*
#include <stdio.h>

int	main(void)
{
	ft_putendl_fd("Hola, Mundo!", 1);

	// También puedes imprimir en un archivo u otro descriptor de archivo
	// Ejemplo: ft_putendl_fd("Otra línea", fd);

	return (0);
}
*/