//#include "./libft/libft.h"
#include ".\libft\libft.h"//for windows 


t_list **create_stack(t_list **stack,int argc, char **argv);
void	push(t_list **stack, int value);
void    pop(t_list **head);
void printStack(t_list **stack);
void    pa(t_list **a, t_list **b);
void    pb(t_list **b, t_list **a);
void checker(int argc, char **argv);
int is_duplicate(char **argv);
long long  ft_atol(const char *nptr);
