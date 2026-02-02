#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "./libft/libft.h"
#include "./printf/ft_printf.h"
//#include ".\printf\ft_printf.h" for windows
//#include ".\libft\libft.h"//for windows
 
typedef struct s_node{
    int value;
    int index;
    struct s_node   *next;
    struct s_node   *prev;
}   t_node;

typedef struct  s_stack{
    t_node  *top;
    t_node  *bottom;
    int     size;
}   t_stack;

typedef struct  s_config{
   int benchmark;
   int stategy;
}   t_config;

t_stack *create_stack(int argc, char **argv,int start_index);
t_node  *create_node(int value);
void    init_stack(t_stack *stack);
void	push(t_stack *stack, t_node *node);
t_node	*pop(t_stack *head);
void printStack(t_stack **stack);
void get_index(t_stack *stack);
int parse_flags(int argc, char **argv, t_config *config);

/********************* operations ***************************/

void    pa(t_stack *a, t_stack *b);
void    pb(t_stack *b, t_stack *a);
void    sa(t_stack *a);
void    sb(t_stack *b);
void    ra(t_stack *a);
void    rb(t_stack *b);
void    rra(t_stack *a);
void    rrb(t_stack *b);
void    ss(t_stack *a, t_stack *b);
void    rr(t_stack *a, t_stack *b);
void    rrr(t_stack *a, t_stack *b);

/********************* utils ***************************/

void checker(int argc, char **argv, int start_index);
int is_duplicate(char **argv);
long long  ft_atol(const char *nptr);
void radix_sort(t_stack *stack_a, t_stack *stack_b);
int is_sorted(t_stack *stack);

#endif