/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_lower_cost.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ridalgo- <ridalgo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 20:21:51 by ridalgo-          #+#    #+#             */
/*   Updated: 2022/12/06 20:22:00 by ridalgo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_check_lower_cost(t_element **stack_b)
{
	int			position;
	int			smallest;
	int			sum;
	t_element	*auxiliary;

	position = 0;
	smallest = MAX_INT;
	auxiliary = *stack_b;
	while (auxiliary)
	{
		sum = abs(auxiliary->top_a) + abs(auxiliary->top_b);
		if (sum < smallest)
		{
			smallest = sum;
			position = auxiliary->position;
		}
		auxiliary = auxiliary->next;
	}
	return (position);
}
