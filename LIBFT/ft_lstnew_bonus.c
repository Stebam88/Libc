/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estmarti <estmarti@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 13:05:23 by estmarti          #+#    #+#             */
/*   Updated: 2024/01/22 13:05:27 by estmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

/*
#include <stdio.h>

int	main(void)
{
	// Crear un nuevo nodo con contenido entero
	int *value = (int *)malloc(sizeof(int));
	*value = 42;

	t_list *new_node = ft_lstnew((void *)value);

	// Verificar si la creación del nodo fue exitosa
	if (new_node)
	{
		printf("Nuevo nodo creado con éxito.\n");

		// Imprimir el contenido del nodo
		printf("Contenido del nodo: %d\n", *((int *)new_node->content));

		// Liberar la memoria del contenido y del nodo
		free(new_node->content);
		free(new_node);
	}
	else
	{
		printf("Error al crear el nuevo nodo.\n");
	}

	return (0);
}
*/