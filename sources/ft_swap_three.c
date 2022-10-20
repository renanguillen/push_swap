/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ridalgo- <ridalgo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:33:37 by ridalgo-          #+#    #+#             */
/*   Updated: 2022/10/20 10:52:35 by ridalgo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	ft_append(t_element **stack)
{
	if ((*stack)->index > (*stack)->next->index
		&& (*stack)->index < (*stack)->next->next->index
		&& (*stack)->next->index < (*stack)->next->next->index)
		ft_swap(stack, 'a');
	else if ((*stack)->index < (*stack)->next->index
		&& (*stack)->index > (*stack)->next->next->index
		&& (*stack)->next->index > (*stack)->next->next->index)
		ft_rrotate(stack, 'a');
	else if ((*stack)->index > (*stack)->next->index
		&& (*stack)->index > (*stack)->next->next->index
		&& (*stack)->next->index < (*stack)->next->next->index)
		ft_rotate(stack, 'a');
	else
	{
		ft_rotate(stack, 'a');
		ft_swap(stack, 'a');
	}
}

void	ft_swap_three(t_element **stack)
{
	if ((*stack)->index < (*stack)->next->index
		&& (*stack)->next->index < (*stack)->next->next->index)
		exit(EXIT_SUCCESS);
	else if ((*stack)->index < (*stack)->next->index
		&& (*stack)->index < (*stack)->next->next->index
		&& (*stack)->next->index > (*stack)->next->next->index)
	{
		ft_rrotate(stack, 'a');
		ft_swap(stack, 'a');
	}
	else
		ft_append(stack);
}
