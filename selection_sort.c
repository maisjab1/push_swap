#include "push_swap.h"

static int	find_min_index(t_stack *stack)
{
	int	min;
	t_node	*temp;

	min = stack -> top -> index;
	temp = stack -> top;
	while (temp)
	{
		if (temp -> index < min)
			min = temp -> index;
		temp = temp -> next;
	}
	return (min);
}

static int	get_position_of_index(t_stack *stack, int index)
{
	int	pos;
	t_node	*temp;

	pos = 0;
	temp = stack -> top;
	while (temp)
	{
		if (temp -> index == index)
			return (pos);
		temp = temp -> next;
		pos = pos + 1;
	}
	return (-1);
}

void	selection_sort(t_stack *a, t_stack *b, t_config *config)
{
	int	pos;
	int	smallest_index;

	while (a -> size > 3)
	{
		smallest_index = find_min_index(a);
		pos = get_position_of_index(a, smallest_index);
		if (pos <= (a -> size) /2)
		{
			while (pos--)
				ra(a, config);
		}
		else
		{
			pos = (a -> size) - pos;
			while (pos--)
				rra(a, config);
		}
		if (is_sorted(a))
			break ;
		pb(b, a, config);
	}
	sort_3(a, config);
	while (b -> size > 0)
		pa (a, b, config);
}
