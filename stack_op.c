/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabarin <mjabarin@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 15:52:07 by mjabarin          #+#    #+#             */
/*   Updated: 2026/01/31 14:40:02 by nibrahee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "push_swap.h"
/* 
t_stack **create_stack(t_stack **stack,int argc, char **argv)
{
    int i;

    i = argc - 1;
    while (i > 0)
    {
        push(stack, (int)ft_atoi(argv[i]));
        i--;
    }
    return (stack);
}
void set_index(t_stack *stack)
{
    int index;
    t_stack *current;

    index = 0;
    current = stack;
    while (current)
    {
        current->index = index++;
        current = current->next;
    }
}

void    pop(t_stack *head)
{
    t_node	*temp;

    if (!head || head -> size == 0)
        return ;
    temp = head -> top;
    head -> top = head -> top -> next;
    if (head -> top)
        head -> top -> prev = NULL;
    else
        head -> bottom = NULL;
    free(temp);
    head -> size--;
}*/
void printStack(t_stack **stack)
{
    t_node *current;

    if (!stack || !*stack)
        return ;
    current = (*stack)->top;
    while (current)
    {
        printf("Value: %d, Index: %d\n", current->value, current->index);
        current = current->next;
    }
}

int main(int argc, char **argv)
{
    t_stack *stack_a;
    t_stack *stack_b;
    checker(argc, argv);
    stack_a = create_stack(argc, argv);
    stack_b = malloc(sizeof(t_stack));
    init_stack(stack_b);
    get_index(stack_a);
    printf("\033[0;35m");   //purple color
    printf("Stack a before sorting :\n ");
    printStack(&stack_a);
    printf("\033[0m");
    radix_sort(stack_a, stack_b);
    printf("\033[0;32m"); // Green
    printf("Stack a after sorting :\n ");
    printStack(&stack_a);
    printf("\033[0m");
    return 0;
}

    /*
    rra(&stack_a);
    printf("\033[0;35m");   //purple color 
    printf("Stack a :\n ");
  printStack(&stack_a);


    printf("\033[0m");
    
     pop(&stack_a);
     pb(&stack_b,&stack_a);
    

    printf("\033[0;35m");   //purple color 
    printf("Stack a :\n ");
    printf("\033[0m");     //black color

    printStack(&stack_a);
    printf("\033[0;32m"); // Green
    printf("Stack b :\n ");
    printf("\033[0m");     //black color


    printStack(&stack_b);
    pb(&stack_b,&stack_a);


    printf("\033[0;35m");   //purple color
    printf("Stack a :\n ");
    printf("\033[0m");     //black color

    printStack(&stack_a);
    printf("\033[0;32m"); // Green
    printf("Stack b :\n ");
    printf("\033[0m");     //black color


    printStack(&stack_b);

    pa(&stack_a,&stack_b);


    printf("\033[0;35m");   //purple color
    printf("Stack a :\n ");
    printf("\033[0m");     //black color

    printStack(&stack_a);
    printf("\033[0;32m"); // Green
    printf("Stack b :\n ");
    printf("\033[0m");     //black color


    printStack(&stack_b);

    return 0;
}
*/