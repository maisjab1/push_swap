/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nibrahee <nibrahee@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 13:36:59 by nibrahee          #+#    #+#             */
/*   Updated: 2026/02/01 13:41:36 by nibrahee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_stack *stack)
{
	t_node	*first;
	t_node	*last;

	if (!stack || stack -> size < 2)
		return ;
	first = stack -> top;
	last = stack -> bottom;
	stack -> top = first -> next;
	stack -> top -> prev = NULL;
	last -> next = first;
	first -> prev = last;
	first -> next = NULL;
	stack -> bottom = first; 
}

void	ra(t_stack *a,t_config *config)
{
	rotate(a);
	ft_printf("ra\n");
	config->ops_count.ra++;
	config->ops_count.total++;
}

void	rb(t_stack *b,t_config *config)
{
	rotate(b);
	ft_printf("rb\n");
	config->ops_count.rb++;
	config->ops_count.total++;
}

void	rr(t_stack *a, t_stack *b,t_config *config)
{
	rotate(a);
	rotate(b);
	ft_printf("rr\n");
	config->ops_count.rr++;
	config->ops_count.total++;
}
