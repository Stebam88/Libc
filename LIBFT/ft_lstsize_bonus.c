/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estmarti <estmarti@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 13:14:36 by estmarti          #+#    #+#             */
/*   Updated: 2024/01/22 13:14:38 by estmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

/*
#include <stdio.h>

int	main(void)
{
	// Crear una lista de ejemplo
	t_list *lst = (t_list *)malloc(sizeof(t_list));
	lst->content = (void *)1;
	lst->next = (t_list *)malloc(sizeof(t_list));
	lst->next->content = (void *)2;
	lst->next->next = (t_list *)malloc(sizeof(t_list));
	lst->next->next->content = (void *)3;
	lst->next->next->next = NULL;

	// Obtener el tamaño de la lista utilizando la función ft_lstsize
	int size = ft_lstsize(lst);

	// Imprimir el tamaño de la lista
	printf("Tamaño de la lista: %d\n", size);

	// Liberar la memoria de la lista
	while (lst)
	{
		t_list *temp = lst;
		lst = lst->next;
		free(temp);
	}

	return (0);
}
*/