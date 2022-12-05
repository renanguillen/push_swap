/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_two.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ridalgo- <ridalgo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:33:12 by ridalgo-          #+#    #+#             */
/*   Updated: 2022/12/05 12:19:02 by ridalgo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_swap_two(t_element **stack_a, t_element **stack_b)
{
	(void)stack_b;
	if ((*stack_a)->index < (*stack_a)->next->index)
		return ;
	else
		ft_swap(stack_a, 'a');
}
