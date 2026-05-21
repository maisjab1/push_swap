/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nibrahee <nibrahee@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 12:45:14 by nibrahee          #+#    #+#             */
/*   Updated: 2026/02/10 12:45:15 by nibrahee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_duplicate(char **argv, int start_index)
{
	int	i;
	int	j;

	i = start_index;
	while (argv[i])
	{
		j = i + 1;
		while (argv[j])
		{
			if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_isnum(char *num)
{
	int	i;

	i = 0;
	if (!num || !*num)
		return (0);
	if (num[i] == '-' || num[i] == '+')
		i++;
	if (!num[i])
		return (0);
	while (num[i])
	{
		if (!ft_isdigit(num[i]))
			return (0);
		i++;
	}
	return (1);
}

void	free_split(char **s)
{
	int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		free(s[i]);
		i++;
	}
	free(s);
}

char	**skip_flags(char **args, int start_index)
{
	return (&args[start_index]);
}

char	**checker(char **argv, int start_index)
{
	char	**args;
	char	**to_validate;
	int		split;
	int		dup_index;

	args = handle_split(argv, start_index, &split);
	if (split)
		to_validate = args;
	else
		to_validate = &argv[start_index];
	validate_args(to_validate);
	if (split)
		dup_index = 0;
	else
		dup_index = start_index;
	if (is_duplicate(args, dup_index))
		error_and_exit();
	if (!split)
		args = skip_flags(argv, start_index);
	return (args);
}
