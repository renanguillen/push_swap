/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ridalgo- <ridalgo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:33:37 by ridalgo-          #+#    #+#             */
/*   Updated: 2022/12/05 12:18:49 by ridalgo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static void	ft_append2(t_element **stack_a, t_element **stack_b)
{
	if ((*stack_a)->index > (*stack_a)->next->index
		&& (*stack_a)->index > (*stack_a)->next->next->index
		&& (*stack_a)->next->index < (*stack_a)->next->next->index)
	{
		ft_rotate(stack_a, stack_b, 'a');
	}
	else
	{
		ft_rotate(stack_a, stack_b, 'a');
		ft_swap(stack_a, 'a');
	}
}

static void	ft_append1(t_element **stack_a, t_element **stack_b)
{
	if ((*stack_a)->index > (*stack_a)->next->index
		&& (*stack_a)->index < (*stack_a)->next->next->index
		&& (*stack_a)->next->index < (*stack_a)->next->next->index)
	{
		ft_swap(stack_a, 'a');
	}
	else if ((*stack_a)->index < (*stack_a)->next->index
		&& (*stack_a)->index > (*stack_a)->next->next->index
		&& (*stack_a)->next->index > (*stack_a)->next->next->index)
	{
		ft_rrotate(stack_a, stack_b, 'a');
	}
	else
		ft_append2(stack_a, stack_b);
}

void	ft_swap_three(t_element **stack_a, t_element **stack_b)
{
	(void)stack_b;
	if ((*stack_a)->index < (*stack_a)->next->index
		&& (*stack_a)->next->index < (*stack_a)->next->next->index)
		return ;
	else if ((*stack_a)->index < (*stack_a)->next->index
		&& (*stack_a)->index < (*stack_a)->next->next->index
		&& (*stack_a)->next->index > (*stack_a)->next->next->index)
	{
		ft_rrotate(stack_a, stack_b, 'a');
		ft_swap(stack_a, 'a');
	}
	else
		ft_append1(stack_a, stack_b);
}
