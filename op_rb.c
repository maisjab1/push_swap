#include "push_swap.h"

void rb(t_list **b) // rotate stack b upwards
{
    t_list *first;

    if (!b || !*b)
        return ;
    first = *b;
    (*b) = (*b) -> next;
    while ((*b) -> next)
        (*b) = (*b) -> next;
    (*b) -> next = first;
    first -> next = NULL;
    write(1, "rb\n", 3);
}