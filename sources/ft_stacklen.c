/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ridalgo- <ridalgo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 18:34:58 by ridalgo-          #+#    #+#             */
/*   Updated: 2022/11/28 18:36:10 by ridalgo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_stacklen(t_element **stack)
{
	int	i;
	t_element *aux;

	aux = *stack;
	i = 0;
	while (aux)
	{
		i++;
		aux = aux->next;
	}
	return (i);
}
