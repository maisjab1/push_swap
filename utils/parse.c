/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nibrahee <nibrahee@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 15:58:54 by nibrahee          #+#    #+#             */
/*   Updated: 2026/02/08 16:22:27 by nibrahee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_compare(char *argv, t_config *config)
{
	if (ft_strncmp(argv, "--bench", 8) == 0)
		config -> benchmark = 1;
	else if (ft_strncmp(argv, "--simple", 9) == 0)
		config -> stategy = 1;
	else if (ft_strncmp(argv, "--medium", 9) == 0)
		config -> stategy = 2;
	else if (ft_strncmp(argv, "--complex", 10) == 0)
		config -> stategy = 3;
	else if (ft_strncmp(argv, "--adaptive", 10) == 0)
		config -> stategy = 0;
	else
		return (0);
	return (1);
}

int	parse_flags(int argc, char **argv, t_config *config)
{
	int	i;

	i = 1;
	config -> benchmark = 0;
	config -> stategy = 0;
	while (i < argc)
	{
		if (argv[i][0] != '-')
			break ;
		if (argv[i][0] == '-' && ft_isdigit(argv[i][1]))
			break ;
		if (!ft_compare(argv[i], config))
			error_and_exit();
		i++;
	}
	return (i);
}
