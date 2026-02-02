#include "push_swap.h"

int is_sorted(t_stack *stack)
{
    t_node *current;

    if (stack->size == 0 || stack->size == 1)
        return (1);
    current = stack->top;
    while (current && current->next)
    {
        if (current->index > current->next->index)
            return (0);
        current = current->next;
    }
    return (1);
}