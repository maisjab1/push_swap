#include "push_swap.h"

int	count_args(char **args)
{
	int	c;

	c = 0;
	while (args[c])
		c++;
	return (c);
}
