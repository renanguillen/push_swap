/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_index.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ridalgo- <ridalgo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 20:54:48 by ridalgo-          #+#    #+#             */
/*   Updated: 2022/12/15 13:59:48 by ridalgo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	ft_appendix(t_element **stack)
{
	ft_free_memory(stack);
	ft_error();
}

void	ft_get_index(t_element **stack)
{
	t_element	*i;
	t_element	*j;
	int			counter;

	i = *stack;
	while (i)
	{
		j = *stack;
		counter = 0;
		while (j)
		{
			if (j->value > i->value)
				j->index++;
			else if (i->value == j->value)
			{
				counter++;
				if (counter == 2)
					ft_appendix(stack);
			}
			j = j->next;
		}
		i = i->next;
	}
}
