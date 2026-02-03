#include "push_swap.h"
int get_max(t_stack *stack)
{
    t_node *current;
    int max;

    if (stack->size == 0)
        return (0);
    current = stack->top;
    max = current->index;
    while (current)
    {
        if (current->index > max)
            max = current->index;
        current = current->next;
    }
    return (max);
}

void radix_sort(t_stack *stack_a, t_stack *stack_b,t_config *config)
{
    int i, j, size;
    int max_bits;

    size = stack_a->size;
    stack_b->top = NULL;
    stack_b->bottom = NULL;
    stack_b->size = 0;

    max_bits = 0;
    int max = get_max(stack_a);
    while ((max >> max_bits) != 0)
        max_bits++;
    i=0;
    while (i < max_bits)
    {
        j = 0;
        while (j < size)
        {
            t_node *node = stack_a->top;
            if (((node->index >> i) & 1) == 0)
                pb(stack_b, stack_a,config);
                
            else
                ra(stack_a,config);
            
                
            j++;
        }
        while (stack_b->size > 0)
                pa(stack_a, stack_b,config);
        i++;
    }
}
 /*    
int main(int argc, char **argv)
{

     t_stack stack_a;
    t_stack stack_b;


    checker(argc, argv);
    stack_a = *create_stack(&stack_a, argc, argv);
    stack_b.top = NULL;
    stack_b.bottom = NULL;
    stack_b.size = 0;
    get_index(&stack_a);
    printf("\033[0;35m");   //purple color
    printf("Stack a before sorting :\n ");
    printf("\033[0m");     //black color
    printStack(&stack_a);
    radix_sort(&stack_a, &stack_b);
    printf("\033[0;35m");   //purple color
    printf("Stack a after sorting :\n ");
    printf("\033[0m");     //black color
    printStack(&stack_a);
}
    stack_b.top = NULL;
    stack_b.bottom = NULL;
    stack_b.size = 0;

    count_sort(&stack_a);

    // Free stacks here if necessary

    return (0);
}*/