/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ridalgo- <ridalgo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 17:48:04 by ridalgo-          #+#    #+#             */
/*   Updated: 2022/10/19 16:19:06 by ridalgo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_rrotate(t_element **stack, char c)
{
	t_element	*aux;
	t_element	*top;

	aux = *stack;
	while (aux)
	{
		aux->position++;
		if (!(aux)->next)
		{
			top = aux;
			top->next = (*stack);
			(*stack) = top;
			(*stack)->position = 0;
		}
		else
			aux = aux->next;
	}
	ft_printf("rr%c\n", c);
}
