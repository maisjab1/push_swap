/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabarin <mjabarin@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 16:27:46 by mjabarin          #+#    #+#             */
/*   Updated: 2026/01/24 17:02:49 by mjabarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	pa(t_list **a, t_list **b)
{
	if (!b || !*b)
		return;

	push(a ,*(int*)(*b)->content);
	pop(b);
}
void	pb(t_list **b, t_list **a)
{
	if (!a || !*a)
		return;
	push(b,*(int*)(*a)->content);
	pop(a);
}
