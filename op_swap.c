/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nibrahee <nibrahee@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 13:42:33 by nibrahee          #+#    #+#             */
/*   Updated: 2026/02/07 20:47:32 by nibrahee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	swap(t_stack *stack) // swap the first two elements of stack a
{
	t_node	*first;
	t_node	*second;

	if (!stack || !stack -> top ||stack -> size < 2)
		return (0);
	first = stack -> top;
	second = stack -> top -> next;
	first -> next = second -> next;
	if (second -> next)
		second -> next -> prev = first;
	second -> prev = NULL;
	second -> next = first;
	first -> prev = second;
	stack -> top = second;
	return (1);
}

void	sa(t_stack *a,t_config *config)
{
	if (swap(a))
	{
		ft_printf("sa\n");
		config -> ops_count.sa++;
		config -> ops_count.total++;
	}
}

void	sb(t_stack *b,t_config *config)
{
	if (swap(b))
	{
		ft_printf("sb\n");
		config -> ops_count.sb++;
		config -> ops_count.total++;
	}
}

void	ss(t_stack *a, t_stack *b,t_config *config)
{
	if (swap(a) && swap(b))
	{
		ft_printf("ss\n");
		config -> ops_count.ss++;
		config -> ops_count.total++;
	}
}
