/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofernan <sofernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 13:47:49 by sofernan          #+#    #+#             */
/*   Updated: 2024/07/23 16:44:26 by sofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int num)
{
	unsigned int	n;

	n = 0;
	if (num == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (num < 0)
	{
		n += ft_putchar('-');
		num *= -1;
	}
	if (num > 9)
	{
		n += ft_putnbr(num / 10);
		n += ft_putchar(num % 10 + '0');
	}
	else
		n += ft_putchar(num + '0');
	return (n);
}
