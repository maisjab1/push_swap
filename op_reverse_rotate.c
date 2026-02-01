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

void	reverse_rotate(t_list **stack) // rotate stack a downwards
{
	t_list	*prev;
	t_list	*last;

	if (!stack || !*stack || !(*stack)->next)
		return;
	prev = *stack;
	while (prev->next->next)
		prev = prev->next;
	last = prev->next;
	prev -> next = NULL;
	last -> next = *stack;
	*stack = last;
}

void	rra(t_list **a)
{
	reverse_rotate(a);
	ft_printf("rra\n");
}

void	rrb(t_list **b)
{
	reverse_rotate(b);
	ft_printf("rrb\n");
}

void	rrr(t_list **a, t_list **b)
{
	reverse_rotate(a);
	reverse_rotate(b);
	ft_printf("rrr\n");
}
