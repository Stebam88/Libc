/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estmarti <estmarti@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 14:05:58 by estmarti          #+#    #+#             */
/*   Updated: 2024/01/22 14:06:01 by estmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	(del)(lst->content);
	free(lst);
	lst = NULL;
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
    // Crear un nodo de ejemplo
    t_list *node = ft_lstnew(strdup("Node 1"));

    // Imprimir el nodo antes de liberar la memoria
    printf("Nodo antes de liberar memoria:\n");
    print_list(node);

    // Utilizar ft_lstdelone para liberar la memoria del nodo
    ft_lstdelone(node, custom_del);

    // Imprimir el nodo después de liberar la memoria (debería ser NULL)
    printf("Nodo después de liberar memoria:\n");
    print_list(node);

    return 0;
}
*/
