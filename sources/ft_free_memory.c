/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_memory.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ridalgo- <ridalgo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 17:45:45 by ridalgo-          #+#    #+#             */
/*   Updated: 2022/12/09 17:45:49 by ridalgo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_free_memory(t_element **stack)
{
	t_element	*auxiliary;

	if (!*stack)
		return ;
	while (*stack)
	{
		auxiliary = (*stack)->next;
		free(*stack);
		*stack = auxiliary;
	}
	*stack = NULL;
}
