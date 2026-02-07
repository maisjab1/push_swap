/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_sorting_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nibrahee <nibrahee@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 12:12:59 by nibrahee          #+#    #+#             */
/*   Updated: 2026/02/07 12:13:04 by nibrahee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int     get_chunk_size(int size)
{
        if (size <= 100)
                return (15);
        else
                return (30);
}

int	find_pos(t_stack *stack, int index)
{
	t_node	*current;
	int	pos;

	current = stack -> top;
	pos = 0;
	while (current)
	{
		if (current -> index == index)
			return (pos);
		current = current -> next;
		pos++;
	}
	return (-1);
}

int	find_max_index(t_stack *stack)
{
	t_node	*current;
	int	max;

	if (!stack || !stack -> top)
		return (-1);
	current = stack -> top;
	max = current -> index;
	while (current)
	{
		if (current -> index > max)
			max = current -> index;
		current = current -> next;
	}
	return (max);
}

void	rotate_b_to_top(t_stack *b, int index,t_config *config)
{
	int	pos;

	pos = find_pos(b, index);
	if (pos <= (b -> size) / 2)
	{
		while (b -> top -> index != index)
			rb(b, config);
	}
	else
	{
		while (b -> top -> index != index)
			rrb(b, config);
	}
}
