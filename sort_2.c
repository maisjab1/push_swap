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
