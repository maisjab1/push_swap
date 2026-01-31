#include "push_swap.h"

void rb(t_list **b) // rotate stack b upwards
{
	t_list *first;
        t_list *last;

    if (!b || !*b)
        return;
    first = *b;
    (*b) = (*b) -> next;
    last = ft_lstlast(*b);
    last -> next = first;
    first -> next = NULL;
    write(1, "rb\n", 3);

}
