/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabarin <mjabarin@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 15:52:07 by mjabarin          #+#    #+#             */
/*   Updated: 2026/01/12 16:25:21 by mjabarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "../libft/libft.h"

void	push(t_list **stack, int value)
{
		t_list *new_node;
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
void printStack(t_list **stack)
{
    t_list *temp = *stack;
    while (temp != NULL)
    {
        printf("%d-> ", temp->content);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    // Initialize a new stack top pointer
    t_list *stack = NULL;

    // Push elements into the stack
    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);
    push(&stack, 40);
    push(&stack, 50);
    printf("Stack: ");
    printStack(&stack);
}
