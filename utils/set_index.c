/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_index.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nibrahee <nibrahee@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 16:38:41 by nibrahee          #+#    #+#             */
/*   Updated: 2026/02/08 16:40:46 by nibrahee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	get_index(t_stack *stack)
{
	int		index;
	t_node	*current;
	t_node	*compare;

	current = stack -> top;
	while (current)
	{
		index = 0;
		compare = stack -> top;
		while (compare)
		{
			if (current -> value > compare -> value)
				index++;
			compare = compare -> next;
		}
		current -> index = index;
		current = current -> next;
	}
}
