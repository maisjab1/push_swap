/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nibrahee <nibrahee@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 10:59:48 by nibrahee          #+#    #+#             */
/*   Updated: 2025/12/29 11:06:15 by nibrahee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long n, int upper)
{
	int			count;
	const char	*base;

	if (upper)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	count = 0;
	if (n >= 16)
		count += ft_puthex(n / 16, upper);
	count += ft_putchar(base[n % 16]);
	return (count);
}
