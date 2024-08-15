/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estmarti <estmarti@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 13:12:28 by estmarti          #+#    #+#             */
/*   Updated: 2024/01/22 13:12:31 by estmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
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
    t_list *node1 = ft_lstnew("Node 1");
    t_list *node2 = ft_lstnew("Node 2");
    t_list *node3 = ft_lstnew("Node 3");

    // Lista inicialmente vacía
    t_list *my_list = NULL;

    // Utilizar ft_lstadd_front para añadir nodos al frente de la lista
    ft_lstadd_front(&my_list, node1);
    ft_lstadd_front(&my_list, node2);
    ft_lstadd_front(&my_list, node3);

    // Imprimir la lista resultante
    printf("Lista resultante:\n");
    print_list(my_list);

    // Liberar la memoria asignada para la lista
    free(node1);
    free(node2);
    free(node3);

    return 0;
}	
*/