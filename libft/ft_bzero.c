/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabarin <mjabarin@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 14:18:04 by mjabarin          #+#    #+#             */
/*   Updated: 2025/12/03 11:41:58 by mjabarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
/*
#include <stdio.h>

int main(void)
  {
    char buff[8]="llllllll";
    int i;

    i = 0;
    ft_bzero(buff, 4);
    while (i < 8)
    {
      printf("%d", buff[i]);
      i++;
    }
   }*/
