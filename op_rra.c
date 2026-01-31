/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_rra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nibrahee <nibrahee@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 14:50:15 by nibrahee          #+#    #+#             */
/*   Updated: 2026/01/31 14:51:38 by nibrahee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_list **a) // rotate stack a downwards
{
	t_list	*prev;
	t_list	*last;

	if (!a || !*a || !(*a)->next)
		return;
	prev = *a;
	while (prev->next->next)
		prev = prev->next;
	last = prev->next;
	prev->next = NULL;
	last->next = *a;
	*a = last;
	write(1, "rra\n", 4);
}
