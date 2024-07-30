/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofernan <sofernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 13:47:49 by sofernan          #+#    #+#             */
/*   Updated: 2024/07/30 20:27:53 by sofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int number)
{
	unsigned int	printed_chars;

	printed_chars = 0;
	if (number == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (number < 0)
	{
		printed_chars += ft_putchar('-');
		number *= -1;
	}
	if (number > 9)
	{
		printed_chars += ft_putnbr(number / 10);
		printed_chars += ft_putchar(number % 10 + '0');
	}
	else
		printed_chars += ft_putchar(number + '0');
	return (printed_chars);
}

/*int main(void)
{
    int len;

    len = ft_putnbr(-2147483648);
	ft_putchar('\n');
	printf("%i", len);
 
    return (0);
}*/
