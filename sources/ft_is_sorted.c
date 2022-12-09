/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ridalgo- <ridalgo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 17:46:42 by ridalgo-          #+#    #+#             */
/*   Updated: 2022/12/09 17:46:53 by ridalgo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_is_sorted(t_element **stack)
{
	t_element	*auxiliary;

	if (!*stack)
		return ;
	auxiliary = *stack;
	while (auxiliary->next)
	{
		if (auxiliary->next->value < auxiliary->value)
			return ;
		auxiliary = auxiliary->next;
	}
	exit (EXIT_SUCCESS);
}
