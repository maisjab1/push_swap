/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabarin <mjabarin@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 16:39:26 by mjabarin          #+#    #+#             */
/*   Updated: 2026/02/08 16:39:28 by mjabarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_2(t_stack *a, t_config *config)
{
	if (!a)
		return ;
	if (is_sorted(a))
		return ;
	else
		sa (a, config);
}
