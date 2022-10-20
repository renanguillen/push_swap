/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ridalgo- <ridalgo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:33:37 by ridalgo-          #+#    #+#             */
/*   Updated: 2022/10/20 11:15:21 by ridalgo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	ft_append2(t_element **stack)
{
	if ((*stack)->index > (*stack)->next->index
		&& (*stack)->index > (*stack)->next->next->index
		&& (*stack)->next->index < (*stack)->next->next->index)
	{
		ft_rotate(stack);
		ft_printf("ra\n");
	}
	else
	{
		ft_rotate(stack);
		ft_printf("ra\n");
		ft_swap(stack);
		ft_printf("sa\n");
	}
}

static void	ft_append1(t_element **stack)
{
	if ((*stack)->index > (*stack)->next->index
		&& (*stack)->index < (*stack)->next->next->index
		&& (*stack)->next->index < (*stack)->next->next->index)
	{
		ft_swap(stack);
		ft_printf("sa\n");
	}
	else if ((*stack)->index < (*stack)->next->index
		&& (*stack)->index > (*stack)->next->next->index
		&& (*stack)->next->index > (*stack)->next->next->index)
	{
		ft_rrotate(stack);
		ft_printf("rra\n");
	}
	else
		ft_append2(stack);
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
		ft_rrotate(stack);
		ft_printf("rra\n");
		ft_swap(stack);
		ft_printf("sa\n");
	}
	else
		ft_append1(stack);
}
