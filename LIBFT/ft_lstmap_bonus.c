/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estmarti <estmarti@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 18:11:32 by estmarti          #+#    #+#             */
/*   Updated: 2024/02/15 17:12:01 by estmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*set;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		set = f(lst->content);
		new_node = ft_lstnew(set);
		if (!new_node)
		{
			del(set);
			ft_lstclear(&new_list, (*del));
			return (new_list);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}

/*
#include <stdio.h>

void	*transform(void *content)
{
	char *str = malloc(sizeof(char) * 10);
	sprintf(str, "%d", *((int *)content));
	return (str);
}

// Función de prueba para liberar la memoria de una cadena
void	del(void *content)
{
	free(content);
}

int	main(void)
{
	// Crear una lista de ejemplo
	t_list *lst = ft_lstnew((void *)1);
	ft_lstadd_back(&lst, ft_lstnew((void *)2));
	ft_lstadd_back(&lst, ft_lstnew((void *)3));
	t_list *result = ft_lstmap(lst, transform, del);

	// Imprimir la lista resultante
	while (result)
	{
		printf("%s ", (char *)result->content);
		t_list *temp = result;
		result = result->next;
		free(temp->content);
		free(temp);
	}
	printf("\n");

	// Limpiar la lista original
	ft_lstclear(&lst, del);

	return (0);
}
*/