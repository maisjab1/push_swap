/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabarin <mjabarin@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 16:27:46 by mjabarin          #+#    #+#             */
/*   Updated: 2026/02/07 20:19:45 by nibrahee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	push(t_stack *stack, t_node *node)
{
    if (!stack || !node)
		return (0);
	if (stack -> size == 0)
	{
		stack -> top = node;
		node -> next = NULL;
		node -> prev = NULL;
		stack -> size++;
	}
	else
	{
		node -> next = stack -> top;
		stack -> top -> prev = node;
		stack -> top = node;
		stack -> size++;
		stack -> top -> prev = NULL;
	}
	return (1);
}

void	pa(t_stack *a, t_stack *b,t_config *config)
{
	t_node	*node;

	if (!a || !b )
		return;
	node = pop(b);
	if (push(a, node))
	{
		ft_printf("pa\n");
		config->ops_count.pa++;
		config->ops_count.total++;
	}
}

void	pb(t_stack *b, t_stack *a,t_config *config)
{
	t_node	*node;

	if (!a || !b)
		return;
	node = pop(a);
	if (push(b, node) && node)
	{
		ft_printf("pb\n");
		config -> ops_count.pb++;
		config -> ops_count.total++;
	}
}

t_node	*pop(t_stack *stack)
{
	t_node	*temp;

	if (!stack || stack -> size == 0)
		return NULL;
	temp = stack -> top;
	stack -> top = stack -> top -> next;
	if (stack -> top)
		stack -> top -> prev = NULL;
	else
		stack -> top = NULL;//no nodes left in the stack
	temp -> next = NULL;
	temp -> prev = NULL;
	stack -> size--;
	return (temp);
}
