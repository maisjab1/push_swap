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

void	pa(t_stack *a, t_stack *b)
{
	if (!a || !b )
		return;
	push(a ,b -> top);
	ft_printf("pa\n");
	pop(b);
}

void	pb(t_stack *b, t_stack *a)
{
	if (!a || !b)
		return;
	push(b,a -> top);
	ft_printf("pb\n");
	pop(a);
}

void	pop(t_stack *stack)
{
	t_node	*temp;

	if (!stack || stack -> size == 0)
		return ;
	temp = stack -> top;
	stack -> top = stack -> top -> next;
	if (stack -> top)
		stack -> top -> prev = NULL;
	else
		stack -> bottom = NULL;
	temp -> next = NULL;
	temp -> prev = NULL;
	free (temp);
	stack -> size--;
}