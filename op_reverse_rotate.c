/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nibrahee <nibrahee@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 14:50:15 by nibrahee          #+#    #+#             */
/*   Updated: 2026/02/07 20:37:19 by nibrahee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	reverse_rotate(t_stack *stack) // rotate stack a downwards
{
	t_node	*last;

	if (!stack || !stack -> top ||stack -> size < 2)
		return (0);
	last = stack -> top;
	while (last -> next)
		last = last -> next;
	last -> prev -> next = NULL;
	last -> next = stack -> top;
	stack -> top -> prev = last;
	last -> prev = NULL;
	stack -> top = last;
	return (1);
}

void	rra(t_stack *a,t_config *config)
{
	if (reverse_rotate(a))
	{
		ft_printf("rra\n");
		config -> ops_count.rra++;
		config -> ops_count.total++;
	}
}

void	rrb(t_stack *b,t_config *config)
{
	if (reverse_rotate(b))
	{
		ft_printf("rrb\n");
		config -> ops_count.rrb++;
		config -> ops_count.total++;
	}
}

void	rrr(t_stack *a, t_stack *b,t_config *config)
{
	if (reverse_rotate(a) && reverse_rotate(b))
	{
		ft_printf("rrr\n");
		config -> ops_count.rrr++;
		config -> ops_count.total++;
	}
}
