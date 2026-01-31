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

t_list **create_stack(t_list **stack,int argc, char **argv)
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

void    pop(t_list **head)
{
    t_list *temp;

    if (*head == NULL)
        return;
    temp = *head;

    *head = (*head)->next;
    if (temp->content)
        free(temp->content);
    free(temp);
}
void printStack(t_list **stack)
{
    t_list *temp = *stack;
    while (temp != NULL)
    {
        printf("%d\n ", *(int*)temp->content);
        temp = temp->next;
    }
    printf("\n");
}

int main(int argc, char **argv)
{
    // Initialize a new stack top pointer
    t_list *stack_a = NULL;
    t_list *stack_b = NULL;
    if (argc < 2)
    {
        ft_putendl_fd("Error", 1);
        return 0;
    }
        
    checker(argc,argv);
    create_stack(&stack_a,argc,argv);

    printf("\033[0;35m");   //purple color 
    printf("Stack a :\n ");
    printf("\033[0m");     //black color
    printStack(&stack_a);
    rra(&stack_a);
    printf("\033[0;35m");   //purple color 
    printf("Stack a :\n ");
  printStack(&stack_a);


    printf("\033[0m");
    /*
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

    return 0;*/
}
