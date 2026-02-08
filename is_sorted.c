/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nibrahee <nibrahee@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 13:35:28 by nibrahee          #+#    #+#             */
/*   Updated: 2026/02/08 13:37:16 by nibrahee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_stack *stack)
{
	t_node	*current;

	if (stack -> size == 0 || stack -> size == 1)
		return (1);
	current = stack -> top;
	while (current && current -> next)
	{
		if (current -> index > current -> next -> index)
			return (0);
		current = current->next;
	}
	return (1);
}
