/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_costs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ridalgo- <ridalgo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 11:44:53 by ridalgo-          #+#    #+#             */
/*   Updated: 2022/12/05 11:47:10 by ridalgo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void ft_get_costs(int stackLenght_a, t_element **stack)
{
	int	stackLenght_b;
	t_element	*auxStack;

	stackLenght_b = ft_stacklen(stack);
	auxStack = *stack;
	while (auxStack)
	{
		if (auxStack->position <= (stackLenght_b / 2))
			auxStack->top_b = auxStack->position;
		else
			auxStack->top_b = auxStack->position - stackLenght_b;
		if (auxStack->target <=  (stackLenght_a / 2))
			auxStack->top_a = auxStack->target;
		else
			auxStack->top_a = auxStack->target - stackLenght_a;
		auxStack = auxStack->next;
	}
}
