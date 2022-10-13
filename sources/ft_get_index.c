/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_index.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ridalgo- <ridalgo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 20:54:48 by ridalgo-          #+#    #+#             */
/*   Updated: 2022/10/13 19:37:32 by ridalgo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_get_index(t_element *stack)
{
	t_element	*i;
	t_element	*j;
	int			counter;

	i = stack;
	while (i)
	{
		j = stack;
		counter = 0;
		while (j)
		{
			if (j->value > i->value)
				j->index++;
			else if (i->value == j->value)
			{
				counter++;
				if (counter == 2)
					ft_error();
			}
			j = j->next;
		}
		i = i->next;
	}
}
