#include "push_swap.h"

void sb(t_list **b) // swap the first two elements of stack b
{
    if (!b || !*b || !(*b) -> next)
        return;
    t_list *temp;

    temp = (*b) -> content;
    (*b) -> content = (*b) -> next -> content;
    (*b) -> next -> content = temp;
    write (1, "sb\n", 3);
}