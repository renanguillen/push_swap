/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_more.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ridalgo- <ridalgo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:34:08 by ridalgo-          #+#    #+#             */
/*   Updated: 2022/12/05 11:12:36 by ridalgo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void ft_get_costs(t_element **stack)
{
	int	stackLenght;
	t_element	*auxStack;

	stackLenght = ft_stacklen(stack);
	auxStack = *stack;
	while (auxStack)
	{
		if (auxStack->position < (stackLenght / 2))
			auxStack->top_b = auxStack->position;
		else
			auxStack->top_b = auxStack->position - stackLenght;
		auxStack = auxStack->next;
	}
}

void	ft_swap_more(t_element **stack_a)
{
	t_element	*stack_b;

	stack_b = NULL;
	ft_first_send(stack_a, &stack_b, ft_stacklen(stack_a));
	ft_swap_three(stack_a);
	ft_get_target(stack_a, &stack_b);
	ft_get_costs(&stack_b);
	ft_print_stack(stack_a, 'A');
	ft_print_stack(&stack_b, 'B');
	return ;
}
