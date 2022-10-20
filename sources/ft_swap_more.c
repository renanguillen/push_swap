/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_more.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ridalgo- <ridalgo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:34:08 by ridalgo-          #+#    #+#             */
/*   Updated: 2022/10/20 15:18:31 by ridalgo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	ft_print_stacks(t_element **stack_a, t_element *stack_b)
{
	ft_printf("STACK A\n");
	while (*stack_a)
	{
		ft_printf("%d:%d - index:%d\n",
			(*stack_a)->position, (*stack_a)->value, (*stack_a)->index);
		(*stack_a) = (*stack_a)->next;
	}
	ft_printf("STACK B\n");
	while (stack_b)
	{
		ft_printf("%d:%d - index:%d\n",
			stack_b->position, stack_b->value, stack_b->index);
		stack_b = stack_b->next;
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
	ft_print_stacks(stack_a, stack_b);
	return ;
}
