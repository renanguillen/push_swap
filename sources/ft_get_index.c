/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_index.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ridalgo- <ridalgo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 20:54:48 by ridalgo-          #+#    #+#             */
/*   Updated: 2022/10/11 21:19:57 by ridalgo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_get_index(t_element *a)
{
	t_element	*i;
	t_element	*j;
	int			counter;

	i = a;
	while (i)
	{
		j = a;
		counter = 0;
		while (j)
		{
			if (i->value < j->value)
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
