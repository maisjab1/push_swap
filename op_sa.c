#include "push_swap.h"

void sa(t_list **a) // swap the first two elements of stack a
{
    if (!a || !*a || !(*a) -> next)
        return;
    void 	*temp;

    temp = (*a) -> content;
    (*a) -> content = (*a) -> next -> content;
    (*a) -> next -> content = temp;
    write (1, "sa\n", 3);
}
