/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ridalgo- <ridalgo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 17:00:32 by ridalgo-          #+#    #+#             */
/*   Updated: 2022/10/19 16:05:50 by ridalgo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_swap(t_element **stack, char c)
{
	t_element	*aux;

	aux = (*stack)->next;
	(*stack)->next = (*stack)->next->next;
	aux->next = *stack;
	*stack = aux;
	(*stack)->position = 0;
	(*stack)->next->position = 1;
	ft_printf("s%c\n", c);
}
