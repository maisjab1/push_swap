#include "./libft/libft.h"
#include "./printf/ft_printf.h"

//#include ".\printf\ft_printf.h" //for windows
//#include ".\libft\libft.h" //for windows
 typedef struct s_stack
{
    int             content;
    int             index;
    struct s_stack  *next;
}   t_stack;



t_stack **create_stack(t_stack **stack,int argc, char **argv);
void	push(t_stack **stack, int value);
void    pop(t_stack **head);
void printStack(t_stack **stack);

/********************* operations ***************************/

void    pa(t_stack **a, t_stack **b);
void    pb(t_stack **b, t_stack **a);
void    sa(t_stack **a);
void    sb(t_stack **b);
void    ra(t_stack **a);
void    rb(t_stack **b);
void    rra(t_stack **a);
void    rrb(t_stack **b);
void    ss(t_stack **a, t_stack **b);
void    rr(t_stack **a, t_stack **b);
void    rrr(t_stack **a, t_stack **b);

/********************* utils ***************************/

void checker(int argc, char **argv);
int is_duplicate(char **argv);
long long  ft_atol(const char *nptr);
