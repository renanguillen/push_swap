/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_more.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ridalgo- <ridalgo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:34:08 by ridalgo-          #+#    #+#             */
/*   Updated: 2022/12/09 17:40:02 by ridalgo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static void	ft_final_rotation(t_element **stack_a, t_element **stack_b, int middle)
{
	int	direction;

	if ((*stack_a)->index < middle)
		direction = 0;
	else
		direction = 1;
	while ((*stack_a)->index != 0)
	{
		if (direction == 0)
			ft_rrotate(stack_a, stack_b, 'a');
		else
			ft_rotate(stack_a, stack_b, 'a');
	}
}

void	ft_swap_more(t_element **stack_a, t_element **stack_b, int stacklen)
{
	int	new_lenght;
	int	position;

	ft_first_send(stack_a, stack_b, stacklen);
	ft_swap_three(stack_a, stack_b);
	new_lenght = ft_stacklen(stack_a);
	while (new_lenght != stacklen)
	{
		ft_get_target(stack_a, stack_b);
		ft_get_costs(new_lenght, stack_b);
		position = ft_check_lower_cost(stack_b);
		ft_execute_swap(stack_a, stack_b, position);
		new_lenght++;
	}
	ft_final_rotation(stack_a, stack_b, (new_lenght / 2));
	return ;
}
