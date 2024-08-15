/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estmarti <estmarti@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 18:05:25 by estmarti          #+#    #+#             */
/*   Updated: 2024/01/22 18:05:28 by estmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (!lst || !del || !(*lst))
		return ;
	ft_lstclear(&(*lst)->next, del);
	(del)((*lst)->content);
	free(*lst);
	*lst = NULL;
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

// Función para liberar la memoria de un elemento
void custom_del(void *content) {
    free(content);
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

    // Imprimir la lista antes de la liberación de memoria
    printf("Lista antes de liberar memoria:\n");
    print_list(my_list);

    // Utilizar ft_lstclear para liberar la memoria de la lista
    ft_lstclear(&my_list, custom_del);

    // Imprimir la lista después de la liberación de memoria (debería ser NULL)
    printf("Lista después de liberar memoria:\n");
    print_list(my_list);

    return 0;
}
*/