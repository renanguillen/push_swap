/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ridalgo- <ridalgo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 17:48:04 by ridalgo-          #+#    #+#             */
/*   Updated: 2022/12/09 16:54:46 by ridalgo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static void	rrotate(t_element **stack)
{
	t_element	*aux;
	t_element	*top;
	t_element	*bot;

	aux = *stack;
	while (aux->next->next)
		aux = aux->next;
	bot = aux;
	aux = *stack;
	while (aux->next)
		aux = aux->next;
	top = aux;
	top->next = (*stack);
	(*stack) = top;
	bot->next = NULL;
}

void	ft_rrotate(t_element **stack_a, t_element **stack_b, char c)
{
	if (c == 'a')
	{
		rrotate(stack_a);
		ft_printf("rra\n");
	}
	if (c == 'b')
	{
		rrotate(stack_b);
		ft_printf("rrb\n");
	}
	if (c == 'r')
	{
		rrotate(stack_a);
		rrotate(stack_b);
		ft_printf("rrr\n");
	}
}
