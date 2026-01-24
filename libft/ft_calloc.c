/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabarin <mjabarin@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 13:25:29 by mjabarin          #+#    #+#             */
/*   Updated: 2025/12/11 16:25:38 by mjabarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*dst;

	if (nmemb != 0 && size > SIZE_MAX / nmemb)
		return (NULL);
	dst = malloc(nmemb * size);
	if (dst == NULL)
		return (NULL);
	ft_bzero(dst, nmemb * size);
	return (dst);
}
