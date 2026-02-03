/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nibrahee <nibrahee@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 14:50:15 by nibrahee          #+#    #+#             */
/*   Updated: 2026/02/01 13:47:51 by nibrahee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(t_stack *stack) // rotate stack a downwards
{
	t_node	*first;
	t_node	*last;

	if (!stack || stack -> size < 2)
		return ;
	first = stack -> top;
	last = stack -> bottom;
	stack -> bottom = last -> prev;
	stack -> bottom -> next = NULL;
	last -> prev = NULL;
	last -> next = first;
	first -> prev = last;
	stack -> top = last;
}

void	rra(t_stack *a,t_config *config)
{
	reverse_rotate(a);
	ft_printf("rra\n");
	config->ops_count.rra++;
	config->ops_count.total++;
}

void	rrb(t_stack *b,t_config *config)
{
	reverse_rotate(b);
	ft_printf("rrb\n");
	config->ops_count.rrb++;
	config->ops_count.total++;
}

void	rrr(t_stack *a, t_stack *b,t_config *config)
{
	reverse_rotate(a);
	reverse_rotate(b);
	ft_printf("rrr\n");
	config->ops_count.rrr++;
	config->ops_count.total++;
}
