/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estmarti <estmarti@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 12:20:47 by estmarti          #+#    #+#             */
/*   Updated: 2023/12/23 12:43:35 by estmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\v'
		|| *str == '\f' || *str == '\r')
	{
		str++;
	}
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
	{
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str++ - '0');
	}
	return (sign * result);
}
/*
#include <stdio.h>

int main(void) {
    const char *str1 = "12345";
    const char *str2 = "-6789";
    const char *str3 = "   42";
    const char *str4 = "   +99";
    const char *str5 = "  \t -123";
    int num1 = ft_atoi(str1);
    int num2 = ft_atoi(str2);
    int num3 = ft_atoi(str3);
    int num4 = ft_atoi(str4);
    int num5 = ft_atoi(str5);
    printf("Resultado 1: %d\n", num1);
    printf("Resultado 2: %d\n", num2);
    printf("Resultado 3: %d\n", num3);
    printf("Resultado 4: %d\n", num4);
    printf("Resultado 5: %d\n", num5);

    return 0;
}
*/
