#include "push_swap.h"

static void	push_chunks(t_stack *a, t_stack *b, int chunk_size,t_config *config)
{
	int	i;
	int	pos;

	i = 0;
	while (a -> size > 0)
	{
		if (a -> top -> index <= i)
		{
			pb(b, a, config);
			i++;
		}
		else if (a -> top -> index <= i + chunk_size)
		{
			pb(b, a, config);
			rb(b, config);
			i++;
		}
		else
		{
			pos = find_pos(a, i);
			if (pos <= (a -> size) / 2)
				ra(a, config);
			else
				rra(a, config);
		}
	}
}

static void	push_back_to_a(t_stack *a, t_stack *b, t_config *config)
{
	int	max_index;

	while (b -> size > 0)
	{
		max_index = find_max_index(b);
		rotate_b_to_top(b, max_index, config);
		pa(a, b, config);
	}
}

void	chunk_sort(t_stack *a, t_stack *b, t_config *config)
{
	int	chunk_size;

	if (!a || !b)
		return ;
	chunk_size = get_chunk_size(a -> size);
	push_chunks(a, b, chunk_size, config);
	push_back_to_a(a, b, config);	 
}
