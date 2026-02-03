#include "push_swap.h"

void	sort_3(t_stack *stack, t_config *config)
{
	int	a;
	int	b;
	int	c;

	a = stack -> top -> index;
	b = stack -> top -> next -> index;
	c = stack -> top -> next -> next -> index;
	if (a > b && b < c && a < c)
		sa (stack, config);
	else if (a > b && b > c)
	{
		sa(stack, config);
		rra(stack, config);		
	}
	else if (a > b && b < c && a > c)
		ra (stack, config);
	else if (a < b && b > c && a < c)
	{
		sa (stack, config);
		ra(stack, config);
	}
	else if (a < b && b > c && a > c)
		rra (stack, config);
}
