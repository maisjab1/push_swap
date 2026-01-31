/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabarin <mjabarin@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 16:27:46 by mjabarin          #+#    #+#             */
/*   Updated: 2026/01/24 17:02:49 by mjabarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	push(t_list **stack, int value)
{
		t_list	*new_node;
		int	*num;
		num = malloc(sizeof(int));
		if (!num)
			return;
		*num = value;
		new_node = ft_lstnew(num);
		if (!new_node)
		{
			free (num);
			return;
		}
	    ft_lstadd_front(stack, new_node);
}

void	pa(t_list **a, t_list **b)
{
	if (!b || !*b)
		return;

	push(a ,*(int*)(*b)->content);
	pop(b);
}
void	pb(t_list **b, t_list **a)
{
	if (!a || !*a)
		return;
	push(b,*(int*)(*a)->content);
	pop(a);
}
