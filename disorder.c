#include "push_swap.h"

double compute_disorder(t_stack  *stack)
{
    int mistakes;
    int total_pairs;
    int i;

    i = 0;
    mistakes = 0;
    total_pairs = 0;
    if (!stack || stack->size < 2)
        return (0.0);
    while(i < ft_lstsize((t_list*)stack->top))
    {
        t_node *current = stack->top;
        while(current->next)
        {
            if (current->value > current->next->value)
                mistakes++;
            total_pairs++;
            current = current->next;
        }
        i++;
    }
    return ((double)mistakes  / total_pairs *100);
}

void print_disorder(double disorder)
{
    int whole;
    int decimal;

    whole = (int)disorder;
    decimal = (int)((disorder - whole) * 100);
    ft_putstr_fd("[bench] disorder:",2);
    ft_putnbr_fd(whole,2);
    ft_putstr_fd(".",2);
    if (decimal < 10)
        ft_putstr_fd("0",2);
    ft_putnbr_fd(decimal,2);
    ft_putstr_fd("%\n",2);
}