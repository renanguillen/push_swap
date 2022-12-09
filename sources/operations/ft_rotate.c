/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ridalgo- <ridalgo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 10:29:07 by ridalgo-          #+#    #+#             */
/*   Updated: 2022/12/09 16:54:29 by ridalgo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static void	rotate(t_element **stack)
{
	t_element	*aux;
	t_element	*bot;

	aux = *stack;
	bot = *stack;
	while (bot->next)
		bot = bot->next;
	*stack = (*stack)->next;
	bot->next = aux;
	aux->next = NULL;
}

void	ft_rotate(t_element **stack_a, t_element **stack_b, char c)
{
	if (c == 'a')
	{
		rotate(stack_a);
		ft_printf("ra\n");
	}
	if (c == 'b')
	{
		rotate(stack_b);
		ft_printf("rb\n");
	}
	if (c == 'r')
	{
		rotate(stack_a);
		rotate(stack_b);
		ft_printf("rr\n");
	}
}
