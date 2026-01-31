#include "push_swap.h"

void ra(t_list **a) // rotate stack a upwards
{
    t_list *first;

    if (!a || !*a)
        return;
    first = *a;
    (*a) = (*a) -> next;
    while ((*a) -> next)
        (*a) = (*a) -> next;
    (*a) -> next = first;
    first -> next = NULL;
    write(1, "ra\n", 3);
}