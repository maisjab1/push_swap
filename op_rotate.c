/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nibrahee <nibrahee@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 13:36:59 by nibrahee          #+#    #+#             */
/*   Updated: 2026/02/07 20:47:51 by nibrahee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	rotate(t_stack *stack)
{
	t_node	*first;
	t_node	*last;

	if (!stack|| !stack -> top|| stack -> size < 2)
		return (0);
	first = stack -> top;
	last = stack -> top;
	while (last -> next)
		last = last -> next;
	stack -> top = first -> next;
	stack -> top -> prev = NULL;
	last -> next = first;
	first -> prev = last;
	first -> next = NULL;
	return (1);
}

void	ra(t_stack *a,t_config *config)
{
	if (rotate(a))
	{
		ft_printf("ra\n");
		config->ops_count.ra++;
		config->ops_count.total++;
	}
}

void	rb(t_stack *b,t_config *config)
{
	if (rotate(b))
	{
		ft_printf("rb\n");
		config->ops_count.rb++;
		config->ops_count.total++;
	}
}

void	rr(t_stack *a, t_stack *b,t_config *config)
{
	if (rotate(a) && rotate(b))
	{
		ft_printf("rr\n");
		config->ops_count.rr++;
		config->ops_count.total++;
	}
}
