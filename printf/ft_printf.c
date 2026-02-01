/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nibrahee <nibrahee@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 11:44:45 by nibrahee          #+#    #+#             */
/*   Updated: 2026/01/03 12:25:37 by nibrahee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_format(char f, va_list arg)
{
	if (f == 'c')
		return (ft_putchar(va_arg(arg, int)));
	else if (f == 's')
		return (ft_putstr(va_arg(arg, char *)));
	else if (f == 'p')
		return (ft_putptr(va_arg(arg, void *)));
	else if (f == 'd' || f == 'i')
		return (ft_putnbr(va_arg(arg, int)));
	else if (f == 'u')
		return (ft_putunbr(va_arg(arg, unsigned int)));
	else if (f == 'x')
		return (ft_puthex(va_arg(arg, unsigned long), 0));
	else if (f == 'X')
		return (ft_puthex(va_arg(arg, unsigned long), 1));
	else if (f == '%')
		return (ft_putchar('%'));
	else
		return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	arg;
	int		count;
	int		i;

	if (!str)
		return (-1);
	va_start(arg, str);
	count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != '%')
			count += ft_putchar(str[i++]);
		else
		{
			i++;
			count += ft_format(str[i++], arg);
		}
	}
	va_end(arg);
	return (count);
}
