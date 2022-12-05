/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ridalgo- <ridalgo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 17:33:44 by ridalgo-          #+#    #+#             */
/*   Updated: 2022/12/05 11:16:56 by ridalgo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_print_stack(t_element **stack, char c)
{
	t_element	*aux;

	aux = *stack;
	ft_printf("STACK %c\n", c);
	while (aux)
	{
		ft_printf("%d-Value:%d - Index:%d - Target:%d - CostA:%d - CostB:%d\n",
			(aux)->position, (aux)->value, (aux)->index, (aux)->target, (aux)->top_a, (aux)->top_b);
		(aux) = (aux)->next;
	}
}
