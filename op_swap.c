/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nibrahee <nibrahee@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 13:42:33 by nibrahee          #+#    #+#             */
/*   Updated: 2026/02/01 13:46:23 by nibrahee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack **stack) // swap the first two elements of stack a
{
	int	temp;

	if (!stack || !*stack || !(*stack) -> next)
		return;
	temp = (*stack) -> content;
	(*stack) -> content = (*stack) -> next -> content;
	(*stack) -> next -> content = temp;
}

void	sa(t_stack **a)
{
	swap(a);
	ft_printf("sa\n");
}

void    sb(t_stack **b)
{
	swap(b);
	ft_printf("sb\n");
}

void	ss(t_stack **a, t_stack **b)
{
	swap(a);
	swap(b);
	ft_printf("ss\n");
}
