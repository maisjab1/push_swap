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

void	push(t_stack **stack, int content)
{
	t_stack	*new_node;
	
	new_node = malloc(sizeof(t_stack));
	if (!new_node)
		return;
	new_node->content = content;
	new_node->index = -1; // Initialize with -1
	new_node->next = *stack;
	*stack = new_node;
}

void	pa(t_stack **a, t_stack **b)
{
	if (!b || !*b)
		return;

	push(a ,(*b)->content);
	ft_printf("pa\n");
	pop(b);
}
void	pb(t_stack **b, t_stack **a)

{
	if (!a || !*a)
		return;
	push(b,(*a)->content);
	ft_printf("pb\n");
	pop(a);
}
