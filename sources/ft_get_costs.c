/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_costs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ridalgo- <ridalgo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 11:44:53 by ridalgo-          #+#    #+#             */
/*   Updated: 2022/12/05 11:55:34 by ridalgo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_get_costs(int stack_lenght_a, t_element **stack_b)
{
	int			stack_lenght_b;
	t_element	*aux_stack;

	stack_lenght_b = ft_stacklen(stack_b);
	aux_stack = *stack_b;
	while (aux_stack)
	{
		if (aux_stack->position <= (stack_lenght_b / 2))
			aux_stack->top_b = aux_stack->position;
		else
			aux_stack->top_b = aux_stack->position - stack_lenght_b;
		if (aux_stack->target <= (stack_lenght_a / 2))
			aux_stack->top_a = aux_stack->target;
		else
			aux_stack->top_a = aux_stack->target - stack_lenght_a;
		aux_stack = aux_stack->next;
	}
}
