/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabarin <mjabarin@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 15:52:07 by mjabarin          #+#    #+#             */
/*   Updated: 2026/02/08 16:31:22 by mjabarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	decide_strategy(t_config *config)
{
	if (config->disorder < 20.0)
		config->stategy = 1;
	else if (config->disorder < 50.0)
		config->stategy = 2;
	else
		config->stategy = 3;
}

void	set_strategy(t_config *config, t_stack *stack_a)
{
	config->disorder = compute_disorder(stack_a);
	if (config->stategy == 0)
	{
		config->is_adaptive = 1;
		decide_strategy(config);
		if (config->disorder < 20.0)
			config->stategy = 1;
		else if (config->disorder < 50.0)
			config->stategy = 2;
		else
			config->stategy = 3;
	}
	else
		config->is_adaptive = 0;
}

void	run_sort(t_stack *stack_a, t_stack *stack_b, t_config *config)
{
	if (config->stategy == 1)
		selection_sort(stack_a, stack_b, config);
	else if (config->stategy == 2)
		chunk_sort(stack_a, stack_b, config);
	else if (config->stategy == 3)
		radix_sort(stack_a, stack_b, config);
}

void	clean_exit(t_stack *stack_a, t_stack *stack_b, t_config *config)
{
	free_stack(stack_a);
	free_stack(stack_b);
	free(config);
	exit(1);
}

int	main(int argc, char **argv)
{
	t_stack		*stack_a;
	t_stack		*stack_b;
	t_config	*config;
	int			start_index;

	if (argc < 2)
		return (0);
	config = malloc(sizeof(t_config));
	ft_memset(config, 0, sizeof(t_config));
	start_index = parse_flags(argc, argv, config);
	checker(argv, start_index);
	stack_a = create_stack(argc, argv, start_index);
	stack_b = malloc(sizeof(t_stack));
	if (!stack_b)
		return (1);
	init_stack(stack_b);
	get_index(stack_a);
	set_strategy(config, stack_a);
	if (!is_sorted(stack_a))
		run_sort(stack_a, stack_b, config);
	if (config->benchmark)
		print_benchmarks(config, config->disorder, config->is_adaptive);
	clean_exit(stack_a, stack_b, config);
	return (0);
}
