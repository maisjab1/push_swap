/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabarin <mjabarin@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 15:52:07 by mjabarin          #+#    #+#             */
/*   Updated: 2026/01/12 16:59:08 by mjabarin         ###   ########.fr       */
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
        push(stack, atoi(argv[i]));
        i--;
    }
    return (stack);
}
void	push(t_list **stack, int value)
{
		t_list	*new_node;
		int	*num;
		num = malloc(sizeof(int));
		if (!num)
			return;
		*num = value;
		new_node = ft_lstnew(num);
		if (!new_node)
		{
			free (num);
			return;
		}
	    ft_lstadd_front(stack, new_node);
}
void    pop(t_list **head)
{
    t_list *temp;

    if (*head == NULL)
        return;
    temp = *head;

    *head = (*head)->next;
    free(temp);
}
void printStack(t_list **stack)
{
    t_list *temp = *stack;
    while (temp != NULL)
    {
        printf("%d\n ",*(int *) temp->content);
        temp = temp->next;
    }
    printf("\n");
}

int main(int argc, char **argv)
{
    // Initialize a new stack top pointer
    t_list *stack = NULL;
    create_stack(&stack,argc,argv);
  
     //pop(&stack);
    

    printf("\033[0;35m");   //purple color 
    printf("Stack:\n ");
    printf("\033[0m");     //black color

    printStack(&stack);
    return 0;
}
