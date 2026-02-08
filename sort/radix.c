/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nibrahee <nibrahee@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 16:30:59 by nibrahee          #+#    #+#             */
/*   Updated: 2026/02/08 16:34:59 by nibrahee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	get_max(t_stack *stack)
{
	t_node	*current;
	int		max;

	if (stack -> size == 0)
		return (0);
	current = stack -> top;
	max = current->index;
	while (current)
	{
		if (current -> index > max)
			max = current -> index;
		current = current -> next;
	}
	return (max);
}

void	process_bit(t_stack *a, t_stack *b, t_config *config, int bit)
{
	t_node	*node;
	int		j;
	int		size;

	size = a->size;
	j = 0;
	while (j < size)
	{
		node = a->top;
		if (((node->index >> bit) & 1) == 0)
			pb(b, a, config);
		else
			ra(a, config);
		j++;
	}
	while (b->size > 0)
		pa(a, b, config);
}

int	get_max_bits(t_stack *stack)
{
	int	max_bits;
	int	max;

	max = get_max(stack);
	max_bits = 0;
	while ((max >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}

void	radix_sort(t_stack *stack_a, t_stack *stack_b, t_config *config)
{
	int	max_bits;
	int	i;

	max_bits = get_max_bits(stack_a);
	init_stack(stack_b);
	i = 0;
	while (i < max_bits)
	{
		process_bit(stack_a, stack_b, config, i);
		i++;
	}
}
