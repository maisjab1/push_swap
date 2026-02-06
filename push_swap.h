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

typedef struct  s_ops_count{
    int sa;
    int sb;
    int ss;
    int pa;
    int pb;
    int ra;
    int rb;
    int rr;
    int rra;
    int rrb;
    int rrr;
    int total;
}   t_ops_count;

typedef struct  s_config{
   int benchmark;
   int stategy;
   t_ops_count ops_count;
}   t_config;


t_stack *create_stack(int argc, char **argv,int start_index);
t_node  *create_node(int value);
void    init_stack(t_stack *stack);
void	push(t_stack *stack, t_node *node);
t_node	*pop(t_stack *head);
void printStack(t_stack **stack);
void get_index(t_stack *stack);
int parse_flags(int argc, char **argv, t_config *config);
double compute_disorder(t_stack  *stack);
void print_disorder(double disorder);
void print_benchmarks(t_config *config,double disorder);


/********************* operations ***************************/

void    pa(t_stack *a, t_stack *b,t_config *config);
void    pb(t_stack *b, t_stack *a,t_config *config);
void    sa(t_stack *a,t_config *config);
void    sb(t_stack *b,t_config *config);
void    ra(t_stack *a,t_config *config);
void    rb(t_stack *b,t_config *config);
void    rra(t_stack *a,t_config *config);
void    rrb(t_stack *b,t_config *config);
void    ss(t_stack *a, t_stack *b,t_config *config);
void    rr(t_stack *a, t_stack *b,t_config *config);
void    rrr(t_stack *a, t_stack *b,t_config *config);

/********************* utils ***************************/

void checker(int argc, char **argv, int start_index);
int is_duplicate(char **argv, int start_index);
long long  ft_atol(const char *nptr);
void radix_sort(t_stack *stack_a, t_stack *stack_b,t_config *config);
int is_sorted(t_stack *stack);
void    sort_3(t_stack *stack, t_config *config);
void    insertion_sort(t_stack *a, t_stack *b, t_config *config);
#endif
