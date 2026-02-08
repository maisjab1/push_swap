/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabarin <mjabarin@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 15:20:48 by mjabarin          #+#    #+#             */
/*   Updated: 2026/02/08 15:26:54 by mjabarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	print_stack(t_stack **stack)
{
	t_node	*current;

	if (!stack || !*stack)
		return ;
	current = (*stack)->top;
	while (current)
	{
		ft_printf("Value: %d, Index: %d\n", current->value, current->index);
		current = current->next;
	}
}
