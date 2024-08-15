/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estmarti <estmarti@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 18:08:11 by estmarti          #+#    #+#             */
/*   Updated: 2024/01/22 18:08:14 by estmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
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

// Función para imprimir el contenido de un nodo
void print_content(void *content) {
    printf("%s\n", (char *)content);
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

    // Imprimir la lista antes de aplicar ft_lstiter
    printf("Lista antes de aplicar ft_lstiter:\n");
    print_list(my_list);
    ft_lstiter(my_list, print_content);

    return 0;
}
*/