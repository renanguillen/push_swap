/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_more.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ridalgo- <ridalgo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:34:08 by ridalgo-          #+#    #+#             */
/*   Updated: 2022/10/21 17:56:20 by ridalgo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static void	ft_print_stack(t_element **stack, char c)
{
	t_element	*aux;

	aux = *stack;
	ft_printf("STACK %c\n", c);
	while (aux)
	{
		ft_printf("%d-Value:%d - Index:%d - Target:%d\n",
			(aux)->position, (aux)->value, (aux)->index, (aux)->target);
		(aux) = (aux)->next;
	}
}

void	ft_swap_more(t_element **stack_a, int argc)
{
	t_element	*stack_b;

	stack_b = NULL;
	ft_first_send(stack_a, &stack_b, (argc - 1));
	ft_swap_three(stack_a);
	ft_get_target(stack_a, &stack_b);
	ft_print_stack(stack_a, 'A');
	ft_print_stack(&stack_b, 'B');
	return ;
}
