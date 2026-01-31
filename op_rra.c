#include "push_swap.h"

void rra(t_list **a) // rotate stack a downwards
{
    t_list  *prev;
    t_list  *last;

    if (!a || !*a || !(*a)->next)
        return;
    prev = NULL;
    last = *a;
    while (last->next)
    {
        prev = last;
        last = last->next;
    }
    prev->next = NULL;
    last->next = *a;
    *a = last;
    write(1, "rra\n", 4);
}