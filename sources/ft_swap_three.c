/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ridalgo- <ridalgo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:33:37 by ridalgo-          #+#    #+#             */
/*   Updated: 2022/10/18 17:52:33 by ridalgo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_swap_three(t_element **stack)
{
	if ((*stack)->index < (*stack)->next->index
		&& (*stack)->next->index < (*stack)->next->next->index)
		exit(EXIT_SUCCESS);
	else if ((*stack)->index < (*stack)->next->index
		&& (*stack)->next->index > (*stack)->next->next->index)
	{
		ft_rrotate(stack, 'a');
		ft_swap(stack, 'a');
	}
}
