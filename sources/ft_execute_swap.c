/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_execute_swap.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ridalgo- <ridalgo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 20:24:38 by ridalgo-          #+#    #+#             */
/*   Updated: 2022/12/09 18:01:17 by ridalgo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	rotate_a(t_element **stack_a, t_element **stack_b, t_element *aux)
{
	while (aux->top_a)
	{
		if (aux->top_a > 0)
		{
			if (aux->top_b > 0)
			{
				ft_rotate(stack_a, stack_b, 'r');
				aux->top_b--;
			}
			else
				ft_rotate(stack_a, stack_b, 'a');
			aux->top_a--;
		}
		else if (aux->top_a < 0)
		{
			if (aux->top_b < 0)
			{
				ft_rrotate(stack_a, stack_b, 'r');
				aux->top_b++;
			}
			else
				ft_rrotate(stack_a, stack_b, 'a');
			aux->top_a++;
		}
	}
}

static void	rotate_b(t_element **stack_a, t_element **stack_b, t_element *aux)
{
	while (aux->top_b)
	{
		if (aux->top_b > 0)
		{
			ft_rotate(stack_a, stack_b, 'b');
			aux->top_b--;
		}
		else if (aux->top_b < 0)
		{
			ft_rrotate(stack_a, stack_b, 'b');
			aux->top_b++;
		}
	}
}

void	ft_execute_swap(t_element **stack_a, t_element **stack_b, int position)
{
	t_element	*auxiliary;
	int			index;

	index = 0;
	auxiliary = *stack_b;
	while (index++ != position)
		auxiliary = auxiliary->next;
	rotate_a(stack_a, stack_b, auxiliary);
	rotate_b(stack_a, stack_b, auxiliary);
	ft_push(stack_a, stack_b, 'b');
}
