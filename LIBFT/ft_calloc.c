/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estmarti <estmarti@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 12:44:15 by estmarti          #+#    #+#             */
/*   Updated: 2023/12/23 12:46:27 by estmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*result;

	result = malloc(count * size);
	if (!result)
		return (NULL);
	else
	{
		ft_bzero(result, (count * size));
		return (result);
	}
}

/*
#include <stdio.h>

int main() {
    size_t num_elements = 5;
    size_t element_size = sizeof(int);

    int *arr = (int *)ft_calloc(num_elements, element_size);
    if (arr == NULL) {
        fprintf(stderr, "Error: No se pudo asignar memoria\n");
        return 1;
    }
    printf("Array values: ");
    for (size_t i = 0; i < num_elements; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    free(arr);
    return 0;
}
*/