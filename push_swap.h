#include "./libft/libft.h"
//#include ".\libft\libft.h"//for windows 


t_list **create_stack(t_list **stack,int argc, char **argv);
void	push(t_list **stack, int value);
void    pop(t_list **head);
void printStack(t_list **stack);

/********************* operations ***************************/

void    pa(t_list **a, t_list **b);
void    pb(t_list **b, t_list **a);
void    sa(t_list **a);
void    sb(t_list **b);
void    ra(t_list **a);
void    rb(t_list **b);
void    rra(t_list **a);
void    rrb(t_list **b);
void    ss(t_list **a, t_list **b);
void    rr(t_list **a, t_list **b);
void    rrr(t_list **a, t_list **b);

/********************* utils ***************************/

void checker(int argc, char **argv);
int is_duplicate(char **argv);
long long  ft_atol(const char *nptr);
