/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_index.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ridalgo- <ridalgo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 20:54:48 by ridalgo-          #+#    #+#             */
/*   Updated: 2022/10/10 21:01:52 by ridalgo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_get_index(t_element *a)
{
	t_element	*i;
	t_element	*j;
	int			count;

	count = 0;
	i = a;
	while (i)
	{
		j = a;
		count = 0;
		while (j)
		{
			if (i->value < j->value)
				j->index++;
			j = j->next;
		}
		i = i->next;
	}
}
