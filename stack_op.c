/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabarin <mjabarin@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 15:52:07 by mjabarin          #+#    #+#             */
/*   Updated: 2026/02/07 17:37:28 by mjabarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "push_swap.h"

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
    t_config *config;

    config = malloc(sizeof(t_config));
    ft_memset(config, 0, sizeof(t_config));
    
    int start_index;
    if (argc < 2)
        return (0);
    start_index = parse_flags(argc, argv, config);

    checker(argv, start_index);
    stack_a = create_stack(argc, argv, start_index);
    stack_b = malloc(sizeof(t_stack));
    if(!stack_b)
        return (1);
    init_stack(stack_b);
    get_index(stack_a);
    double disorder = compute_disorder(stack_a);
    int is_adap;
     if (config->stategy == 0) // Adaptive
    {
	 is_adap =1;
        if (disorder < 20.0)
            config->stategy = 1; // Simple O(n) or O(n^2)
        else if (disorder < 50.0)
            config->stategy = 2; // Medium O(n√n)
        else
             config->stategy = 3; // Complex O(n log n)
    }
     else 
     {
	     is_adap =0;
	     /*
              if (config->stategy 
                        config->stategy = 1;
                else if (disorder < 50.0)
                        config->stategy = 2; // Medium O(n√n)
                else
                     config->stategy = 3; // Complex O(n log n)
          */
        }



/*
    printf("\033[0;35m");   //purple color
    printf("Stack a before sorting :\n ");
    printStack(&stack_a);
    printf("\033[0m");
    */
    if (!is_sorted(stack_a))
    {
        if (config->stategy == 1)
            selection_sort(stack_a, stack_b, config);
	else if (config->stategy == 2)
            chunk_sort(stack_a, stack_b, config);
	else if (config->stategy == 3)
            radix_sort(stack_a, stack_b, config);
    }

/*
    printf("\033[0;32m"); // Green
    printf("Stack a after sorting :\n ");
    printStack(&stack_a);
    printf("\033[0m");
*/
    if (config->benchmark)
        print_benchmarks(config,disorder,is_adap);
    free_stack(stack_a);
    free_stack(stack_b);
    return 0;
    free(config);   
    

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
