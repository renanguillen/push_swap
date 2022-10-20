/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ridalgo- <ridalgo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 10:29:07 by ridalgo-          #+#    #+#             */
/*   Updated: 2022/10/20 10:56:30 by ridalgo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_rotate(t_element **stack, char c)
{
	t_element	*aux;
	t_element	*bot;

	aux = *stack;
	bot = *stack;
	while (bot->next)
	{
		bot = bot->next;
		bot->position--;
	}
	*stack = (*stack)->next;
	bot->next = aux;
	aux->position = bot->position + 1;
	aux->next = NULL;
	ft_printf("r%c\n", c);
}
