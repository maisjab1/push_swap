/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nibrahee <nibrahee@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 12:45:39 by nibrahee          #+#    #+#             */
/*   Updated: 2026/02/10 12:45:41 by nibrahee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	validate_args(char **args)
{
	int			i;
	long long	n;

	i = 0;
	while (args[i])
	{
		if (!ft_isnum(args[i]))
			error_and_exit();
		n = ft_atoi(args[i]);
		if (n > 2147483647 || n < -2147483648)
			error_and_exit();
		i++;
	}
}

char	**handle_split(char **argv, int start_index, int *split)
{
	char	**args;

	args = argv;
	*split = 0;
	if (ft_strchr(argv[start_index], ' '))
	{
		args = ft_split(argv[start_index], ' ');
		*split = 1;
	}
	return (args);
}
