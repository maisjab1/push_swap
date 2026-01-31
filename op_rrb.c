/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_rrb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nibrahee <nibrahee@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 14:48:39 by nibrahee          #+#    #+#             */
/*   Updated: 2026/01/31 14:49:52 by nibrahee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrb(t_list **b) // rotate stack b downwards
{
	t_list *prev;
	t_list *last;

	if (!b || !*b || !(*b)->next)
		return;
	prev = *b;
	while (prev->next->next)
		prev = prev->next;
	last = prev->next;
	prev->next = NULL;
	last->next = *b;
	*b = last;
	write(1, "rrb\n", 4);
}
