#include "push_swap.h"

double compute_disorder(t_stack  *stack)
{
    int mistakes;
    int total_pairs;
    
    t_node *a;
    t_node *b;

    if(!stack || stack->size < 2)
        return (0.0);
    mistakes = 0;
    total_pairs = 0;
    a = stack->top;
    while (a)  
    {
        b = a->next;
        while (b)
        {
            total_pairs++;
            if (a->value > b->value)
                mistakes++;
            b = b->next;
        }
        a = a->next;
    }
    
    return (((double)mistakes  / total_pairs )*100.0);
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