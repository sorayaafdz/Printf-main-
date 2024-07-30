/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofernan <sofernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 13:47:34 by sofernan          #+#    #+#             */
/*   Updated: 2024/07/30 18:49:02 by sofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <stdint.h>

int		ft_printf(char const *format, ...);
int		ft_putchar(int c);
int		ft_putstr(char *str);
size_t	ft_strlen(const char *str);
int		ft_print_ptr(size_t ptr);
int		ft_putnbr(int nb);
int		ft_print_unsigned(unsigned int number);
int		ft_print_hex(unsigned int number, char *hex_digits);
void	ft_putchar_fd(char c, int fd);

#endif
