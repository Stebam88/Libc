/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estmarti <estmarti@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 13:22:07 by estmarti          #+#    #+#             */
/*   Updated: 2024/01/22 13:22:11 by estmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

/*
#include <stdio.h>

// Función para imprimir los elementos de la lista
void print_list(t_list *lst) {
    while (lst) {
        printf("%p -> ", lst->content);
        lst = lst->next;
    }
    printf("NULL\n");
}

int main() {
    // Crear algunos nodos de ejemplo
    t_list *node1 = ft_lstnew(strdup("Node 1"));
    t_list *node2 = ft_lstnew(strdup("Node 2"));
    t_list *node3 = ft_lstnew(strdup("Node 3"));

    // Lista inicialmente vacía
    t_list *my_list = NULL;

    // Añadir nodos a la lista
    my_list = node1;
    node1->next = node2;
    node2->next = node3;

    // Imprimir la lista antes de aplicar ft_lstlast
    printf("Lista antes de aplicar ft_lstlast:\n");
    print_list(my_list);

    // Utilizar ft_lstlast para obtener el último elemento de la lista
    t_list *last_node = ft_lstlast(my_list);

    // Imprimir el último elemento de la lista
    printf("last %p\n", last_node ? last_node->content : NULL);
    free(node1);
    free(node2);
    free(node3);

    return 0;
}
*/