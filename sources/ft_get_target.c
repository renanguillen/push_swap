/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_target.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ridalgo- <ridalgo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 16:37:41 by ridalgo-          #+#    #+#             */
/*   Updated: 2022/10/24 15:02:47 by ridalgo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	exception(t_element **stack, int closest)
{
	t_element	*aux;
	int			target;

	target = 0;
	aux = *stack;
	while (aux)
	{
		if (aux->index < closest)
		{
			closest = aux->index;
			target = aux->position;
		}
		aux = aux->next;
	}
	return (target);
}

static int	stack_comparison(t_element **stack, int b_index)
{
	t_element	*aux;
	int			closest;
	int			target;

	closest = 2147483647;
	target = 0;
	aux = *stack;
	while (aux)
	{
		if (aux->index > b_index && aux->index < closest)
		{
			closest = aux->index;
			target = aux->position;
		}
		aux = aux->next;
	}
	if (closest != 2147483647)
		return (target);
	else
		return (exception(stack, closest));
}

void	ft_get_target(t_element **stack_a, t_element **stack_b)
{
	t_element	*aux;

	ft_get_position(stack_a);
	ft_get_position(stack_b);
	aux = *stack_b;
	while (aux)
	{
		aux->target = stack_comparison(stack_a, aux->index);
		aux = aux->next;
	}
}
