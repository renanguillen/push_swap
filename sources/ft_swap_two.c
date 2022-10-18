/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_two.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ridalgo- <ridalgo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:33:12 by ridalgo-          #+#    #+#             */
/*   Updated: 2022/10/18 17:50:56 by ridalgo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_swap_two(t_element **stack)
{
	if ((*stack)->index < (*stack)->next->index)
		exit(EXIT_SUCCESS);
	else
		ft_swap(stack, 'a');
}
