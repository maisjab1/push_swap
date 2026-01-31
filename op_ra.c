#include "push_swap.h"

void ra(t_list **a) // rotate stack a upwards
{
	t_list *first;
	t_list *last;

    if (!a || !*a)
        return;
    first = *a;
    (*a) = (*a) -> next;
    last = ft_lstlast(*a);
    last -> next = first;
    first -> next = NULL;
    write(1, "ra\n", 3);
}
