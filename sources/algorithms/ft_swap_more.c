/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_more.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ridalgo- <ridalgo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:34:08 by ridalgo-          #+#    #+#             */
/*   Updated: 2022/10/21 16:37:36 by ridalgo-         ###   ########.fr       */
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



void	ft_swap_more(t_element **stack_a)
{
	t_element	*stack_b;
	t_element	*aux;
	int			cut_index;

	cut_index = 0;
	stack_b = NULL;
	aux = *stack_a;
	while (aux)
	{
		cut_index += aux->index;
		aux = aux->next;
	}
	cut_index /= 2;
	aux = *stack_a;
	while ((*stack_a)->next->next->next)
	{
		if ((*stack_a)->index < cut_index)
			ft_push(stack_a, &stack_b, 'a');
		else
			ft_rotate(stack_a, 'a');
	}
	ft_swap_three(stack_a);
	ft_get_target(stack_a, &stack_b);
	ft_printf("Cut:%d\n", cut_index);
	ft_print_stack(stack_a, 'A');
	ft_print_stack(&stack_b, 'B');
	return ;
}
