/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabarin <mjabarin@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 16:27:46 by mjabarin          #+#    #+#             */
/*   Updated: 2026/02/01 13:21:00 by nibrahee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void    push(t_stack *stack, t_node *node)
{
    if (!stack || !node)
		return ;
	if (stack -> size == 0)
	{
		stack -> top = node;
		stack -> bottom = node;
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
}

void	pa(t_stack *a, t_stack *b,t_config *config)
{
	t_node	*node;

	if (!a || !b )
		return;
	node = pop(b);
	push(a, node);
	ft_printf("pa\n");
	config->ops_count.pa++;
	config->ops_count.total++;
}

void	pb(t_stack *b, t_stack *a,t_config *config)
{
	t_node	*node;

	if (!a || !b)
		return;
	node = pop(a);
	push(b, node);
	ft_printf("pb\n");
	config->ops_count.pb++;
	config->ops_count.total++;
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
		stack -> bottom = NULL;
	temp -> next = NULL;
	temp -> prev = NULL;
	stack -> size--;
	return (temp);
}