#include "push_swap.h"

t_node  *create_node(int value)
{
    t_node  *node;

    node = (t_node *)malloc(sizeof(t_node));
    if (!node)
        return (NULL);
    node -> value = value;
    node -> index = -1;
    node -> next = NULL;
    node -> prev = NULL;
    return (node);
}

void    init_stack(t_stack *stack)
{
    stack -> top = NULL;
    stack -> bottom = NULL;
    stack -> size = 0;
}


t_stack *create_stack(int argc, char **argv,int start_index) 
{
    int i;
    t_stack *stack;

    stack = malloc(sizeof(t_stack));
    if (!stack)
        return (NULL);
    init_stack(stack);
    i = argc - 1;
    while (i >= start_index)
    {
        push(stack,create_node((int)ft_atoi(argv[i])));
        i--;
    }
    return (stack);
}