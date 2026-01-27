/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabarin <mjabarin@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 13:18:59 by mjabarin          #+#    #+#             */
/*   Updated: 2025/12/03 12:57:25 by mjabarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned const char	*s;
	unsigned char		*d;

	d = dest;
	s = src;
	if (s < d)
	{
		while (n--)
			d[n] = s[n];
	}
	else
	{
		return (ft_memcpy(dest, src, n));
	}
	return (dest);
}
