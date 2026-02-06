#include "push_swap.h"

void	Error_and_exit()//(t_stack *s)
{
	/*
	if (stack)
		free(s);
	*/
	write (2, "Error\n", 6);
	exit(1);
}
