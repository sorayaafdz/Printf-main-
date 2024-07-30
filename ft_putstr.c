/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofernan <sofernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 13:47:54 by sofernan          #+#    #+#             */
/*   Updated: 2024/07/30 20:09:57 by sofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	len;

	if (!str)
		str = "(nil)";
	len = ft_strlen(str);
	return (write(1, str, len));
}

/*int main(void)
{
    char *str = "Hello, 42!";
    ft_putstr(str);
    write(1, "\n", 1);

    ft_putstr(NULL);
    write(1, "\n", 1);

    return (0);
}*/