/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ridalgo- <ridalgo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 14:03:59 by ridalgo-          #+#    #+#             */
/*   Updated: 2022/10/20 15:18:09 by ridalgo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static void	push(t_element **src, t_element **dst)
{
	t_element	*aux;

	if (*src == NULL)
		return ;
	aux = (*src)->next;
	(*src)->next = *dst;
	*dst = *src;
	*src = aux;
}

void	ft_push(t_element **stack_a, t_element **stack_b, char c)
{
	if (c == 'a')
	{
		push(stack_a, stack_b);
		ft_printf("pa\n");
	}
	if (c == 'b')
	{
		push(stack_b, stack_a);
		ft_printf("pb\n");
	}
}
