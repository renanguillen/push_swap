/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_first_send.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ridalgo- <ridalgo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 17:56:34 by ridalgo-          #+#    #+#             */
/*   Updated: 2022/12/12 13:05:40 by ridalgo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_first_send(t_element **stack_a, t_element **stack_b, int quant)
{
	int			counter;
	int			index;

	quant /= 2;
	counter = 3;
	while ((*stack_a)->next->next->next)
	{
		if (counter)
		{
			index = (*stack_a)->index;
			if (index < quant)
				ft_push(stack_a, stack_b, 'a');
			else
			{
				ft_rotate(stack_a, stack_b, 'a');
				counter--;
			}
		}
		else
			ft_push(stack_a, stack_b, 'a');
	}
}
