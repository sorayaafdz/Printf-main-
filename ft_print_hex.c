/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofernan <sofernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 13:47:00 by sofernan          #+#    #+#             */
/*   Updated: 2024/07/23 16:20:37 by sofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned int num, char *base)
{
	int	num_base[16];
	int	i;
	int	result;

	i = 0;
	result = 0;
	if (num == 0)
		result += ft_putchar('0');
	while (num)
	{
		num_base[i] = num % 16;
		num = num / 16;
		i++;
	}
	while (--i >= 0)
		result += ft_putchar(base[num_base[i]]);
	return (result);
}
/*
int main()
{
	unsigned int	num = 42;
	char			*base = "0123456789ABCDEF";

	ft_print_hex(num, base);
	ft_putchar('\n');
	return (0);
}*/