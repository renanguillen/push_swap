/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_position.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ridalgo- <ridalgo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 15:26:16 by ridalgo-          #+#    #+#             */
/*   Updated: 2022/10/21 15:26:34 by ridalgo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_get_position(t_element **stack)
{
	t_element	*aux;
	int			position;

	position = 0;
	aux = *stack;
	while (aux)
	{
		aux->position = position++;
		aux = aux->next;
	}
}
