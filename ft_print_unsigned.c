/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofernan <sofernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 13:47:18 by sofernan          #+#    #+#             */
/*   Updated: 2024/07/30 19:54:09 by sofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned(unsigned int number)
{
	int	printed_chars;

	printed_chars = 0;
	if (number > 9)
	{
		printed_chars += ft_print_unsigned(number / 10);
	}
	return (printed_chars += ft_putchar(number % 10 + '0'));
}
/*int main(void)
{
    ft_print_unsigned(0);
    write(1, "\n", 1);
    
    ft_print_unsigned(4294967295);
    write(1, "\n", 1);
    
    return (0);
}*/